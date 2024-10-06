// TODO: complete for now
// TO DO: #include needed standard libraries and your own libraries here
#include "User.h"
#include <string>
#include "LinkedBagDS/LinkedBag.h"

using namespace std;

// TO DO: function implementations
//constructor
User::User(){}
User::User(std::string username, std::string password, std::string email)
    :username(username), password(password), email(email){
}
User::User(std::string username, std::string email, std::string password, std::string bio, std::string profilePicture):
        username(username), email(email), password(password), bio(bio), profilePicture(profilePicture), posts(){
}

//displays user profile info
void User::displayProfile() const{
    cout << User::username << "\nEmail: " << User::email << "\nBio: " << User::bio
    << "\nProfile Picture: " << User::profilePicture << endl;
}

//display all the posts of user ----- IF NOT WORK, then use (.toVector()) and iterate vector [similar to array]
void User::displayAllPosts() const {
    Node<Post>* curr = posts.getHeadPtr();
    Post post;

    cout << User::username << "'s Posts\n" << "--------------------------------------" << endl;
    //iterate through the posts linked list and print details of each post
    while(curr != nullptr){
        post = curr->getItem();
        cout << post.getTitle() << " || " << post.getVideoLength() << " seconds || " << post.getLikes() << " likes\n"
            << post.getTimeStamp() << " || " << post.getUrl() << " \n ==============================================" << endl;
        curr = curr->getNext();
    }
}

// Operator == overloading implementation
bool User::operator==(const User& otherUser) const {
    return (User::username == otherUser.username) && (User::email == otherUser.email);
}

//getters
const string &User::getUsername() const {
    return username;
}
const LinkedBag<Post> &User::getPosts() const {
    return posts;
}

//setter
void User::setPassword(const string &password) {
    this->password = password;
}










