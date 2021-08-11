#include<iostream>
#include<list>
using namespace std;

void display(list<int> &li)
{
    list<int> :: iterator it;
    for (it = li.begin(); it!= li.end(); it++)
    {
        cout<<*it<< " ";
    }
    cout<<endl;
}

int main()
{
    list<int> list1;    //list of length 0;
    list<int> list2(4);    //list of length 7;

    list1.push_back(5);
    list1.push_back(7);
    list1.push_back(1);
    list1.push_back(9);
    list1.push_back(12);
    
    list<int> :: iterator it2;
    for(it2=list2.begin(); it2!=list2.end(); it2++)
    {
        cout<<"Enter element to list2"<<endl;
        cin>>*it2;
    }

    display(list1);
    display(list2);
    
 return 0;
}