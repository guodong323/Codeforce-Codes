#include <iostream>
using namespace std;

int main() {   
    int n;
    cin >> n;
    while(n--) {
        string s;
        cin >> s;
        char tag = '0';
        for(int i = 0;i < s.size(); i++) {
            if(s[i] == '?') s[i] = tag;
            else tag = s[i];
        }
        cout << s << endl;
    }
    return 0;
}