//
//  main.cpp
//  U
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
    float num;
    cin>>num;
    cout<<fixed<<setprecision(3);
    float after = num-int(num);
    if(after == 0)
    {
        cout<<"int "<<int(num);
    }
    else
    {
        cout<<"float "<< int(num)<<" "<<after;
    }
    return 0;
}
