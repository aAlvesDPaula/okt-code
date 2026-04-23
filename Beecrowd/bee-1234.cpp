#include <bits/stdc++.h>
using namespace std;

int main()
{
    string x;
    
    
    while(1)
    {   
        
        getline()
        if(x.size() != 0){
            int i = 0;
            while (i <= x.size())
            {
                if(i == 0 && x[i] != '\0'){
                    x[i] = toupper(x[i]);
                }
                else if(i > 0 && isupper(x[i-1])){
                    x[i] = tolower(x[i]);
                }
                else{
                    x[i] = toupper(x[i]);
                }
            }
            cout << x;
            
        }
        break;
    }

    
}

// while(1){ if(scanf("%c", x) == '/0') break;}