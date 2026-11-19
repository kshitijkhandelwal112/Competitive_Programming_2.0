#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n; cin>>n;
        if(n<4)cout<<-1<<"\n";
        else{
            cout<<"4 2 3 1 ";
            for(int i=5;i<=n;i++){
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}