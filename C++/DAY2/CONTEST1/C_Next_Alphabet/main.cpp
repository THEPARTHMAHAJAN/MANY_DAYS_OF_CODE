//
//  main.cpp
//  C_Next_Alphabet
//
//  Created by Parth Mahajan on 25/09/22.
//

#include <iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;
    if(ch=='z')
    {
        ch = 'a';
    }
    else
    {
        ch++;
    }
    cout<<ch;
    return 0;
}
