#include<iostream>
using namespace std;

// defining Infinity = 999999
#define INF 999999

// Flyod Warshall function to find all pair shortest path for 4x4 matrix

void FlyodWarshall(int Graph[4][4],int n)
{
    int Distance[n][n];  // Declaring Distance matrix
    int i,j,k;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            Distance[i][j] = Graph[i][j]; // equating Distange to Graph distance
        }
    }
    for(k=0;k<n;k++)
    {
        for(i=0;i<n;i++)
        {
            for(j=0;j<n;j++)
            {
                // if city K is shortest path from i to j
                // update Distance Matrix
                if(Distance[i][j] > (Distance[i][k] + Distance[k][j])
                && (Distance[k][j] != INF && Distance[i][k] != INF))
                    {
                        Distance[i][j] = Distance[i][k] + Distance[k][j];
                    }
            }
        }
    }
    // printing the shortest distance matrix
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(Distance[i][j] == INF)
            {
               cout << "INF"
                     << "     ";
            }
            else
            {
                cout << Distance[i][j] << "     ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n =4;
    int Graph[4][4] = { { 0, 5, INF, 10 },
                        { INF, 0, 3, INF },
                        { INF, INF, 0, 1 },
                        { INF, INF, INF, 0 } };
 
    // Print the solution
    FlyodWarshall(Graph,n);
    return 0;
}