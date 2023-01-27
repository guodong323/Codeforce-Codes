#include <math.h>
#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

// #define PI acos(-1)

int main () {
    int n;
    cin >> n;
    string p = "314159265358979323846264338327";
    while (n--) {
        // TODO
        string cur;
        cin >> cur;
        int res = 0;
        bool flag = false;
        for (int i = 0;i < cur.size(); i++) {
            if (cur[i] != p[i]) {
                cout << res << endl;
                flag = true;
                break;
            } else {
                res++;
            }
        } 
        if (flag == false)
            cout << res << endl;
    }
    return 0;
}