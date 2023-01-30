#include <bits/stdc++.h>
using namespace std;
int n, k, a[100100], b[100100], cnt, mx;
bool cmp(int x, int y) {
    return x < y;
}
int main() {
    cin >> n >> k;
    for (int i = 1; i <= k; i++) {
        cin >> a[i];
        b[a[i]]++;
        if (b[a[i]] > 1) {
            cout << cnt << endl;
            return 0;
        }
    }
    sort(a + 1, a + k + 1, cmp);
    for (int i = 2; i <= k; i++) {
        if (a[i] - a[i - 1] > 1) {
            cout << cnt << endl;
            return 0;
        }
    }
    cout << a[k] << endl;
    return 0;
}