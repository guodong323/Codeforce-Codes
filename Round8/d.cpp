#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool help(int a,int b,int t,vector<int>& v) {
    int c = a; 
    while (c >= 1 && c <= t) {
        int xia = c+b;
        if (xia == a) return false;
        c = xia;
        b = v[c];
    }
    return true;
}
bool isv(int a, int b,int t) {
    if (a < 1 || a > t || b < -t || b > t) return false;
    return true;
}
int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int t;
        cin >> t;
        vector<int> v;
        vector<int> counts(2e5+10,0);
        for (int i = 1; i <= t; i++) {
            int tmp;
            cin >> tmp;
           v.push_back(tmp);
            counts[i]=0;
        }

        for (int i = 1;i <= t; i++) {
            int a = i;
            int b = v[i];
            while (a >= 1 && a <= t && counts[a] == 0) {
                counts[a] = i;
                a += b;
                b = v[a];
            }
        }

        unordered_set<int> visited;
        int res = 0;
        for (int i = 1; i <= t; i++) {
            int a = i;
            int b = v[i];
            while (isv(a,b,t)) {
                if (visited.count(a)) break;
                visited.insert(a);
                int cnt = 0;
                int l = a;
                int r = a;
                while (counts[r] == counts[a]) {
                    r += b;
                    b = v[r];
                    cnt++;
                }
                if (cnt == 1) {
                    res++;
                } else {
                    int x = l-t;
                    int y = l+t;
                    if (x <= b && b <= y) {
                        if (help(l,b,t,v)) {
                            res++;
                        }
                    }
                }
                a = r;
                b = v[r];
            }
        }
        cout << "res = " <<res << endl;
    }
    return 0;
}