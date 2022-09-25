//
//  main.cpp
//  M
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    if(int(ch)>=48 && int(ch)<=57)
    {
        cout<<"IS DIGIT";
    }
    else if (int(ch)>=65 && int(ch)<=90)
    {
        cout<<"ALPHA\nIS CAPITAL";
    }
    else if (int(ch)>=97 && int(ch)<=122)
    {
        cout<<"ALPHA\nIS SMALL";
    }
    cout<<endl;
    return 0;
}
