#include <bits/stdc++.h>
using namespace std;

int n, k, a[100010], f[100010], ans;
bool b[100010];

int main() {
    cin >> n >> k;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        b[a[i]] = true;
    }
    int cnt = 0;
    for (int i = 1; i <= n - k + 1; i++) {
        cnt = 0;
        memset(f, 0, sizeof f);
        for (int j = i; j < i + k; j++) {
            if (b[a[j]]) {
                f[a[j]]++;
                if (f[a[j]] == 1) cnt++;
            }
        }
        if (cnt == k) {
            ans = i;
            break;
        }
    }
    if (cnt == k) {
        cout << "Secventa ";
        for (int i = ans; i < ans + k; i++) cout << a[i];
        cout << " este cool.\n";
        int maxx = -1;
        for (int i = ans; i < ans + k; i++) maxx = max(maxx, a[i]);
        cout << "Valoarea maxima din secventa este " << maxx << endl;
    } else {
        cout << "Secventa ";
        for (int i = ans; i < ans + k; i++) cout << a[i];
        cout << " nu este secventa cool. Numărul valorilor distincte din secventa este " << cnt << ". ";
        cout << "Valorile distincte sunt: ";
        for (int i = ans; i < ans + k; i++) {
            if (f[a[i]] == 1) cout << a[i] << " ";
        }
        cout << endl;
    }
    return 0;
}