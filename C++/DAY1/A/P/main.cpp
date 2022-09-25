//
//  main.cpp
//  P
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    if((n/1000)%2 == 0)
    {
        cout<<"EVEN";
    }
    else
    {
        cout<<"ODD";
    }
    return 0;
}
