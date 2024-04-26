
#ifndef EVILCOMPUTER_H
#define EVILCOMPUTER_H

#include <string>

using namespace std;

class EvilComputer
{
public:
    // Creates a new evil computer with random passwords.
    EvilComputer();

    // Creates a new evil computer with specific passwords.
    EvilComputer(string dave_pw, string mr_mean_pw, string ms_chief_pw, string dr_evil_pw);

    // Guess a password for a user.
    void guess(string user, string guess);

    // Returns whether a user's password has been correctly guessed.
    bool is_hacked(string user);

private:
    int index(string user);
    char random_char();

    // This field keep the passwords of users. 
    string passwords[5];
    // This field keeps track if the user is hacked or not. 
    bool hacked[5];
};

#endif
