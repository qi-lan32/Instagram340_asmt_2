// TO DO: #include all the standard libraries and your own libraries here
#include <chrono>
#include "Post.h"
#include "User.h"

using namespace std;
// TO DO: function implementations
//constructors
Post::Post(){};
Post::Post(const std::string& title, const int& videoLength, const std::string& url):
        title(title), url(url), videoLength(videoLength), likes(0), timeStamp(std::chrono::steady_clock::now()){

}
//destructor
Post::~Post() {};

// When creating a post, you may use this code to set time stamp
auto time_stamp = std::chrono::steady_clock::now();

// ------------------------------------------------------------------------------
// Operator overloading implementation
bool Post::operator==(const Post& otherPost) const {
    return Post::title == otherPost.title && timeStamp == otherPost.timeStamp && likes == otherPost.likes && url == otherPost.url;
}

//print out edit message when user edits
void Post::editMsg() const {
    cout << "You have edited your Post." << endl;
}
//print post
void Post::printPost() const {
    cout << "Post \"" << title << "\" || " <<  videoLength << " seconds || " << likes << " likes || " << url << endl;
}

//GETTERS
const string &Post::getTitle() const {
    return title;
}

int Post::getLikes() const {
    return likes;
}

const string &Post::getUrl() const {
    return url;
}

int Post::getVideoLength() const {
    return videoLength;
}


//SETTERS
void Post::setTitle(const string &title) {
    Post::title = title;
    cout << "You have changed your post title to \"" << title << "\"." << endl;
}
