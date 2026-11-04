#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    int x = -1, y = -1;
 
    for (int i = 1; i <= 5; i++) {
        for (int j = 1; j <= 5; j++) {
            int a;
            if (!(cin >> a)) return 1;
 
            if (a == 1) {
                x = i;
                y = j;
            }
        }
    }
 
    if (x < 0 || y < 0) return 1;

    cout << abs(x - 3) + abs(y - 3) << endl;
 
    return 0;
}
