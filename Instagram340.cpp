//TODO: WORKING ON

// TO DO: Implementation of Instagram340 functions
#include <iostream>
#include <string>
#include "Instagram340.h"
#include "LinkedBagDS/LinkedBag.h"
#include "User.h"

using namespace std;

Instagram340::Instagram340()
    :users(){
}

Instagram340::~Instagram340(){
	Instagram340::users.clear();
}

void Instagram340::createUser(const std::string& username, const std::string& email, const std::string& password,
				const std::string& bio, const std::string& profilePicture){
	// TO DO: implement function
    User* newUser = new User(username, email, password, bio, profilePicture);

    users.append(newUser); //TODO: newEntry != user obj?
}

User Instagram340::getUser(const int& indexK){
//    Node* curr = users.get
//	// TO DO: implement function
//    for(int i = 0; i < indexK; i++){
//
//    }
}