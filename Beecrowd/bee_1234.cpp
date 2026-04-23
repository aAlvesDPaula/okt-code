#include <bits/stdc++.h>
using namespace std;

int main(){
    string x;
    while(getline(cin, x)){
        int aux = 0;
        for (int i = 0; i < x.size(); i++)
        {
            if(x[i] == ' '){}
            else if(aux == 0){
                x[i] = toupper(x[i]);
                aux = 1;
            }
            else if(aux == 1){
                x[i] = tolower(x[i]);
                aux = 0;
            }
        }
        
        cout << x << endl;
    }
    

}
