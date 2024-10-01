//TODO: complete for now

#include "Reel.h"

//VARIABLE

//CONSTRUCTORS
Reel::Reel(){Reel::durationLimit = 90;}
Reel::Reel(const std::string& title):
    Post(title){
        Reel::durationLimit = 90;
}

//METHODS
//print out edit message
void Reel::editMsg() const{
    cout << "You have added added a filter, AR effects, and music to the reel \"" << Reel::title << "\""
    << endl;
}

//compare title of two reels
bool Reel::operator==(const Reel& otherReel) const{
    return Reel::title == otherReel.title;
}

