#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b;
        c = a / b;
        if (c > 20) {
            cout << 20 << endl;
        }
        else {
            cout << c << endl;
        }
    }
}