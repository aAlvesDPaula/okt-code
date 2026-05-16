#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x0, y0, x1, y1;
    int x2, y2, x3, y3;

    cin >> x0 >> y0 >> x1 >> y1;
    cin >> x2 >> y2 >> x3 >> y3;

    if(x0 <= x3 && x2 <= x1){
        if(y0 <= y3 && y2 <= y1)
            cout << 1;
    }
    else
        cout << 0;
}