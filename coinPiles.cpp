#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
#define ll long long
int main()
{
	SPEED;
	//fileio;
	ll int tcases, a, b;
	cin >> tcases;
	while (tcases--)
	{
		cin >> a >> b;
		if ((a == 0 && b) || (b == 0 && a))
			cout << "NO" << "\n";
		else if (((2 * a - b) >= 0 && (2 * a - b) % 3 == 0) &&  ((2 * b - a) >= 0 && (2 * b - a) % 3 == 0))
			cout << "YES" << "\n";
		else
			cout << "NO" << "\n";
	}
	return 0;
}
