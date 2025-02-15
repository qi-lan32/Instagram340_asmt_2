#ifndef POST_H
#define POST_H
// TO DO: #include all the standard libraries and your own libraries here
#include <string>
#include <chrono>

// To DO: define the class Post with the necessary functions' prototypes and data fields
class Post{
protected:
    std::string title;
    std::chrono::time_point<std::chrono::steady_clock> timeStamp;
    int likes;
    std::string url;
    int videoLength;

public:
    //constructors and destructor
    Post();
    Post(const std::string& title, const int& videoLength, const std::string& url);
    ~Post();
    //allows comparison of two posts based on their title
    bool operator==(const Post& otherPost) const;
    //prints out edit message
    virtual void editMsg() const;
    //display post
    virtual void printPost() const;

    //getters
    const std::string &getTitle() const;
    int getLikes() const;
    const std::string &getUrl() const;
    int getVideoLength() const;

    //setters
    void setTitle(const std::string &title);
};

#endif