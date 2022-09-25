//
//  main.cpp
//  H
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;
#include <cmath>
int main()
{
    float A,B;
    cin>>A>>B;
    int ceil=0;
    if(A/B > int(A/B))
    {
        ceil =int((A/B)+1);
    }
    else
    {
        ceil = int(A/B);
    }
    cout <<"floor "<< A << " / " << B << " = " << int(A/B) << endl;
    cout << "ceil "<< A << " / " << B << " = " << ceil << endl;
    cout <<"round "<< A << " / " << B << " = " << round(A/B) << endl;
    return 0;
}
