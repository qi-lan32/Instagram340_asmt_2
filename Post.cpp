//TODO: complete for now

// TO DO: #include all the standard libraries and your own libraries here
#include <chrono>
#include "Post.h"

using namespace std;
// TO DO: function implementations
//constructors
Post::Post(){};
Post::Post(const std::string& title, const int& videoLength, const std::string& url):
        title(title), url(url), videoLength(videoLength){
}
//destructor
Post::~Post() {};

// When creating a post, you may use this code to set time stamp
auto time_stamp = std::chrono::steady_clock::now();

// ------------------------------------------------------------------------------
// Operator overloading implementation
bool Post::operator==(const Post& otherPost) const {
	return Post::title == otherPost.title;
}

//print out edit message when user edits
void Post::editMsg() const {
    cout << "You have edited your post \"" << Post::title << "\"" << endl;
}

//GETTERS
const string &Post::getTitle() const {
    return title;
}

int Post::getTimeStamp() const {
    return timeStamp;
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

