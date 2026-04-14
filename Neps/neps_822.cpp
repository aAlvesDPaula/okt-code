#include <bits/stdc++.h>
using namespace std;

int main(){

    int d;
    cin >> d;

    if((d-3)%8 == 3 ){
        cout << 1;
    }
    else if(((d-3)% 8) == 4){
        cout << 2;
    }
    else 
        cout << 3;
}