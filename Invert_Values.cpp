#include<iostream>
#include<vector>
using namespace std;


vector<int> invert (vector<int> values)
{
    for (int i = 0; i < values.size(); i++)
    {
       values[i] *= -1;
    }
  
  return values;
}



int main()
{
    vector<int> values = {1, 2, 3, 4, 5, 6, 7, 8 ,9 ,10};
    vector<int> Newvalues;

    Newvalues = invert(values);
    for (int j = 0; j < Newvalues.size(); j++)
    {
        cout << Newvalues.at(j) << endl;
    }
    


    return 0;
}