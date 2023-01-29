#include <iostream>
#include <vector>
using namespace std;

int main() {
int t;
cin >> t;
while (t--) {
int n, s;
cin >> n >> s;
vector<int> a(n);
for (int i = 0; i < n; i++) {
cin >> a[i];
}
long long res = 0;
for (int i = 1; i < n - 1; i++) {
int x = min(a[i], s * 2);
res += x * a[i - 1];
res += (a[i] - x) * a[n - 1];
}
res += a[n - 2] * a[n - 1];
cout << "res = " <<res << endl;
}
return 0;
}




