#include <bits/stdc++.h>

using namespace std;

string timeConversion(string s) {
    string AMPM,result,first,second;
    string num1 = "12";
    AMPM = s.substr(8,10);
    first = s.substr(0,2);
    second = s.substr(2,6);
    if(AMPM == "PM"){
        if(first == "12"){
            result = "12" + second;
        }
        else{
            result = to_string(stoi(first)+stoi(num1)) + second;        
        }
    }
    else if(AMPM == "AM"){
        if(first == "12"){
            result = "00" + second;
        }
        else{
            result = first + second;
        }
    }
    return result; 
}
int main()
{
    string s;
    cin>>s;
    string result = timeConversion(s);

    cout<<result;
}