#include <bits/stdc++.h>
using namespace std;
int main()
{
    queue<char> times;
    for (int i = 0; i < 16; i++)
    {
        times.push('A' + i);
    }
    for(int i = 0; i < 15; i++)
    {
        int t1, t2;
        cin >> t1 >> t2;
        if(t1 > t2){
            char add = times.front();
            times.pop();
            times.pop();
            times.push(add);
        }
        else{
            times.pop();
            char add = times.front();
            times.push(add);
            times.pop();
            
        }
    }
    cout << times.front() << '\n';
}