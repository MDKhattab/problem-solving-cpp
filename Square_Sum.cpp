#include<iostream>
#include<vector>
#include<cmath>
using namespace std;


int square_sum(const vector<int>& numbers)
{
    // int result = 0;
    // for(int i=0; i < numbers.size();i++)
    // {
    //     result += pow(numbers.at(i),2);
    // }
    // return result;


    int result = 0;
    for(int val : numbers)
    {
        result += pow(val,2);
    }
    return result;
}



int main()
{
    int result;
    vector<int> nums = {1,2,2};
    result = square_sum(nums);
    cout << result;


    return 0;
}