//
//  main.cpp
//  A_WINTER_SALE
//
//  Created by Parth Mahajan on 25/09/22.
//

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float S,P;
    cin>>S>>P;
    float op = P/(1-(S/100));
    
    cout<<fixed<<setprecision(2)<<op;
    return 0;
}
