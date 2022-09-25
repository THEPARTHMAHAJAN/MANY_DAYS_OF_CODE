//
//  main.cpp
//  Y
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;

int main() {
    long long a,b,c,d;
    cin>>a>>b>>c>>d;
    long long num = (a%100)*(b%100)*(c%100)*(d%100);
    if(num % 100)
    {
        if((num % 100)<=9)
        {
            cout <<0<< num % 100;
            
        }
        else{cout<<num%100;}
        return 0;
    }
    cout<<0<<0;
    return 0;
}
