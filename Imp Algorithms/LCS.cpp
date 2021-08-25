#include <iostream>
#include <string.h>
using namespace std;

int max(int x, int y)
{
    if (x > y)
        return x;
    else
        return y;
}
int LCS(char *a, char *b, int x, int y)
{
    int L[x + 1][y + 1];
    int i, j;
    for (i = 0; i <= x; i++)
    {
        for (j = 0; j <= y; j++)
        {
            if (i == 0 || j == 0)
            {
                L[i][j] = 0;
            }
            else if (a[i - 1] == b[j - 1])
            {
                L[i][j] = L[i - 1][j - 1] + 1;
            }
            else
            {
                L[i][j] = max(L[i - 1][j], L[i][j - 1]);
            }
        }
    }
    return L[x][y];
}

int main()
{
    char A[30], B[30];
    int x, y;
    cin >> A >> B;

    x = strlen(A);
    y = strlen(B);

    int z = LCS(A, B, x, y);
    if (z == x)
    {
        cout << "YES";
    }
    else
        cout << "NO";

    return 0;
}