#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
#define ll long long
std::vector<string> v;
bool checkString(string a, int l, int r)
{
	for (int i = l + 1; i <= r; i++)
	{
		if (a[l] == a[i])
			return false;
	}
	return true;
}
void permute(string a, int l, int r)
{
	if (l == r)
		v.push_back(a);
	else
	{
		for (int i = l; i <= r; i++)
		{
			if (checkString(a, i, r)) {
				swap(a[l], a[i]);
				permute(a, l + 1, r);
				swap(a[l], a[i]);
			}
		}
	}
}
int main()
{
	SPEED;
	//fileio;
	string s;
	cin >> s;
	permute(s, 0, s.length() - 1);
	sort(v.begin(), v.end());
	cout << v.size() << '\n';
	for (string i : v)
		cout << i << '\n';
	return 0;
}
