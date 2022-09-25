//
//  main.cpp
//  Z
//
//  Created by Parth Mahajan on 25/09/22.
//

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    double f = b * log(a);
    double s = d * log(c);
    if(f>s)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
    return 0;
}
