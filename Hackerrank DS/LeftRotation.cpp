#include <bits/stdc++.h>
using namespace std;

void rotateLeft(int d, vector<int> &arr) {

    for(int i=0;i<d;i++)
    {
        arr.push_back(arr[0]);      //pushes the first element to the back of the array
        arr.erase(arr.begin());     //delete the first element..
    }
    //Printing the Left Rotated array
    
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<" ";
    }
}

int main()
{
    vector<int> vec = { 1, 2, 3, 4, 5 };
    int d = 4;
 
    rotateLeft(d , vec);
 
    return 0;
}