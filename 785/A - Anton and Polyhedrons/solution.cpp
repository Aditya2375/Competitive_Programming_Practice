#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long total = 0;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        switch (s[0]) {
            case 'T': total += 4; break;
            case 'C': total += 6; break;
            case 'O': total += 8; break;
            case 'D': total += 12; break;
            default: total += 20; break;
        }
    }
    cout << total << endl;
    return 0;
}
