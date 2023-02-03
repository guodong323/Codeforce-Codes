#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    while (n--) {
        // TODO
        int t;
        string num;
        cin >> t >> num;
        bool flag = true;
        int l= 0;
        int r = num.size()-1;
        while (flag && num.size() >= 0 && l < r) {
            if ((num[l] == '1' && num[r] == '0') || (num[l] == '0' && num[r] == '1')) {
                num.pop_back();
                num = num.substr(l+1);
                t -= 2;
                l = 0;
                r = num.size()-1;
            } else {
                flag = false;
            }
        }
        cout << t << endl;
    }
    return 0;
}