#ifndef POST_H
#define POST_H
// TO DO: #include all the standard libraries and your own libraries here
#include <string>

// To DO: define the class Post with the necessary functions' prototypes and data fields
class Post{
protected:
    std::string title;
    int timeStamp;
    int likes;
    std::string url;

public:
    //constructors and destructor
    Post();
    explicit Post(const std::string& title);
    ~Post();
    //allows comparison of two posts based on their title
    bool operator==(const Post& otherPost) const;
    //prints out edit message
    virtual void editMsg() const;
};

#endif