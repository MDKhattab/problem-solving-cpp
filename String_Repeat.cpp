#include<iostream>
using namespace std;



string repeat_str (int repeat , const string str)
{
    string newstr = " ";
    for (int i = 0; i < repeat; i++)
    {
        newstr += str;
    }
    return newstr;
}


int main()
{
    string str = "*";
    string result;
    result = repeat_str (10 , str);
    cout << result << endl;
    result = repeat_str (9 , str);
    cout << result << endl;
    result = repeat_str (8 , str);
    cout << result << endl;
    result = repeat_str (7 , str);
    cout << result << endl;
    result = repeat_str (6 , str);
    cout << result << endl;
    result = repeat_str (5 , str);
    cout << result << endl;
    result = repeat_str (4 , str);
    cout << result << endl;
    result = repeat_str (3 , str);
    cout << result << endl;
    result = repeat_str (2 , str);
    cout << result << endl;
    result = repeat_str (1 , str);
    cout << result << endl;



    return 0;
}