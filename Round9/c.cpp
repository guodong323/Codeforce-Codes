#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
const int N = 1e5+10;
int main () {
    int n;
    cin >> n;
    vector<int> count(26,0);
    int res = 0;
    char tmp1[N],tmp2[N];
    while (n--) {
        // TODO
        int t,k,a,b;
        cin >> t >> k >> tmp1 >> tmp2;
        for (int i = 0;i < t; i++) {
            if (tmp1[i] == tmp2[i]) {
                res++;
            } else {
                count[tmp1[i]-'a']++;
            }
        }
        sort(count.begin(),count.end());
        for (int i = 0;i < 26-k; i++) {
            res -= count[i];
        }
        cout << "res = " <<res << endl;
    }
    return 0;
}