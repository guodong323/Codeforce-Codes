#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

int main () {
    int n;
    cin >> n;
    int x[4] = {1,0,-1,0};
    int y[4] = {0,-1,0,1};
    while (n--) {
        // TODO
        int t;
        string path;
        cin >> t >> path;
        int a = 0,b = 0;
        bool flag = true;
        for (int i = 0;i < path.size(); i++) {
            if (path[i] == 'U') {
                a += 0;
                b += 1;
            } else if (path[i] == 'R') {
                a += 1;
                b += 0;
            } else if (path[i] == 'L') {
                a -= 1;
                b += 0;
            } else if (path[i] == 'D') {
                a += 0;
                b -= 1;
            }
            if (a == 1 && b == 1) {
                cout << "YES" << endl;
                flag = false;
                break;
            } 
        }
        if (flag) {
            cout << "NO" << endl;
        }
    }
    return 0;
}