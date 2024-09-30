#ifndef ASSIGNMENT2_CODE_REEL_H
#define ASSIGNMENT2_CODE_REEL_H

#include "Post.h"

class Reel : public Post{
public:
    Reel();
    Reel(const std::string& title, const int& timeStamp);
    //print out edit message
    void editMsg() const;
    //for comparing two reels
    bool operator==(const Reel& otherReel) const;

private:
    int durationLimit;  //limit of up to 90 seconds
};


#endif //ASSIGNMENT2_CODE_REEL_H
