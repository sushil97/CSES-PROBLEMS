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
	cin >> s;
	char output[s.length()];
	std::map<char, int> m;
	ll int count = 0, start = 0 , end = s.length() - 1;
	for (ll int i = 0; i < s.length(); i++)
		m[s[i]] = m[s[i]] + 1;
	for (const auto &i : m)
	{
		if (i.second % 2)
			count += 1;
	}
	if (count == 0) {
		for (const auto &i : m)
		{
			ll int temp = i.second;
			while (temp > 0)
			{
				temp -= 2;
				output[start++] = i.first;
				output[end--] = i.first;
			}
		}

	}
	else if (count == 1)
	{
		for (const auto &i : m)
		{
			ll int temp = i.second;
			if (temp % 2)
			{
				output[(s.length() - 1) / 2] = i.first;
				temp--;
			}
			while (temp > 0 && start != end)
			{
				temp -= 2;
				output[start++] = i.first;
				output[end--] = i.first;
			}
		}
	}
	else
	{
		cout << "NO SOLUTION";
		return 0;

	}
	for (char i : output)
		cout << i;
	return 0;
}
