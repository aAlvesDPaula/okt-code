#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, s = 0, d = 0;
    cin >> t;
    
    vector<int> m(t);
    for (int i = 0; i < t; i++) {
        cin >> m[i];
    }

    for (int i = 0; i < t; i++) {
        int maior_carta;
        
        if (m.front() > m.back()) {
            maior_carta = m.front();
            m.erase(m.begin());
        } else {
            maior_carta = m.back();
            m.pop_back();
        }

        if (i % 2 == 0) s += maior_carta;
        else d += maior_carta;
    }

    cout << s << " " << d << "\n";
    return 0;
}