#include <bits/stdc++.h>
using namespace std;
struct  medalhas
{
    int pais;
    int o = 0,p = 0,b = 0;
};
bool Ordena(const medalhas &a, const medalhas &b){
    if(a.o == b.o){
        if(a.p == b.p){
            return a.b > b.b;
        }
        return a.p > b.p;
    }
    return a.o > b.o;
}

int main(){
    int n, m;
    cin >> n >> m;
    vector<medalhas> camp(n);
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            medalhas md;
            int podium;
            cin >> podium;
            if(j == 0){
                camp[podium-1].pais = podium;
                camp[podium-1].o++;
            }
            else if(j == 1){
                camp[podium-1].pais = podium;
                camp[podium-1].p++;
            }
            else if(j == 2){
                camp[podium-1].pais = podium;
                camp[podium-1].b++;
            }
        }
    }
    sort(camp.begin(), camp.end(), Ordena);

    for(auto i: camp){
        cout << i.pais << ' ';
    }
}
