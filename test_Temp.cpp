#include <bits/stdc++.h>
using namespace std;

int n, k, a[1000005];
bool b[1000005];

int main() {
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int cnt = 0, l = 0, r = 0, mx = 0, c = 0;
    while (r < k) {
        if (!b[a[r]]) cnt++;
        b[a[r++]] = true;
    }
    if (cnt == k) mx = max(mx, a[r - 1]);
    else c = k - cnt;
    while (r < n) {
        b[a[l++]] = false;
        if (!b[a[r]]) cnt++;
        b[a[r++]] = true;
        if (cnt == k) mx = max(mx, a[r - 1]);
        else c = min(c, k - cnt);
    }
    if (c) cout << c << endl;
    else cout << mx << endl;
    return 0;
}