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
        int cap = a+b+c+d;
        int res = a;
        if (a > 0) {
            int tmp = min(b,c);
            res += 2*tmp;
            b -= tmp;
            c -= tmp;
        }

        b = min(b,a);
        c = min(c,a);
        res += b+c;

        d = min(d,min(a-b,a-c));
        res += d;
        cout << min(res+1,cap) << endl;
    }
    return 0;
}