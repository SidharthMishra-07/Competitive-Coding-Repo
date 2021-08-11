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
    list1.push_back(9);
    list1.push_back(12);

    //Removing elements from the list
    // list1.pop_front();
    // list1.remove(9);

    //Sorting the list
    // list1.sort();
    
    list<int> :: iterator it2;
    for(it2=list2.begin(); it2!=list2.end(); it2++)
    {
        cout<<"Enter element to list2"<<endl;
        cin>>*it2;
    }
    cout<<endl;

    display(list1);
    display(list2);
    
    //Merging two lists
    list1.merge(list2);
    cout<<"List 1 after merging is : ";
    display(list1);

    //Reversing a list
    list1.reverse();
    cout<<"List 1 after reversing is : ";
    display(list1);

    //Swapping the list
    list<int> list3(3,300);     //made a new list3 beacuse after merging list2 is empty!
    cout<<"List 3 : "; 
    display(list3);

    list3.swap(list1);
    
    cout<<"List 3 after swapping is : ";
    display(list3);

 return 0;
}