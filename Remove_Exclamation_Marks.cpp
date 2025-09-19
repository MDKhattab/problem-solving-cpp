#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
#include<regex>
using namespace std;


string removeExclamationMarks (string str)
{
    // string newstr;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str.at(i) == '!')
    //     {
    //         continue;
    //     }
    //     newstr += str.at(i);
    // }
    // return newstr;
    
    // string newstr;
    // for (int i = 0; i < str.size(); i++)
    // {
    //     if (str.at(i) != '!')
    //     {
    //         newstr += str.at(i);
    //     }
    // }
    // return newstr;

    // string newstr;
    // int i = 0;
    // while (i < str.length())
    // {
    //     if (str.at(i) != '!')
    //     {
    //       newstr += str.at(i);
    //     }
    //     i++;
    // }
    // return newstr;

    
     return regex_replace(str, regex ("!") , "");
    


}


int main()
{
    string newstr;
    newstr = removeExclamationMarks("Hi!! Mo!h!am!!ed");
    for (int j = 0; j < newstr.size(); j++)
    {
        cout << newstr.at(j) ;
    }
    


    return 0;
}