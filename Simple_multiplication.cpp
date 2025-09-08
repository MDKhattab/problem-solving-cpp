#include<iostream>
using namespace std;

int simpleMultiplication(int a)
{
    if (a % 2 == 0)
    {
        return a * 8;
    }
    else
    {
        return a * 9;
    }
    
   //return (a % 2 == 0)?a * 8: a * 9;
   // return a * ( 8 + ( a & 1 ) );
   // return a * (a % 2 == 0 ? 8 : 9);
   // return a * (8 + a % 2);
}

int main()
{
   cout << simpleMultiplication(2);

    return 0;
}