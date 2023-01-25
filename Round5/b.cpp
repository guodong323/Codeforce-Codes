#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        int a,b,c,d;
        cin >> a >> b >> c >> d;
        if (a == 0) cout << 1 << endl;
        else {
            // 先找出bc中最小的，减去对应的值
            int t = min(b,c);
            b -= t;
            c -= t;
            if (b+c > a) cout << 2*a + 2*t + 1 << endl;
            else cout << a+2*t+b+c+min(d,a-b-c+1) << endl;
        }
    }
    return 0;
}