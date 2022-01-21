#include <bits/stdc++.h>
using namespace std;

int minimumAbsoluteDifference(vector<int> arr) {
    int diff=0, min;
    int n = arr.size();
    vector<int> v1;
    
    sort(arr.begin(),arr.end());
    
    for(int i=0;i<n;i++)
    {   
        diff = abs(arr[i]-arr[i+1]);
        v1.push_back(diff);        
    }
    min = *min_element(v1.begin(), v1.end());
    return min;
}

int main()
{
    int n,x;
    vector<int> arr1;
    cout<<"Enter size of array"<<endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        arr1.push_back(x);
    }
    cout<<"Minimum difference is"<<endl;
    cout<<minimumAbsoluteDifference(arr1)<<endl;
}