#include <bits/stdc++.h>
using namespace std;

vector<int> breakingRecords(vector<int> scores) {
    vector<int> vec1;
    int countmax=0, countmin=0;
    int min=scores[0];
    int max=scores[0];
    for(int i=0;i<scores.size();i++)
    {
        if(scores[i]>max){
            countmax++;
            max=scores[i];
        }
        if(scores[i]<min)
        {
            countmin++;
            min=scores[i];
        }
    }
    vec1.push_back(countmax);
    vec1.push_back(countmin);
    
    return vec1;
}

int main()
{
    int n;
    cin>>n;
    int a[n];
    vector<int> arr;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        arr.push_back(a[i]);
    }

    vector<int> result = breakingRecords(arr);  //storing vec1 in result vector
    
    //displaing the resulting array
    for(int i=0;i<result.size();i++)
    {
        cout<<result[i]<<" ";
    }
}