#include<iostream>
using namespace std;

template <class T1, class T2>
class myClass{
    public:
        T1 data1;
        T2 data2;
        void display()
        {
            cout<< data1 << endl << data2 <<endl;
        }
};

int main()
{
    myClass<int , float> obj;
    obj.data1 = 4;
    obj.data2 = 99.99;
    obj.display();

 return 0;
}