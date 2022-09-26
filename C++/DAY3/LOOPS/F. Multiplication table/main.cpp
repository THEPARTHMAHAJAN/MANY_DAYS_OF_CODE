//
//  main.cpp
//  F. Multiplication table
//
//  Created by Parth Mahajan on 27/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=12;i++)
    {
        cout<<n<<" * "<<i<<" = "<<n*i<<endl;
    }
    return 0;
}
