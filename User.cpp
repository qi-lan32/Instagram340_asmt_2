// TODO: complete for now
// TO DO: #include needed standard libraries and your own libraries here
#include "User.h"
#include <string>
#include "LinkedBagDS/LinkedBag.h"
#include "Post.h"

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
    int numOfPosts = posts.getCurrentSize();
    Node<Post> *temp = posts.getHeadPtr();
    Post post;  //problem?

    if(numOfPosts == 0){
        cout << "You do not have any posts." << endl;
    }else{
        cout << User::username << "'s Posts\n" << "--------------------------------------" << endl;
        while(temp != nullptr){
            post = temp->getItem();
            post.printPost();   //problem?
            temp = temp->getNext();
        }
    }
}
// display the post at kth index
void User::displayKthPost(const int& k) const{
    Node<Post> *temp = posts.getHeadPtr();
    Post post;
    int counter = 0;

    //if the kth post exists, display it; else, return message to tell user the post they requested does not exist
    if(posts.getCurrentSize() > k){
        while(temp != nullptr && counter != k){
            temp = temp->getNext();
        }
        post = temp->getItem();
        post.printPost();   //TODO: recognize whether a post is reel or story ?
    } else{
        cout << "Your requested post does not exist." << endl;
    }
}

//remove post at the given index
void User::removePost(const int &index) {
// Find the post, then remove it from the list.
    Node<Post>* item = posts.findKthItem(index);
    Post post = item->getItem();
    posts.remove(post);
    cout << "Your post has been removed." << endl;
}

//modify post at given index
void User::modifyPost(const int &index, const string &newTitle){
    // Find the post, then update the title. Print out edit message -- todo -- not changing title in post obj
    Node<Post>* post = posts.findKthItem(index);
    auto item = post->getItem(); // problem -- type recognized as post (not type of item itself (reel/story))

    cout << "setting new title ... " << endl;
    item.setTitle(newTitle);    // todo -- nOT WORKING??
    item.editMsg(newTitle);
}

// Operator == overloading implementation
bool User::operator==(const User& otherUser) const {
    return (User::username == otherUser.username) && (User::email == otherUser.email);
}

//getters
const string &User::getUsername() const {
    return username;
}

LinkedBag<Post> &User::getPosts() {
    return posts;
}

//setter
void User::setPassword(const string &password) {
    this->password = password;
}












