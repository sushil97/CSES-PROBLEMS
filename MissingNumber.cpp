#include<bits/stdc++.h>
using namespace std;
int main()
{

    long long int n;
    cin >> n;
    long long int arr[n];
    for (long long int i = 0 ; i < n - 1; i++) {
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
    for (long long int i = 0 ; i < n - 2; i++) {
        if (abs(arr[i] - arr[i + 1]) != 1) {
            cout << arr[i] + 1;
            break;
        }
    }

}
