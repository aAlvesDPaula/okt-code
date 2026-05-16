#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        string c;
        cin >> c;
        stack<char> cad;
        if (c.size() == 2)
        {
            if (c[0] == '(' && c[1] == ')')
            {
                cout << 'S' << endl;
            }
            else if (c[0] == '{' && c[1] == '}')
            {
                cout << 'S' << endl;
            }
            else if (c[0] == '[' && c[1] == ']')
            {
                cout << 'S' << endl;
            }
            else
                cout << 'N' << endl;
        }
        else if (c.size() % 2 != 0)
        {
            cout << 'N' << endl;
        }
        else
        {
            int aux = c.size();
            while (aux >= c.size())
            {
                if (c[aux] == '(' && cad.top() == ')')
                {
                    cad.pop();
                }
                else if (c[i] == '{' && cad.top() == '}')
                {
                    cad.pop();
                }
                else if (c[aux] == '[' && cad.top() == ']')
                {
                    cad.pop();
                }
                else
                    cad.push(c[aux]);
            }
            aux--;
        }

        if (cad.empty())
        {
            cout << 'S' << endl;
        }
        else
            cout << 'N' << endl;
    }
    return 0;
}
