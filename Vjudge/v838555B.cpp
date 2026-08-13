#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        set<string> c1, c2, c3;
        int t;cin >> t;
        string p;
        
            for (size_t a = 0; a < t; a++)
            {
                cin >> p;
                c1.insert(p);
            }
            for (size_t a = 0; a < t; a++)
            {
                cin >> p;
                c2.insert(p);
            }
            for (size_t a = 0; a < t; a++)
            {
                cin >> p;
                c3.insert(p);
            }
        int a=0,b=0,c=0;
        for(auto it: c1){
            if(!c2.count(it) && !c3.count(it))
                a+=3;
            else if(!c2.count(it) || !c3.count(it))
                a+=1;
        }
        cout << a << ' ';
        for(auto it: c2){
            if(!c1.count(it) && !c3.count(it))
                b+=3;
            else if(!c1.count(it) || !c3.count(it))
                b+=1;
        }
        cout << b << ' ';
        for(auto it: c3){
            if(!c1.count(it) && !c2.count(it))
                c+=3;
            else if(!c2.count(it) || !c1.count(it))
                c+=1;
        }
        cout << c << endl;
    }
}