#include "hack.h"
#include "evilcomputer.h"
/* We should define our recursion functions here to hack each user
We can have one function for all users, or have different functions for each
user. Here we are using one function for each User.

In these functions, we pass EvilComputer* ec as one of the input as well
so that you can check if the string that you generating is the password for the
user. For example:

(*ec).guess("Guest", "passw123"); is going to check if the password of the guest
is passw123 and if it is correct, mark guest as hacked

(*ec).is_hacked("Dave") is returning boolean if you want to check Dave is hacked
or not. Do you think that would be a good method for one of the base cases in
recursion? :D*/
void hack(EvilComputer *ec)
{
    Hack_ms_chiefComputer(ec, "");
    Hack_mr_meanComputer(ec, "");
    Hack_daveComputer(ec, "lol");
    Hack_dr_evilComputer(ec, "gato");
    Hack_guestComputer(ec, "passw123");
}
void Hack_guestComputer(EvilComputer *ec, string partial)

{
    ec->guess("Guest", partial);
    if (ec->is_hacked("Guest") == true)
        return;
    if (partial.size() == 6)
        return;
}
void Hack_daveComputer(EvilComputer *ec, string partial)
{
    ec->guess("Dave", partial);
    if (partial.size() == 6)
        return;
    if (ec->is_hacked("Dave") == true)
        return;
    for (char i = '0'; i <= '9'; i++)
    {
        Hack_daveComputer(ec, partial + i);
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        Hack_daveComputer(ec, partial + i);
    }
}
void Hack_mr_meanComputer(EvilComputer *ec, string partial)
{
    ec->guess("Mr. Mean", partial);
    if (partial.size() == 5)
        return;
    if (ec->is_hacked("Mr. Mean") == true)
        return;
    for (char i = '0'; i <= '9'; i++)
    {
        Hack_mr_meanComputer(ec, partial + i);
    }
}
void Hack_ms_chiefComputer(EvilComputer *ec, string partial)
{
    ec->guess("Ms. Chief", partial);
    if (ec->is_hacked("Ms. Chief") == true)
        return;
    if (partial.size() == 6)
        return;
    Hack_ms_chiefComputer(ec, partial + "p");
    Hack_ms_chiefComputer(ec, partial + "q");
}
void Hack_dr_evilComputer(EvilComputer *ec, string partial)
{
    ec->guess("Dr. Evil", partial);
    if (ec->is_hacked("Dr. Evil") == true)
        return;
    if (partial.size() == 6)
        return;
    for (char c1 = '0'; c1 <= '9'; c1++)
    {
        Hack_dr_evilComputer(ec, partial + c1);
        Hack_dr_evilComputer(ec, c1 + partial);
    }
    for (char c2 = 'a'; c2 <= 'z'; c2++)
    {
        Hack_dr_evilComputer(ec, partial + c2);
        Hack_dr_evilComputer(ec, c2 + partial);
    }
}
