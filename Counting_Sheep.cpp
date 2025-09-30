#include<iostream>
#include<vector>
using namespace std;


int count_sheep(vector<bool> arr) 
{
  int count = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    if(arr.at(i) == true)
    {
        count++;
    }
  }
  return count;
}



int main()
{

    vector<bool> array1 = { true,  true,  true,  false,
                            true,  true,  true,  true ,
                            true,  true, true,  false,
                            true,  false, false, true ,
                            true,  true,  true,  true ,
                            false, false, true,  true };
    int count = count_sheep(array1);
    cout << count;


    return 0;
}


