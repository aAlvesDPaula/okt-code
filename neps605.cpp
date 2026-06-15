#include <bits/stdc++.h>

using namespace std;

const int maxn = 1e5+10;

int N, M;
int m[maxn];
bool ok(int x)
{
	int soma = 0;

	for (int i = 1; i <= M; i++)
		soma += (m[i]/x);
	return (soma >= N);
}

int busca(void)
{
	int ini = 1, fim = 10000;
	int ans;

	while (ini <= fim)
	{
		int mid = (ini+fim)/2;

		if (ok(mid))
		{
			ans = mid;
			ini = mid+1;
		}
		else fim = mid-1;
	}

	return ans;
}

int main(void)
{
	cin >> N >> M;

	for (int i = 1; i <= M; i++)
		cin >> m[i];

	cout << busca();
}
