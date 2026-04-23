#include <bits/stdc++.h>
using namespace std;

int main(){

    double x, N[100];
    cin >> x;
    for(int i = 0; i < 100; i++){
        N[i] = x;
        printf("N[%i] = %.4f\n", i,N[i]);
        x = x/2;
    }
}
