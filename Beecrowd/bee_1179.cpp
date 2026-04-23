#include <bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    vector<int> vetp;
    vector<int> veti;
    

    for (int i = 0; i < 15; i++)
    {
        cin >> x;
        if (x % 2 == 0)
        {
            if (vetp.size() < 5)
            {
                vetp.push_back(x);
            }
            else if (vetp.size() >= 5)
            {
                for (int k = 0; k < 5; k++)
                {
                    cout << "par[" << k << "] = " <<vetp[k] << endl;
                }
                 vetp.clear();
                vetp.push_back(x);
            }
        }
        else
        {
            if (veti.size() < 5)
            {
                veti.push_back(x);
            }
            else if (veti.size() >= 5)
            {
                for (int j = 0; j < 5; j++)
                {
                    cout << "impar["<< j <<"] = "<< veti[j] << endl;
                }
                veti.clear();
                veti.push_back(x);
            }
        }
    }
        while (veti.size() != 0){
            printf("impar[%d] = %d\n", 0, veti[0]);
        }
        
        for (int j = 0; j < vetp.size(); j++)
                {
                    cout << "par[" << j << "] = "<< vetp[j] << endl;
                }
                
    
}
