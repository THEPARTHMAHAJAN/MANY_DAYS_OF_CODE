//
//  main.cpp
//  B_MEME_MOMO
//
//  Created by Parth Mahajan on 25/09/22.
//
/****
 If both 𝑎 and 𝑏 are divisible by k, both of them win and you should print "Both".
 If 𝑎  is divisible by 𝑘 but 𝑏 isn't, Memo wins and you should print "Memo".
 If 𝑏 is divisible by 𝑘  but 𝑎  isn't, Momo wins and you should print "Momo".
 If both 𝑎  and 𝑏  are not divisible by 𝑘 , no one wins and you should print "No One".
 
 */

#include <iostream>
using namespace std;

int main()
{
    long long a,b,k;
    cin>>a>>b>>k;
    if(a%k==0 && b%k==0)
    {
        cout<<"Both";
    }
    else if (a%k==0 && b%k != 0)
    {
        cout<<"Memo";
    }
    else if (a%k != 0 && b%k == 0)
    {
        cout<<"Momo";
    }
    else if (a%k != 0 && b%k != 0)
    {
        cout<<"No One";
    }
    return 0;
}
