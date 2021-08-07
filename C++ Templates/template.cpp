#include<iostream>
using namespace std;

template <class T>
class vectorTemp{
    public:
        T *arr;       //data members
        int size;
    public:
        vectorTemp(int m);   //Constructor
        T dotProduct();   //Member function
};

template <class T>
vectorTemp<T>::vectorTemp(int m)
{
    size = m;
    arr = new T[size];
}

template <class T>
T vectorTemp<T>::dotProduct()
{
    T d=0;
    for (int i = 0; i < size; i++)
    {
        d+= this->arr[i] * arr[i];
    }
    return d;
    
}

int main()
{
    vectorTemp<int> v1(3);
    v1.arr[0]= 4;
    v1.arr[1]= 3;
    v1.arr[2]= 1;

    vectorTemp<float> v2(3);
    v2.arr[0]= 4.1;
    v2.arr[1]= 0.3;
    v2.arr[2]= 1.5;

    //Due to Template, we can use the the same "dotProduct function" for both 'int' and 'float' DataTypes...
    int a = v1.dotProduct();
    float b = v2.dotProduct();
    
    cout<<a<<endl;
    cout<<b<<endl;

 return 0;
}