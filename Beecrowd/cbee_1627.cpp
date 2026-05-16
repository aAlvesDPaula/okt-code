#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    while (cin >> t)
    {
        int at,ad,bt,bd;
        while (cin >> at && cin >> ad && cin >> bt && cin >> bd)
        {
            while (t > 0)
            {
                if(t - at == 0)
                    cout << "Andre";
                if(t - bt == 0)
                    cout << "Beto";
            }
        }
        
    }
    
}