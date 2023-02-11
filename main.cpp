#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

// Hitung jarak dengan rumus Euclidean distance
int main(){
    setprecision(5);
    ll x1, y1, z1, x2, y2, z2;
    cin >> x1 >> y1 >> z1;
    cin >> x2 >> y2 >> z2;
    ll ans = (x1 - x2) * (x1 - x2) + \
            (y1 - y2) * (y1 - y2) + \
            (z1 - z2) * (z1 - z2);
    double res = sqrt(ans * 1.0);
    cout << fixed << res << '\n';
    return 0;
}
