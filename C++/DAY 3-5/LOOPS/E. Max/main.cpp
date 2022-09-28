//
//  main.cpp
//  E. Max
//
//  Created by Parth Mahajan on 27/09/22.
//

#include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int max=0;
    while(n)
    {
        int num;
        cin>>num;
        if(num>max)
        {
            max=num;
        }
        n--;
    }
    cout<<max;
    return 0;
}
