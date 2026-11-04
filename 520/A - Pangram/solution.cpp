#include <iostream>
#include <string>
#include <cctype>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    string s;
    cin >> s;
 
    bool present[26] = {false};
 
    for (char c : s) {
        c = tolower(static_cast<unsigned char>(c));
        present[c - 'a'] = true;
    }
 
    for (int i = 0; i < 26; i++) {
        if (!present[i]) {
            cout << "NO";
            return 0;
        }
    }
 
    cout << "YES";
 
    return 0;
}
