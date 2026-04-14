# include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    string a, b;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int j, k, aux = 0;
        cin >> a >> b;
        for (j = 0; j < a.size(); j++)
        {
            while(a[j] != b[j]){
                if(a[j] == 'z')
                    a[j] = 'a';
                    else
                        a[j]++;

                aux++;
            }
            
        }
        cout << aux << endl;
    }
   
}