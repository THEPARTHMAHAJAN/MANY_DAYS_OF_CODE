//
//  main.cpp
//  I. Palindrome
//
//  Created by Parth Mahajan on 27/09/22.
//
/**
 
 random = 0;
 1234
 1234%10;
 rem=4
 random = random*10+rem;
 
*/

#include <iostream>
using namespace std;

int main()
{
    long n,rand=0,extra;
    cin>>n;
    extra=n;
    while(n>0)
    {
        int rem = n%10;
        rand = rand * 10 + rem;
        n = n/10;
    }
    if(rand==extra)
    {
        cout<<rand<<endl;
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<rand<<endl;
        cout<<"NO"<<endl;
    }
    return 0;
}
