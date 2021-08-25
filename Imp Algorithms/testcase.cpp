#include<iostream>
using namespace std;

void Fractional_Knapsack(float w[],float p[],int c,int n)
{
    float P=0.00,u[20];
    int i,j,k;
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
    
    printf("%.2f",P);
    
}
int main()
{
    int n;// no of vegetables
    cin>>n;
    float w[n], p[n], R[n];// weight and profit and ratio
    int i,j,t;
    for(i=0;i<n;i++)
    {
        cin>>w[i];//enter weight of n vegetables
    }
    for(i=0;i<n;i++)
    {
        cin>>p[i];//enter profit of n vegetables
    }
    
    int c;// capacity of container 
    cin>>c;
    
    for(i=0;i<n;i++)
    {
        R[i] = p[i] / w[i];
    }
    
    for(i=0;i<n;i++)// sorting on basis of profit by weight
    {
        for(j=i+1;j<n;j++)
        {
            if(R[i]<R[j])
            {
                t = R[j];
                R[j] = R[i];
                R[i] = t;
                
                t = w[j];
                w[j] = w[i];
                w[i] = t;
                
                t = p[j];
                p[j] = p[i];
                p[i] = t;
            }
        }
    }
    Fractional_Knapsack(w,p,c,n);// greedy method
    return 0;
    
}