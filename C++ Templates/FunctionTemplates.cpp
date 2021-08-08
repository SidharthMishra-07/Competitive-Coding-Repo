#include<iostream>
#include<iomanip>
using namespace std;

// float funcAverage(int a , int b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }
// float funcAverage2(float a , float b)
// {
//     float avg = (a+b)/2.0;
//     return avg;
// }

template <class T1, class T2> 
float funcAverage(T1 a , T2 b)
{
    float avg = (a+b)/2.0;
    return avg;
}

template <class T>
void swapping(T &a , T &b)
{
    T temp =a;
    a = b;
    b = temp;
}

int main()
{
    float a = funcAverage(5,4);
    cout<< "Value of average is : "<< fixed << setprecision(2) << a <<endl;

    int x=34 , y=64;
    swapping(x ,y);
    cout<<"Value of x after swap is : "<< x <<endl;
    cout<<"Value of x after swap is : "<< y <<endl;
    

    return 0;
}
//Note: The best use of using function template is while using swap function....U can swap any dataypes by using function templates

