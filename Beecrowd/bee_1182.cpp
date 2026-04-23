#include <bits/stdc++.h>
using namespace std;

int main(){

    double m[12][12], aux = 0;
    int c;
    char t;
    cin >> c >> t;
    for (int i = 0; i < 12; i++)
    {
        for (int j = 0; j < 12; j++)
        {
            cin >> m[i][j];
        }
    }
        for (int  i = 0; i < 12; i++)
        {
            aux += m[i][c];
        }
        if(t == 'S')
            printf("%.1lf\n", aux);
            else
                printf("%.1lf\n", aux/12);

}
