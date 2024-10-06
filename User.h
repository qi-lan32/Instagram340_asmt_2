#ifndef USER_H
#define USER_H
// TO DO: #include all the standard libraries and your own libraries here
    #include <iostream>
    #include <string>
    #include "LinkedBagDS/LinkedBag.h"
    #include "Post.h"

    // To DO: define the class User with the necessary functions and data fields
    class User{
        private:
            std::string username, email, password, bio, profilePicture;
            LinkedBag<Post> posts;

        public:
            //constructor
            User();
            User(std::string username, std::string password, std::string email);
            User(std::string username, std::string email, std::string password, std::string bio, std::string profilePicture);

            //print out profile of user
            void displayProfile() const;
            //print out all the posts by the user
            void displayAllPosts() const;
            // Operator == overloading function prototype:
            bool operator==(const User& otherUser) const;

            //getter
            const std::string &getUsername() const;
            const LinkedBag<Post> &getPosts() const;

        //setter
            void setPassword(const std::string &password);

    };

#endif


