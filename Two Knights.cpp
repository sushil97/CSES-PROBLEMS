#include<bits/stdc++.h>
using namespace std;
#define SPEED ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define fileio freopen("input.txt", "r", stdin),freopen("output.txt", "w", stdout);
#define ll long long
int main()
{
    SPEED;
    //fileio;
    int k;
    cin >> k;
    for (ll int i = 1; i <= k; i++)
    {
        cout << (i * i) * (i * i - 1) / 2 - 4 * (i - 1) * (i - 2) << "\n";
    }
    return 0;
}
