#include<iostream>
#include<string>
#include<algorithm>

using namespace std;


string slicestring (string str)
{
    // string result;
    // for (int i = 1; i < str.length() - 1; i++)
    // {
    //     result += str.at(i);
    // }
    // return result;

    // return str.substr(1, str.size() - 2);

    return string(str.begin()+1,str.end()-1);

    // str.erase(str.begin());
    // str.erase(str.end() - 1);
    // return str;
   
}



int main()
{
    string str ="MMohamedd";
    string newstr;
    newstr = slicestring(str);
    cout << newstr << endl;



    return 0;
}