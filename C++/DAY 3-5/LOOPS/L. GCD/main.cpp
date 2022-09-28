//
//  main.cpp
//  L. GCD
//
//  Created by Parth Mahajan on 27/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    int f,s,gcd = 0;
    cin>>f>>s;
    for(int i=1;i<=s && i<=f ;i++)
    {
        if(f % i == 0 && s % i == 0)
        {
            if(gcd<i)
            {
                gcd=i;
            }
        }
    }
    cout<<gcd;
    return 0;
}
