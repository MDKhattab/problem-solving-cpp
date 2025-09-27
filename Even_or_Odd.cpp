#include<iostream>
using namespace std;


string even_or_odd(int number) 
{
  return (number % 2 == 0)? "Even": "Odd";
  
}


int main()
{
    cout << even_or_odd(11);


    return 0;
}