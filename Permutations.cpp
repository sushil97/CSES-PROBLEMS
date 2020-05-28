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
	cin >> n;
	if (n == 1)
	{
		cout << "1";
	}
	else if (n <= 3)
	{
		cout << "NO SOLUTION";
	}
	else if (n == 4)
	{
		cout << "2 4 1 3";
	}
	else
	{
		ll int num = (n % 2) ? n - 1 : n;
		std::vector<ll int> v;
		while (num >= 2)
		{
			v.push_back(num);
			num -= 2;
		}
		num = (n % 2) ? n : n - 1;
		while (num >= 1)
		{
			v.push_back(num);
			num -= 2;
		}
		for (ll int i = 0; i < n; i++)
			cout << v[i] << ' ';
	}
	return 0;
}
