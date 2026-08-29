#include <iostream>
using namespace std;
 
bool distinct(int year) {
    int a = year / 1000;
    int b = (year / 100) % 10;
    int c = (year / 10) % 10;
    int d = year % 10;
 
    return a != b && a != c && a != d &&
           b != c && b != d &&
           c != d;
}
 
int main() {
    int y;
    cin >> y;
 
    y++;
 
    while (!distinct(y)) {
        y++;
    }
 
    cout << y << endl;
 
    return 0;
}