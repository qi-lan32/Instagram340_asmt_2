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
                int k;
                LinkedBag posts = user.getPosts();
                //ask the user for a value k
                cout << "Enter a value for the 'k': " << endl;
                cin >> k;
                // Find the Kth post, if k > Linked Bag size,
                //    return an error message that includes the size of the Linked Bag
                if(k > posts.getCurrentSize()){
                    cout << "Your requested post is out of range!" << endl;
                }else{
                    Node<Post>* item = posts.findKthItem(k);
                    Post kth = item->getItem();

                    cout<< kth.getTitle() << " || " << kth.getVideoLength() << " seconds || " << kth.getLikes() << " likes\n"
                        << kth.getTimeStamp() << " || " << kth.getUrl() << endl;
                }

				break;
			}
			case 6: {
                //TO DO: ask user for index of post they want to modify and the new title
                int index;
                string newTitle;
                LinkedBag posts = user.getPosts();
				//ask user for input on index and title
                cout << "What is the index of the post you would like to modify? Enter: " << endl;
                cin >> index;

                // If index > Linked Bag size, print out error message
                if(index > posts.getCurrentSize()){
                    cout << "Your index is out of range! The number of total posts you have is " << posts.getCurrentSize() << endl;
                    break;
                }
                cout << "Enter the new title you would like to change to: " << endl;
                cin >> newTitle;

				// Find the post, then update the title. Print out edit message
                Node<Post>* post = posts.findKthItem(index);
                Post item = post->getItem();
                item.setTitle(newTitle);
                item.editMsg(newTitle);

				break;
			}
			case 7: {
				// TO DO: ask the user for the index of the post they want to delete and delete it
                int index;
                LinkedBag posts = user.getPosts();
                //ask user for input on index
                cout << "What is the index of the post you would like to delete? Enter: " << endl;
                cin >> index;

                // If index > LinkedBag size, return error message
                if(index > posts.getCurrentSize()){
                    cout << "Your index is out of range! The number of total posts you have is " << posts.getCurrentSize() << endl;
                    break;
                }
				// Find the post, then remove it from the list. 
                Node<Post>* item = posts.findKthItem(index);
                Post post = item->getItem();
                posts.remove(post);

                cout << "Your post has been removed." << endl;
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
    string username, email, password, bio, profilePic;

	cout << "\n Welcome to Instagram340:" << endl;
	// TO DO: Ask the user to enter their information to instantiate a new user object

    cout << "Please enter your username: " << endl;
    cin >> username;
    cout << "Please enter your email: " << endl;
    cin >> email;
    cout << "Please enter your password: " << endl;
    cin >> password;
    cout << "Please enter your bio: " << endl;
    cin >> bio;
    cout << "Please enter your profile picture: " << endl;
    cin >> profilePic;

	// call instagram createUser function 
	// replace /*...*/ with the right parameters
	instagram.createUser("username","@email.com", "password","this is my bio.", "this is my profile pic.");

	// Retrieve the user 
	User currentUser = instagram.getUser(0);
    currentUser.displayProfile();
	displayUserManu(currentUser);
				
	return 0;
}