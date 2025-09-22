#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int max (vector<int> list)
{
    // int max_value = list.at(0);
    // for (int i = 0; i < list.size() ; i++)
    // {
    //     if ( list.at(i) > max_value )
    //     {
    //         max_value = list.at(i);
    //     }
    // }
    // return max_value;

    return *(max_element(list.begin(),list.end()));
}

int min (vector<int> list)
{
    // int min_value = list.at(0);
    // for (int i = 0; i < list.size() ; i++)
    // {
    //     if ( list.at(i) < min_value )
    //     {
    //         min_value = list.at(i);
    //     }
    // }
    // return min_value;

    return *(min_element(list.begin(),list.end()));

}


int main()
{
    int maxvalue = 0;
    int minvalue = 0;
    vector<int> list = {10, 50 ,30 ,90 ,100 ,20};
    maxvalue = max(list);
    minvalue = min(list);
    cout << maxvalue << endl;
    cout << minvalue << endl;
    



    return 0;
}