#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int x;
    cin >> x;
 
    int steps = 0;
    while (x > 0) {
        x -= 5;      // take the biggest possible step each time
        steps++;
    }
 
    cout << steps << endl;
}