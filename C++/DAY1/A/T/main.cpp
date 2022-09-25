//
//  main.cpp
//  T
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;

int main()
{
    long long A,B,C;
    cin>>A>>B>>C;
    long long max = A > B? (A>C?A:C) : (B>C?B:C);
    long long min = A<B ? (A<C?A:C) : (B<C?B:C);
    long long num = (A+B+C)-(max+min);
    cout<<min<<endl<<num<<endl<<max<<endl<<"\n";
    cout<<A<<endl<<B<<endl<<C;
    return 0;
}
