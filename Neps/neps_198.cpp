#include <bits/stdc++.h>
using namespace std;

int main()
{
    int l1 = 0, l2 = 0, l3 = 0;
    int c1 = 0, c2 = 0, c3 = 0;
    int dp = 0, ds = 0;
    int mat[3][3];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cin >> mat[i][j];
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (i == 0)
            {
                l1 += mat[i][j];
            }
            if (i == j)
            {
                // diagonal primaria
                dp += mat[i][j];
            }
            if(j + i == 2){
                // diagonal secundaria
                ds += mat[i][j];            
            }
            if (i == 1)
            {
                l2 += mat[i][j];
            }
            if (i == 2)
            {
                l3 += mat[i][j];
            }
        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (j == 0)
            {
                c1 += mat[i][j];
            }
            else if (j == 1)
            {
                c2 += mat[i][j];
            }
            else if (j == 2)
            {
                c3 += mat[i][j];
            }
        }
    }
    if(c1 == c2 && c1 == c3 && c3 == l1 && l1 == l2 && l2 == l3 && l3 == ds && ds == dp){
        cout << "SIM";
    }
    else
        cout << "NAO";
}
