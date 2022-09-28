//
//  main.cpp
//  O. Pyramid
//
//  Created by Parth Mahajan on 28/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=0;j<i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}
