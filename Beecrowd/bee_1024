#include <bits/stdc++.h>
using namespace std;
void inverter(string &str)
{
    reverse(str.begin(), str.end());
}
int main()
{
    int t;
    string m;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++)
    {
        int meio;
        getline(cin, m);
        for (int j = 0; j < m.size(); j++)
        {
            if ((m[j] >= 'a' && m[j] <= 'z') || (m[j] <= 'Z' && m[j] >= 'A'))
            {
                m[j] = m[j] + 3;
            }
        }
        inverter(m);
        meio = m.size() /2;
        for(int j = meio; j < m.size(); j++){
            m[j] = m[j] - 1;
        }
        cout << m << endl;
    }

}
