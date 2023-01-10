#include <iostream>
using namespace std;

int main() {
    // n and x
    int n, x;
    cin >> n >> x;

    // Start from n and increment m until the AND equality is found
    int m = n;
    int andValue = n;
    while (andValue != x) {
        m++;
        andValue &= m;
    }

    cout << "m: " << m << endl;
    return 0;
}
