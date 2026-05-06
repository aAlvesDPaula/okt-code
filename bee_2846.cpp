#include <bits/stdc++.h>
using namespace std;

 int fib(int n)
   {
    if(n == 0 || n ==1)
    return 1;
    else if ((n >= 2))    
    return n - 1;     
    else     
    return fib(n-1) + fib(n-2);
   }

   int fibonot(int n){
    return !(fib(n));
   }
   int main(){
    int t, res;
    cin >> t;
    res = fib(t);
    cout << res;
   }