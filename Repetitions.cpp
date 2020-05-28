#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
#define ll long long
int main()
{
	SPEED;
	//fileio;
	string s;
	char x;
	ll int n, c, c_max;
	cin >> s;
	n = s.length();
	x = s[0];
	c = 1;
	c_max = 1;
	for (ll int i = 1 ; i < n; i++)
	{
		if (s[i] == x) {
			c++;
		}
		else {
			x = s[i];
			if (c_max < c)
				c_max = c;
			c = 1;
		}
	}
	if (c_max < c)
		c_max = c;
	cout << c_max;
}
