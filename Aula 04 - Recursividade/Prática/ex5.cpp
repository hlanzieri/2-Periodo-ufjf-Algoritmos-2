#include <bits/stdc++.h>

using namespace std;

int modulo(int x, int y) {
    if (x == y) return 0;
    else if (x < y) return x;
    else return modulo(x - y, y);
}


int main () {
    int x, y;
    cin >> x >> y;
    cout << modulo(x, y);
    return 0;
}