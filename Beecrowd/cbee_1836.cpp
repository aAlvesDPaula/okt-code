#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    while (cin >> t)
    {
    
    for (int i = 0; i < 4; i++)
    {
        string nome;
        int nivel;
        int hp, ata, df, sp;
        int bs, iv, ev;
        cin >> nome >> nivel;
        cin >> bs >> iv >> ev;
        hp = (((iv + bs + ((sqrt(ev)/8) + 50)) * nivel)/ 50) + 10;
        cin >> bs >> iv >> ev;
        ata = (((iv + bs + ((int)(sqrt(ev)/8))) * nivel)/ 50) + 5;
        cin >> bs >> iv >> ev;
        df = (((iv + bs + ((int)(sqrt(ev)/8))) * nivel)/ 50) + 5;
        cin >> bs >> iv >> ev;
        sp = (((iv + bs + ((int)(sqrt(ev)/8))) * nivel)/ 50) + 5;
        cout<< "Caso #" << i+1<< ": " << nome << " nivel " << nivel << endl;
        cout << "HP: " << hp << endl;
        cout << "AT: " << ata << endl;
        cout << "DF: " << df << endl;
        cout << "SP: " << sp << endl;
    }
}
}