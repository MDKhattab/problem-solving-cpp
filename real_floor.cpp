#include<iostream>
using namespace std;

int getRealFloor(int f) 
{
  return f < 13 ? f==0 ? 0 : f<0 ? f :f-1 : f-2 ;
}



int main()
{
    int floor = getRealFloor(8);
    cout << floor ;


    return 0;
}