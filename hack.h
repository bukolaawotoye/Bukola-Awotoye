
#include "evilcomputer.h"

/** This function is the main function that is called in the Main.cpp
You can call your recursion functions here to
hack Guest, Dave, Dr. Evil, Ms. Chief, and Mr Mean
*/

void hack(EvilComputer *ec);

/* We should define our recursion functions here to hack each user
We can have one function for all users, or have different functions for each user. Here we are using one function for each User.

In these functions, we pass EvilComputer* ec as one of the input as well
so that you can check if the string that you generating is the password for the user.
For example:

(*ec).guess("Guest", "passw123"); is going to check if the password of the guest is passw123
and if it is correct, mark guest as hacked

(*ec).is_hacked("Dave") is returning boolean if you want to check Dave is hacked or not.
Do you think that would be a good method for one of the base cases in recursion? :D

*/
void Hack_guestComputer(EvilComputer *ec, string partial);
void Hack_daveComputer(EvilComputer *ec, string partial);
void Hack_mr_meanComputer(EvilComputer *ec, string partial);
void Hack_ms_chiefComputer(EvilComputer *ec, string partial);
void Hack_dr_evilComputer(EvilComputer *ec, string partial);
