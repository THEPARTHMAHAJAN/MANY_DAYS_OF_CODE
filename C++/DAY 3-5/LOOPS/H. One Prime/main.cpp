//
//  main.cpp
//  H. One Prime
//
//  Created by Parth Mahajan on 27/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    int x;
    cin>>x;
    for(int i=2;i<=x/2;i++)
    {
        if(x % i == 0)
        {
            cout<<"NO";
            return 0;
        }
    }
    cout<<"YES";
    return 0;
}


