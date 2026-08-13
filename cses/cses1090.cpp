// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     ios:: sync_with_stdio(0);
//     cin.tie(0);
//     int n, x, aux;
//     cin >> n >> x;
//     vector<int> g;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> aux;
//         g.push_back(aux);
//     }

//     sort(g.begin(), g.end());
//     int i = 0;
//     int j = n - 1;

//         aux = 0;
//     while (i <= j)
//     {
//         if ((g[i] + g[j]) <= x)
//         {
//             i++;
//             j--;
//             aux++;
//         }
//         else
//         {
//             aux++;
//             j--;
//         }
        
//     }
//     cout << aux << endl;
// }






#include <bits/stdc++.h>
using namespace std;

int main(){
    int n ,x, aux;
    cin >> n >> x;
    vector<int> p;

    for (int i = 0; i < n; i++)
    {
        cin >> aux;
        p.push_back(aux);
    }
    
    sort(p.begin() , p.end());
    int i = 0, j = n -1;aux = 0;

    while (i <= j)
    {
        if(p[i] + p[j] <= x){
            aux++;
            i++;
            j--;
        }
        else{
            j--;
            aux++;
        }
    }
    cout << aux << endl;
    
}