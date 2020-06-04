#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
#define ll long long
int main()
{
	SPEED;
	//fileio;
	ll int n;
	ll int result = 0;
	cin >> n;
	while (n >= 5)
	{
		result = result + (n / 5);
		n /= 5;
	}
	cout << result;
	return 0;
}
