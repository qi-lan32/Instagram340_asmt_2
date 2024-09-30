//TODO: complete for now

// TO DO: #include all the standard libraries and your own libraries here
#include <chrono>
#include "Post.h"

using namespace std;
// TO DO: function implementations
//constructors
Post::Post(){};
Post::Post(const std::string& title):
        title(title){
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
void Post::editMSG() const {
    cout << "You have edited your post \"" << Post::title << "\"" << endl;
}

