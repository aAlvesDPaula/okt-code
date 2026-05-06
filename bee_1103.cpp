#include <bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    while (cin >> h1 && cin >>  m1 && cin >> h2 && cin >> m2)
    {
        if(h1 == 0 && m1 ==0 && h2 == 0 && m2 ==0){
            break;
        }
        else{
            if(h1 == h2){
                if(m1 > m2){
                    cout << (60*24) - (m1 - m2) << endl; 
                }
                else
                cout << m2 - m1 << endl;
            }
            else if(h2 > h1){
                int aux = ((h2-h1)*60) + (m2 - m1);
                cout << aux << endl;
            }
            else{
                int auxh = ((24 - h1)*60) - m1;
                cout << (auxh + m2) << endl;
            }
        }
    }
    
}