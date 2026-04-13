#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    if (t1 < t2 && t1 < t3)
    {
        cout << 1<< endl;
        if (t2 < t3)
        {
            cout << 2<< endl << 3;
        }
        else
        {
            cout << 3<< endl << 2;
        }
        
    }
    if (t1 > t2 && t2 < t3)
    {
        cout << 2 << endl;
        if (t1 < t3)
        {
            cout << 1 << endl << 3;
        }
        else
        {
            cout << 3 << endl << 1;
        }
    }
    if (t3 < t2 && t1 > t3)
    {
        cout << 3 << endl;
        if (t1 < t2)
        {
            cout << 1 << endl << 2;
        }
        else
        {
            cout << 2 << endl << 1;
        }
    }
}