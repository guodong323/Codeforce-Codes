#include <iostream> 
#include <vector>
using namespace std; 
 
// Driver code 
int main() 
{ 
	int t;
	cin >> t;
	while(t--)
	{
		int n;
		cin >> n;
 
        vector<int> a;
        int res[n][n];
        // vector<int> b;
        int cur1 = 1;
        int cur2 = n*n;
 
        for (int i = 0;i < n*n; i++) {
            if (i % 2 == 0) {
                a.push_back(cur1++);
            } else {
                a.push_back(cur2--);
            }
        }
        int cur = 0;
        for (int i = 0;i < n; i++) {
            for (int j = 0;j < n; j++) {
                if (i % 2 == 0) {
                    res[i][j] = a[cur++];
                } else {
                    res[i][n-j-1] = a[cur++];
                }
            }
        }
        for (int i = 0;i < n; i++) {
            for (int j = 0;j < n; j++) {
                cout << res[i][j] << " ";
            }
            cout << endl;
        }
	}
	return 0; 
}