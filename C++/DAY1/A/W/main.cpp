//
//  main.cpp
//  W
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    long long a,b,c;
    char op,eq='=';
    
    cin>>a>>op>>b>>eq>>c;
    if(op == '+')
    {
        if((a+b)==c)
        {
            cout<<"Yes";
            return 0;
        }
        cout<<a+b;
    }
    else if(op == '-')
    {
        if((a-b)==c)
        {
            cout<<"Yes";
            return 0;
        }
        cout<<a-b;
    }
    else if(op == '*')
    {
        if((a*b)==c)
        {
            cout<<"Yes";
            return 0;
        }
        cout<<a*b;
    }
    
    return 0;
}
