#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// The lower_bound() method in C++ is used to return an iterator pointing to the first element in the 
// range [first, last) which has a value not less than val.

int main() {
    int n, x;
    cin>>n;
    
    vector<int> vec1;
    
    for(int i=0;i<n;i++)
    {
        cin>>x;
        vec1.push_back(x);    
    }
    
    int q, val;
    cin>>q;
    
    for(int i=0;i<q;i++)
    {
        cin>>val;
            
        vector<int>:: iterator iter = lower_bound(vec1.begin(),vec1.end(),val);  //returns the first occurence position of val. If val is not present then returns the position of element just greater than val
        
        if(vec1[iter-vec1.begin()]==val)
        {
            cout << "Yes " << ((iter - vec1.begin())+1) << endl;
        }
        else
        {
            cout << "No " << ((iter - vec1.begin())+1) << endl;
        }
       
    }
    
    return 0;
}