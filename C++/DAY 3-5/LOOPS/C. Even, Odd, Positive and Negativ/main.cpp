//
//  main.cpp
//  C. Even, Odd, Positive and Negativ
//
//  Created by Parth Mahajan on 27/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int even=0,odd=0,pos=0,neg=0;
    while(n>0)
    {
        int num;
        cin>>num;
        if(num%2 == 0)
        {
            even++;
        }
        if(num%2 != 0)
        {
            odd++;
        }
        if(num>0)
        {
            pos++;
        }
        if(num<0)
        {
            neg++;
        }
        n--;
    }
    cout<<"Even: "<<even<<endl;
    cout<<"Odd: "<<odd<<endl;
    cout<<"Positive: "<<pos<<endl;
    cout<<"Negative: "<<neg<<endl;
    return 0;
}
