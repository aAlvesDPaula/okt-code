#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
        return (fibonacci(n - 1) + fibonacci(n - 2));
}
int fibonacciCalls(int n)
{
    if(n == 1 || n == 0){
        return 2;
    }
    else
        return  fibonacciCalls(n - 1) + fibonacciCalls(n - 2);

}

int main()
{
    int n, i = 0;
    cin >> n;
    while (i < n)
    {
        if(i >= n){
            break;
        }
        int aux;
        cin >> aux;
        int res = fibonacci(aux);
        int calls = fibonacciCalls(aux);
        cout << "fib(" << aux << ") = " << calls-2 << " calls = "  << res << endl;
        i++;
    }
}