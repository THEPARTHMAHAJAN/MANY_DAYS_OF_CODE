//
//  main.cpp
//  V
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;

int main() {
    int A,B;
    char ch;
    cin>>A>>ch>>B;
    if(ch == '>')
    {
        if(A>B)
        {
            cout<<"Right";
            return 0;
        }
    }
    if(ch == '<')
    {
        if(A<B)
        {
            cout<<"Right";
            return 0;
        }
    }
    if(ch == '=')
    {
        if(A==B)
        {
            cout<<"Right";
            return 0;
        }
    }
    cout<<"Wrong";
    return 0;
}
