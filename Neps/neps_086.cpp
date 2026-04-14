#include <bits/stdc++.h>
using namespace std;

int main(){

    int a,b;
    cin >> a >> b;

    if( a+b >= 7 ){
        cout << "Aprovado";
    }
    else if(a+b < 7 && a+b > 4){
        cout << "Recuperacao";
    }
    else
        cout << "Reprovado";
}