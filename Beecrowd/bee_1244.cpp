#include <bits/stdc++.h>
using namespace std;
bool ord(const string &a, const string &b){
    return a.size() > b.size();
}
int main()
{
    int tam;
    cin >> tam;
    cin.ignore();
    for (int i = 0; i < tam; i++)
    {
        string str;
        vector<string> v;   
        while (cin >> str)
        {
            v.push_back(str);
            if(cin.peek() == '\n'){
                break;
            }
        }
        stable_sort(v.begin(), v.end(), ord);
        int aux = 0;
        while (aux < v.size())
        {
            if(aux != v.size() - 1)
            cout << v[aux] << " ";
            else
                cout << v[aux];
            aux++;
        }
        cout << endl;
        
    }
    return 0;
}
// #include <bits/stdc++.h>
// using namespace std;
// bool ord(const string &a, const string &b)
// {
//     return a.size() > b.size();
// }
// int main()
// {
//     int tam;
//     cin >> tam;
//     for (int i = 0; i < tam; i++)
//     {
//         string str;
//         vector<string> v;
//         while (cin >> str)
//         {
//             v.push_back(str);
//             if (cin.peek() == '\n')
//             {
//                 break;
//             }
//         }
//         stable_sort(v.begin(), v.end(), ord);
//         for (int j = 0; j < v.size(); j++)
//         {
//             if(j == v.size()-1)
//                 cout << v[j];
//                 else
//                     cout << v[j] << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }