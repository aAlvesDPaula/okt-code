#include <bits/stdc++.h>
using namespace std;

bool eh_primo(int x){
    int aux = 1;
	for (int i = 2; i < x; i++)
    {
		if(x==1)
			return true;
        if(x % i == 0){
            aux = 0;
        }
    }
     return aux;
    
}

int main(){
	int x;

	cin>>x;

	if(eh_primo(x)){
		cout << "S" << "\n";
	}else{
		cout << "N" << "\n";
	}
}

