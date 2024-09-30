//TODO: working on

#ifndef ASSIGNMENT2_CODE_STORY_H
#define ASSIGNMENT2_CODE_STORY_H

#include "Post.h"
#include <chrono>

class Story : public Post{
public:
    Story();
    Story(const std::string& title);
    //print out edit message
    void editMsg() const;
    //for comparing two reels
    bool operator==(const Story& otherStory) const;
private:
    // This is a helper function -- it should be private.
    int computeTimeToExpiration() const;
    int durationLimit;  // 60 second limit
};


#endif //ASSIGNMENT2_CODE_STORY_H
