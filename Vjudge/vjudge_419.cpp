#include <bits/stdc++.h>
using namespace std;

int sequencia(int n, int f)
{
    if (n == 1)
    {
        return (f);
    }

    else if (n % 2 != 0)
    {
        return sequencia((3 * n) + 1, f + 1);
    }

    else
    {
        return sequencia(n / 2, f + 1);
    }
}
int main()
{
    int i, j;
    while (cin >> i >> j)
    {
        int aux = 0;
        if (i > j)
        {
            for (int a = j; a <= i; a++)
            {

                int auxr = sequencia(a, 1);
                if (aux < auxr)
                {
                    aux = auxr;
                }
            }
            cout << i << " " << j << " " << aux << endl;
        }
        else if (j > i)
        {
            for (int a = i; a <= j; a++)
            {
                int auxr = sequencia(a, 1);
                if (aux < auxr)
                {
                    aux = auxr;
                }
            }
            cout << i << " " << j << " " << aux << endl;
        }
        else if(j == i){
            int aux = sequencia(j , 1);
            cout << i << " " << j << " " << aux << endl;
        }
    }

    return 0;
}