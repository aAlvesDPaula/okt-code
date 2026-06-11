#include <bits/stdc++.h>
using namespace std;

int main(){
    map<char, char> d;
    for (char i = 'a'; i <= 'z'; i++)
    {
        char c;
        cin >> c;
        d.insert({i , c});
    }
    string pl;
    cin >> pl;
    for (int i = 0; i < pl.size(); i++)
    {
        cout << d[pl[i]];
    }
    return 0;
}