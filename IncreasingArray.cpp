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
    ll int arr[n];
    for (ll int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll int result = 0;
    for (ll int i = 1; i < n; i++)
    {
        if (arr[i - 1] > arr[i]) {
            result += arr[i - 1] - arr[i];
            arr[i] = arr[i - 1];
        }
    }
    cout << result;
    return 0;
}
