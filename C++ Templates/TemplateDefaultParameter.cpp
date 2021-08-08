#include<iostream>
using namespace std;
template<class T1=int , class T2=float>
class Sid{
    public:
        T1 a;
        T2 b;
        Sid(T1 x, T2 y){
            a = x;
            b = y;
        }
        void display(){
            cout<< "Value of a is : " << a << endl;
            cout<< "Value of b is : " << b << endl;
        }
};

int main()
{
    Sid<> S(6, 6.5);    //This has default parameters
    Sid<float,char> S2(8.89 , 'K');     //Here I have specified float and char
    S.display();
    cout<<endl;
    S2.display();
    cout<<endl;

 return 0;
}