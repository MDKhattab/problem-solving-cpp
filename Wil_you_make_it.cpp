#include<iostream>
using namespace std;


bool zero_fuel(int distance_to_pump, int mpg, int fuel_left)
{
  // if(distance_to_pump <= (mpg*fuel_left))
  // {
  //   return 1;
  // }
  // return 0;

  return distance_to_pump <= (mpg*fuel_left);
}



int main()
{
  cout << zero_fuel(100,25,4);

  return 0;
}