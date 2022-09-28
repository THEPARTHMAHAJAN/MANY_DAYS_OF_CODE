//
//  main.cpp
//  G. Factorial
//
//  Created by Parth Mahajan on 27/09/22.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n)
    {
        int num;
        cin>>num;
        int fact=1;
        while(num)
        {
            fact = fact * num;
            num--;
        }
        cout<<fact<<endl;
        n--;
    }
    return 0;
}
