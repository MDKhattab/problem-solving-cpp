#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


bool is_uppercase(const string &s)
{
  for(auto ch : s)
  {
    if(islower(ch))
    {
        return 0;
    }
    continue;
  }
  return 1;

//   for (int i = 0; s[i] != 0; ++i)
//     if (s[i] >= 97 && s[i] <= 122)
//       return false;
//   return true;

  
}



int main()
{
    cout << is_uppercase("MOHAMEd");



    return 0;
}