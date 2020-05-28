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
    for (ll int i = 0 ; i < n - 1; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + (n - 1));
    if (arr[0] != 1) {
        cout << "1";
        return 0;
    }
    if (arr[n - 2] != n) {
        cout << n;
        return 0;
    }
    for (ll int i = 0 ; i < n - 2; i++) {
        if (abs(arr[i] - arr[i + 1]) != 1) {
            cout << arr[i] + 1;
            break;
        }
    }

}
