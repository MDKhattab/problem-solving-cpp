#include<iostream>
using namespace std;

string spinWords(const string &str)
{
  int size = str.size();
  //cout << size ;            // 7
  //cout << str.length();   // 7
  string newstr;  
  

  
  if (size >= 5)
  {
    for(int i=size ;i >= 0; i--)
    {
      newstr += str[i] ;
    }
  }
  return newstr;
}// spinWords



int main()
{
  string  result;
  result = spinWords("Welcome to your Home");
  cout << result ;



  return 0;
}