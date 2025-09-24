#include<iostream>
using namespace std;

int past(int h, int m, int s) 
{
  return ((h*60*60)+(m*60)+s)*1000;
}



int main()
{
    cout << past(0,1,1);



    return 0;
}