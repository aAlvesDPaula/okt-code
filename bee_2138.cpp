#include <bits/stdc++.h>
using namespace std;
int main()
{
    string cod;
    while (cin >> cod)
    {
        vector<int> vet;
        for (int i = 0; i < cod.size(); i++)
        {
            if (cod[i] - '0' == 0)
                vet[0]++;
            else if (cod[i] - '0' == 1)
                vet[1]++;
            else if (cod[i] - '0' == 2)
                vet[2]++;
            else if (cod[i] - '0' == 3)
                vet[3]++;
            else if (cod[i] - '0' == 4)
                vet[4]++;
            else if (cod[i] - '0' == 5)
                vet[5]++;
            else if (cod[i] - '0' == 6)
                vet[6]++;
            else if (cod[i] - '0' == 7)
                vet[7]++;
            else if (cod[i] - '0' == 8)
                vet[8]++;
            else if(cod[i] - '0' == 9)
                vet[9]++;
        }
        int aux = 0;
        int p = 0;
        for (int j = 0; j < 10; j++)
        {
            if(vet[j] > aux){
                aux = vet[j];
                p = j;
            }
        }
        cout << p;
        
    }
}