#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int a[1000];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool serejaTurn = true;
    while (l <= r) {
        int pick;
        if (a[l] > a[r]) {
            pick = a[l];
            l++;
        } else {
            pick = a[r];
            r--;
        }
        if (serejaTurn) {
            sereja += pick;
        } else {
            dima += pick;
        }
        serejaTurn = !serejaTurn;
    }
    cout << sereja << " " << dima << endl;
    return 0;
}
