#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

template<class T>
void display(vector<T> &v)    //This will take a vector input
{
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<< " ";
    }
    cout<<endl;
}

int main()
{
    vector<int> vec1;
    vector<int> :: iterator iter;
    int n;
    cin>>n;
    int x;
    for (int i = 0; i < n; i++)
    {
        cout<< "Enter number to add to this vector "<<endl;
        cin>>x;
        vec1.push_back(x);
    }
    // sort(vec1.begin(),vec1.end(),greater<int>());
    // vec1.pop_back();    //would pop the least element

    display(vec1);
    iter=vec1.begin();
    vec1.insert(iter+1,10,150);    //Inserts at where the iterator points, 10 times , the value entered(here:- 150) 
    display(vec1);
    
 return 0;
}