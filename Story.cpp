//TODO: complete for now

#include "Story.h"
#include "Post.h"

using namespace std;

//VARIABLES
int durationLimit = 60; //in seconds

//CONSTRUCTORS
Story::Story(){};
Story::Story(const std::string& title, const int& videoLength, const std::string url)
    :Post(title, videoLength, url){
        Story::durationLimit = 60;
};

//METHODS
// When displaying a story, use this to compute expected expiration time: timeToExpiration
int Story::computeTimeToExpiration() const{
    const int secondsInHour = 3600;
    // 24 hours in seconds
    const int expiresAfter = 24 * secondsInHour;

    // Get current time
    auto time_now = std::chrono::steady_clock::now();
    // Compute elapsed time since post creation
    std::chrono::duration<double> elapsed_seconds = time_now - time_stamp;
    // time to expiration in hours
    int timeToExpiration = (expiresAfter - elapsed_seconds.count()) / secondsInHour;

    return timeToExpiration;
}

//print out edit message
void Story::editMsg() const {
    cout << "A filter, music, stickers and effects have been added to the post \"" << Story::title <<"\""
    << endl;
}
//comparing title of two stories
bool Story::operator==(const Story& otherStory) const{
    return Story::title == otherStory.title;
}