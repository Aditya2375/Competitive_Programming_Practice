#include <iostream>
#include <cctype>
using namespace std;
 
int main() {
    string s;
    cin >> s;
 
    size_t upper = 0;
 
    for (char c : s) {
        if (isupper(static_cast<unsigned char>(c)))
            upper++;
    }
 
    if (upper > s.length() - upper) {
        for (char &c : s)
            c = toupper(static_cast<unsigned char>(c));
    } else {
        for (char &c : s)
            c = tolower(static_cast<unsigned char>(c));
    }
 
    cout << s << endl;
 
    return 0;
}
