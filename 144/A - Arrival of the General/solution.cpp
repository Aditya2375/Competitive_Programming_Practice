#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    vector<int> a(n);
 
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
 
    int maxHeight = *max_element(a.begin(), a.end());
    int minHeight = *min_element(a.begin(), a.end());
 
    // Leftmost maximum
    int maxPos = 0;
    while (a[maxPos] != maxHeight) {
        maxPos++;
    }
 
    // Rightmost minimum
    int minPos = n - 1;
    while (a[minPos] != minHeight) {
        minPos--;
    }
 
    int swaps = maxPos + (n - 1 - minPos);
 
    // They cross each other
    if (maxPos > minPos) {
        swaps--;
    }
 
    cout << swaps << endl;
 
    return 0;
}