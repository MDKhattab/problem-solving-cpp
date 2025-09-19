#include<iostream>
#include<cmath>
using namespace std;


int mango (int quantity, int price)
{
//    quantity -= quantity / 3 ; 
//    return quantity * price;

  // return (quantity - quantity / 3) * price;
  return ceil(quantity * 2 / 3.0) * price; 
}


int main()
{
   cout << mango(6,5) << endl;      // 20$
   cout << mango(9,5) << endl;      // 30$
   cout << mango(8,5) << endl;      // 30$
   cout << mango(7,3) << endl;      // 15$




    return 0;
}