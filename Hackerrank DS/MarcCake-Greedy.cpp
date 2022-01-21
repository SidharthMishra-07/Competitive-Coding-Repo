#include <bits/stdc++.h>
using namespace std;

long marcsCakewalk(vector<int> calorie) {
    long cal=0;
    long sum=0;
    int n = calorie.size();
    sort(calorie.begin(),calorie.end(),greater<int>());
    
    for(int i=0;i<n;i++)
    {
        sum = cal + (calorie[i]*pow(2,i));
        cal = sum;
    }
    return sum;
}

int main()
{
    int n,x;
    cout<<'Enter the size of arr'<<endl;
    cin>>n;
    vector<int> calorie;

    for(int i=0;i<n;i++)
    {
        cin>>x;
        calorie.push_back(x);
    }
    cout<<"The min distance to walk is"<<endl;
    cout<<marcsCakewalk(calorie)<<endl; 

}