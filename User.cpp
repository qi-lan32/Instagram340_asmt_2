// TODO: complete for now
// TO DO: #include needed standard libraries and your own libraries here
#include "User.h"
#include <string>

using namespace std;

// TO DO: function implementations
//constructor
User::User(std::string username, std::string email, std::string password, std::string bio, std::string profilePicture):
        username(username), email(email), password(password), bio(bio), profilePicture(profilePicture){
}

//displays user profile info
void User::displayProfile() const{
    cout << User::username << "\nEmail: " << User::email << "\nBio: " << User::bio
    << "\nProfile Picture: " << User::profilePicture << endl;
}

// Operator == overloading implementation
bool User::operator==(const User& otherUser) const {
    return (User::username == otherUser.username) && (User::email == otherUser.email);
}

//getters
const string &User::getUsername() const {
    return username;
}

//setter
void User::setPassword(const string &password) {
    this->password = password;
}







