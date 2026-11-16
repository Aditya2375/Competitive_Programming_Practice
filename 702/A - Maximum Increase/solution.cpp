#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int prev = 0, cur = 0, best = 0;
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        if (i > 0 && x > prev) {
            cur++;
        } else {
            cur = 1;
        }
        if (cur > best) {
            best = cur;
        }
        prev = x;
    }
    cout << best << endl;
    return 0;
}
