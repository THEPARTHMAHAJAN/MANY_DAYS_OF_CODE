//
//  main.cpp
//  R
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    int num;
    cin>>num;
    cout<< (num/365)<<" years"<<endl;
    cout<< ((num%365)/30)<<" months"<<endl;
    cout<< ((num%365)%30)<<" days";
    return 0;
}
