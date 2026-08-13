#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cin >> a;
    char p;
    for (size_t i = 0; i < a; i++)
    {
        cin >> b;
        string l1, l2;
        cin >> l1 >> l2;
        sort(l1.begin(), l1.end());
        sort(l2.begin(), l2.end());
        
        if(l1 == l2){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}