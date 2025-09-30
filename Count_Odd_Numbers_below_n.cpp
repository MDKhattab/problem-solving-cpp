#include<iostream>
using namespace std;

int odd_count(int n)
{
  // int count = 0;
  // for(int i = 1; i < n;i++)
  // {
  //   count++;
  //   i++;
  // }
  // return count;

  // return (n > 0) ? (n >> 1) : 0;

  return n/2;
}



int main()
{
  int counts = odd_count(15);
  cout << counts ;
  return 0;
}