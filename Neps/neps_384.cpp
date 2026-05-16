#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, s;
    queue<int> fila;
    queue<int> filaF;
    for (int i = 0; i < n; i++)
    {
        int m;
        fila.push(m);
    }
    cin >> s;
    while (int i = 0 < s && !fila.empty())
    {
        int ex;
        cin >> ex;
        if (fila.front() == ex)
        {

            fila.pop();
            i++;
        }
        else
        {
            filaF.push(fila.front());
        }
    }
    while (!filaF.empty())
    {
        cout << fila.front();
        filaF.pop();
    }
}