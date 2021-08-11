#include<iostream>
#include<map>
#include<bits/stdc++.h>
using namespace std;


int main()
{
    map<string,int> marksMap;
    marksMap["Boy1"]=100;
    marksMap["Boy2"]=60;
    marksMap["Boy3"]=70;
    marksMap["Boy4"]=90;

    map<string,int> :: iterator iter;

    for(iter=marksMap.begin(); iter!= marksMap.end(); iter++)
    {
        cout<<(*iter).first<<" : "<<(*iter).second<<endl;
    }


 return 0;
}