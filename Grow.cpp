#include<iostream>
#include<vector>
#include<numeric>
using namespace std;


int grow (vector<int> nums)
{
    //int result = 1;
    // for (int i = 0; i < nums.size(); i++)
    // {
    //     result *= nums.at(i);
    // }
    // return result;


    // Ranged Loop
    // int result = 1;
    // for(int i : nums )
    // {
    //     result *= i;
    // }
    // return result;

    //int result = 1;
    // int i = 0;
    // while (i < nums.size())
    // {
    //     result *= nums.at(i);
    //     i++;
    // }
    // return result;

    return accumulate(nums.begin(), nums.end(),1,multiplies());
    
}



int main()
{
    vector<int> nums = { 2, 5, 6, 9, 10};
    int Result = grow(nums);
    cout << Result << endl;



    return 0;
}