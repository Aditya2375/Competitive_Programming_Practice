#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;
        int mx = max({a, b, c});
        int mn = min({a, b, c});
        int med = (a + b + c) - mx - mn;
        cout << med << "
";
    }
    return 0;
}