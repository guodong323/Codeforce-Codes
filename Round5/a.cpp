#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        int t;
        cin >> t;
        vector<int> hp(t);
        unordered_map<int,int> m;
        for (int i = 0;i < t; i++) {
            cin >> hp[i];
            m[hp[i]]++;
        }
        int res = 0;
        for (auto i = m.begin(); i != m.end(); i++) {
            if (i->first == 1)  {
                int k = i->second/2;
                res += (i->second/2);
                m[1] -= 2*k;
            } 
            else res += i->second;
        }
        res += m[1];
        cout << res  << endl;
    }
    return 0;
}