#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
#define ll long long
int main()
{
	SPEED;
	//fileio;
	ll int tcases;
	cin >> tcases;
	ll int y, x;
	while (tcases--)
	{
		cin >> y >> x;
		if (x > y)
		{
			if (x % 2)
				cout << x*x - y + 1 << "\n";
			else {
				x -= 1;
				cout << (x * x) + y << "\n";
			}
		}
		else {
			if (y % 2) {
				y -= 1;
				cout << y*y + x << "\n";
			}
			else
				cout << y*y - x + 1 << "\n";
		}
	}
	return 0;
}
