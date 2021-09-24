#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

void knapsack(float w[],float p[],int c, int n)
{
    float P=0.00,u[20];
    int i,k;
    k = c;
    for(i=0;i<n;i++)
    {
        u[i] = 0.00;
    }
    for(i=0;i<n;i++)
    {
        if(w[i]>k)
        {
            break;
        }
        else
        {
            u[i]=1;
            P = P + p[i];
            k = k - w[i];
        }
    }
    if(i<n)
    {
        u[i] = k/w[i];
    }
    P = P + (u[i]*p[i]);
    
    cout<<fixed<<setprecision(2)<<P<<" ";
 
}

int main()
{
    int n;
    cin>>n;
    float w[n],p[n],pw[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>w[i];  //weight
    }
    for(int i=0;i<n;i++)
    {
        cin>>p[i];  //profit
    }
    int cap;
    cin>>cap;   //capacity
    
    
    for(int i=0;i<n;i++)
    {
        pw[i]=p[i]/w[i];    //Profit by weight
    }

    int t;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1 ; j<n ; j++)
        {
            if(pw[i]<pw[j])
            {
                t = pw[j];
                pw[j] = pw[i];
                pw[i] = t;
                
                t = w[j];
                w[j] = w[i];
                w[i] = t;
                
                t = p[j];
                p[j] = p[i];
                p[i] = t;
            }
        }
    }

    knapsack(w,p,cap,n);    //Calling Function
    
    return 0;
}