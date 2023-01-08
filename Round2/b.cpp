#include <iostream>
#include <cmath>
#include <vector>
using namespace std;
 
int main(){
    int t;
    cin >> t;
    while(t--) {
        int n,k;
        cin >> n >> k;
        vector<int> tmp(n,0);
        for(int i = 0;i < n; i++){
            cin >> tmp[i];
        } 
        vector<int> m;
        int i = 0;
        for(i=0;i < n; i++){
            if(tmp[i] == 1){
                m.push_back(1);
                break;
            }
        }
        for(int j = 0;i<n;i++){
            if(m[j]+1==tmp[i]){
                m.push_back(tmp[i]);
                j++;
            }
        }
        int l=n- m.size();
        if(l % k==0){
            cout<<l/k<<endl;
        }
        else{
            cout<<l/k+1<<endl;
        }
    }
    return 0;
}