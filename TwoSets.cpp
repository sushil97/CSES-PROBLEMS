#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
#define ll long long
/*
NOTE - If there exists such a set then the sum of consecutive numbers should be even. Also the total sum of the seires when divided by two will be equal to the number that should be the sum for each sets.

*/
int main()
{
	SPEED;
	//fileio;
	ll int n;
	std::vector<ll int> v1;
	std::vector<ll int> v2;
	cin >> n;
	ll int x = (n * (n + 1)) / 2;
	if (x % 2)
	{
		cout << "NO";
	}
	else
	{
		x = x / 2;
		ll int sum = 0;
		while (n)
		{
			if ((sum + n) <= x)
			{
				sum += n;
				v1.push_back(n);
			}
			else
			{
				v2.push_back(n);
			}
			n--;
		}
		cout << "YES" << "\n" << v1.size() << "\n";
		for (auto i : v1)
			cout << i << ' ';
		cout << "\n" << v2.size() << "\n";
		for (auto i : v2)
			cout << i << ' ';
	}
	return 0;
}
