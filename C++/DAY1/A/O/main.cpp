//
//  main.cpp
//  O
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    int a,b;
    char ch;
    cin >> a >> ch >> b;
    if(ch == '+')
    {
        cout<<a+b;
    }
    else if (ch == '-')
    {
        cout<<a-b;
    }
    else if (ch == '*')
    {
        cout<<a*b;
    }
    else if (ch == '/')
    {
        cout<<a/b;
    }
    return 0;
}
