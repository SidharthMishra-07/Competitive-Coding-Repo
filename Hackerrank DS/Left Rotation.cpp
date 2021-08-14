#include <bits/stdc++.h>
using namespace std;

void rotateLeft(int d, vector<int> &arr) {

    for(int i=0;i<d;i++)
    {
        arr.push_back(arr[0]);      //pushes the first element to the back of the array
        arr.erase(arr.begin());     //delete the first element..
    }
    for(int i=0;i<arr.size();i++)
    {
        cout<<arr[i]<<endl;
    }
}

int main()
{
    vector<int> vec = { 1, 2, 3, 4, 5, 6 };
    int n = vec.size();
    int d = 4;
 
    // Function call
    rotateLeft(d % n , vec);
 
    return 0;
}