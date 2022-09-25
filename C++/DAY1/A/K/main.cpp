//
//  main.cpp
//  K
//
//  Created by Parth Mahajan on 24/09/22.
//

#include <iostream>
using namespace std;
int main()
{
    int A,B,C;
    cin>>A>>B>>C;
    int min = A<B ? (C<A?C:A):(B<C?B:C);
    int max = A>B ? (A>C?A:C) : (B>C?B:C);
//    cout << max << endl;
    cout << min << " "<<max;
    return 0;
}













