#include <bits/stdc++.h>
using namespace std;
int f91(int N)
{int res = 0;

    if(N == 0){}
    else if(N>= 101){
        return(N-10);
    }
    else if(N<= 100){
        res = f91(N+11);
        return f91(res);
    }
    return 0;
}
int main()
{
    int n;
    while (cin >> n && n != 0)
    {
        int res = f91(n);
        cout << "f91(" << n << ") = " << res << endl;
    }
}