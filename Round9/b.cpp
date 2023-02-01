#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
/**
 * pos[i] < pos[i+1] <= pos[i] + d
*/
int main () {
    int co;
    cin >> co;
    while (co--) {
        // TODO
        int n,m,d;
        cin >> n >> m >> d;
        vector<int> p(n);
        vector<int> a(m);
        for (int i = 0;i < n; i++) {
            cin >> p[i];
        }
        for (int i = 0;i < m; i++) {
            cin >> a[i];
        }
        unordered_map<int,int> pos;
        for (int i = 0;i < n; i++) {
            pos[p[i]] = i+1;
        }
        int res = INT_MAX;
        int tmp = 0;
        for (int i = 0;i < m-1; i++) {
            if (pos[a[i]] >= pos[a[i+1]]) {
                cout << "res = " <<"0" << endl;
                tmp = 1;
                break;
            }
            if (pos[a[i+1]] > pos[a[i]]+d) {
                cout << "res = " <<"0" << endl;
                tmp = 1;
                break;
            }
            res = min(res,pos[a[i+1]] - pos[a[i]]);
            if (d + 1 - (pos[a[i+1]] - pos[a[i]]) <= (n-pos[a[i+1]] + pos[a[i]] - 1)) {
                res = min(res,d+1-(pos[a[i+1]]- pos[a[i]]));
            }
            if (tmp == 1) continue;
        }
        cout << "res = " <<res << endl;
    }
    return 0;
}