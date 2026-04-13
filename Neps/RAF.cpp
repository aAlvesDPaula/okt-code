#include <bits/stdc++.h>
using namespace std;

int main(){

    int a, b, media;
    cin >> a >> b;
    media = ((a*2)+(b*3))/5;

    if(media >= 7){
        cout << "Aprovado";
    }
    else if(media < 3){
        cout << "Reprovado";
    }
    else
        cout << "Final";
}