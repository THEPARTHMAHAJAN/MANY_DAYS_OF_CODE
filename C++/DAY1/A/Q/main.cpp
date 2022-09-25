//
//  main.cpp
//  Q
//
//  Created by Parth Mahajan on 24/09/22.
//
/**
 Print Q1, Q2, Q3, Q4 according to the quarter in which the point belongs to.
 Print "Origem" If the point is at the origin.
 Print "Eixo X" If the point is over X axis.
 Print "Eixo Y" if the point is over Y axis.
 */
#include <iostream>
using namespace std;

int main() {
    float a,b;
    cin>>a>>b;
    if(a == 0 && b == 0)
    {
        cout<<"Origem";
    }
    else if (a == 0 && b != 0)
    {
        cout<<"Eixo Y";
    }
    else if (b == 0 && a != 0)
    {
        cout<<"Eixo X";
    }
    else if (a>0 && b>0)
    {
        cout<<"Q1";
    }
    else if (a>0 && b<0)
    {
        cout<<"Q4";
    }
    else if (a<0 && b>0)
    {
        cout<<"Q2";
    }
    else if (a<0 && b<0)
    {
        cout<<"Q3";
    }
    return 0;
}
