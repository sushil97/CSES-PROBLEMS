#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
#define ll long long
#define mod 1000000007
int main()
{
	SPEED;
	//fileio;
	ll int n;
	cin >> n;
	ll int result = 1;
	for (ll int i = 0; i < n; i++)
	{
		result *= 2;
		if (result > mod)
		{
			result %= mod;
		}
	}
	cout << result;
	return 0;
}
