# problem-solving-cpp
some problems and the solve 


#String concatenation in a loop can be a bit slow (especially with large numbers).
#For such cases, you could use string newstr(repeat, str[0]); if str is a single character:

string repeat_str(int repeat, char ch)
{
return string(repeat, ch);
}
