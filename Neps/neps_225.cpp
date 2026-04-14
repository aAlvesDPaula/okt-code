#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, q, p;
    char c;

    cin >> n >> p >> c >> q;

    if(c == '*')

        if( n < p * q)
            cout << "OVERFLOW";

        else 
            cout << "OK";

    else {
        if( n < p + q)
            cout << "OVERFLOW";

        else 
            cout << "OK";
    }
} 