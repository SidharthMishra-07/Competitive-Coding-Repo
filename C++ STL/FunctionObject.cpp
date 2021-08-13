#include<iostream>
#include<functional>
#include<algorithm>
using namespace std;

int main()
{
    // Function Objects (Functor) : A function wrapped in a class so that it is available like an object
    int arr[] = {1, 73, 4, 25, 54, 37, 89, 54};
    sort(arr,arr+8, greater<int>());

    for (int i = 0; i < 8; i++)
    {
        cout<<arr[i]<<endl;
    }

 return 0;
}