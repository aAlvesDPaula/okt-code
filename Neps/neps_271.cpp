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
        for (int j = 0; j < c.size(); j++)
        {
            if (c[j] == '{' || c[j] == '(' || c[j] == '[')
            {
                cad.push(c[j]);
            }
            else if (!cad.empty())
            {
                if (c[j] == '}' && cad.top() == '{')
                    cad.pop();
                else if (c[j] == ')' && cad.top() == '(')
                    cad.pop();
                else if (c[j] == ']' && cad.top() == '[')
                    cad.pop();
                else{
                    cad.push(c[j]);
                    break;
                }
            }
            else if (cad.empty())
            {
                if (c[j] == '}' || c[j] == ')' || c[j] == ']')
                {
                    cad.push(c[j]);
                    break;
                }
            }
        }
        if (cad.empty())
        {
            cout << 'S' << endl;
        }
        else
            cout << 'N' << endl;
    }
}
