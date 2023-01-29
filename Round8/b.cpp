#include <iostream>
#include <vector>
#include <unordered_map>
#include <map>
#include <math.h>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int t;
        cin >> t;
        int cur = t;
        int maxv = 1;
        unordered_map<int,int> m;
        for (int i = 2;i * i <= t; i++) {
            if (cur % i == 0) {
                int count = 0;
                while (cur % i ==0) {
                    count ++;
                    cur /= i;
                }
                m[i] = count;
                maxv = max(count,maxv);
            }
        }
        if (cur != 1) m[cur] = 1;
        int res = 0;
        for (int i = 0;i <= maxv; i++) {
            int tmp = 1;
            unordered_map<int, int>::iterator iter;
            for(iter = m.begin(); iter != m.end(); iter++) {
                if (iter->second > 0) {
                    m[iter->first]--;
                    tmp *= iter->first;
                }
            }
            res += tmp;
        }
        cout <<res-1 << endl;
    }
     return 0;
}