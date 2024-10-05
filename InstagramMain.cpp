//TODO: working on

#include <iostream>
#include <string>

// TO DO: #include any other libraries you need
#include "Instagram340.h"
#include "Instagram340.cpp"
#include "User.h"
#include "User.cpp"
#include "Post.h"
#include "Post.cpp"
#include "Reel.h"
#include "Reel.cpp"
#include "Story.h"
#include "Story.cpp"

using namespace std;

/** 
 * 
 * Displays the application's main menu
 * pre create a new object of type User
 * @param user object to interact with
 * 
 * */
void displayUserManu(User& user){
	int userChoice = 0;
	do {
		cout << "\n Hi, "<< user.getUsername() <<", what would you like to do:\n"
		<< "1. Display Profile\n"
		<< "2. Modify Password\n"
		<< "3. Create Post\n"
		<< "4. Display All Posts\n"
		<< "5. Display Kth Post\n"
		<< "6. Modify Post\n"
		<< "7. Delete Post\n"
		<< "0. Logout\n"
		<< "Choice: ";
		cin >> userChoice;

		switch (userChoice) {
			case 1:{
				// TO DO: display user's profile information
				user.displayProfile();
				break;
			}
			case 2: {
				// TO DO: ask for new password and update user's password
                string newPassword;
                cout << "Enter the new password: " << endl;
                cin >> newPassword;
                user.setPassword(newPassword);
				break;
			}
			case 3: {
				// TO DO: ask user to choose between Reel and Story, ask them to input post details:
				//        (title, media URL, video length in seconds)
				//        Your program should set the time stamp to current time (code provided in Post.cpp) 
				// then create the post and add it to the user's posts
                int choice = 0;
                string title, url;
                int videoLength;

                do{
                    cout << "Would you like to make a reel or story? (Enter 1 for reel, 2 for story)\n" << endl;
                    cin >> choice;
                }while(choice = 0 || choice != 1 || choice != 2);

                //make a reel (1) or story (2) according to user's choice
                if(choice == 1){
                    cout << "Enter the title of your reel: " << endl;
                    cin >> title;
                    cout << "Provide the URL of your reel: " << endl;
                    cin >> url;
                    cout << "Provide the length of your reel in seconds: " << endl;
                    cin >> videoLength;

                    Reel newReel(title, url, videoLength); //create new reel using given info
                    LinkedBag temp = user.getPosts(); //get linkedBag of posts from user
                    temp.append(newReel);   //append no reel to the user's posts
                }else{
                    cout << "Enter the title of your story: " << endl;
                    cin >> title;
                    cout << "Provide the URL of your story: " << endl;
                    cin >> url;
                    cout << "Provide the length of your story in seconds: " << endl;
                    cin >> videoLength;

                    Story newStory(title, videoLength, url);
                    LinkedBag temp = user.getPosts();
                    temp.append(newStory);
                }

				break;
			}
			case 4:{
				// TO DO: display all user's posts
				//        You may re-use code from class demo
                user.displayAllPosts();
				break;
			}
			case 5: {
				// TO DO: ask the user for a value k
				// Find the Kth post, if k > Linked Bag size, 
				//    return an error message that includes the size of the Linked Bag
                int k;
                cout << "Enter a value for the 'k': " << endl;
                cin >> k;

                //findkthitem in linkedbag

				break;
			}
			case 6: {
				// TO DO: ask the user for the index of the post they want to modify and the new title
				// Find the post, then update the title. 
				// If index > Linked Bag size, 
				//    return an error message that includes the size of the Linked Bag
				break;
			}
			case 7: {
				// TO DO: ask the user for the index of the post they want to delete 
				// Find the post, then remove it from the list. 
				// If index > LinkedBag size, 
				//    return an error message that includes the size of the Linked Bag
				break;
			}
			case 0: {
				cout << "Logging you out." << endl;
				break;
			}
			default:
				cout << "Invalid choice. Please try again." << endl;
		}

	} while (userChoice != 0);
}


int main(){
	// Instantiating the program using the default constructor
	// With this implementation, the application will only have one user
	Instagram340 instagram;
    string username;

	cout << "\n Welcome to Instagram340:" << endl;
	// TO DO: Ask the user to enter their information 
	//        Instantiate a new User object
//    cout << "Please enter your username: " << endl;
//    cin >> username;


	// call instagram createUser function 
	// replace /*...*/ with the right parameters
	instagram.createUser("username","@email.com", "password","this is my bio.", "this is my profilepic.");


	// Retrieve the user 
	User currentUser = instagram.getUser(0);
    currentUser.displayProfile();
//	displayUserManu(currentUser);
				
	return 0;
}