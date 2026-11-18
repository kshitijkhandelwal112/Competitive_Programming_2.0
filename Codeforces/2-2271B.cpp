#include <bits/stdc++.h>
#define int long long
using namespace std;
// Easy, but I still saw hint due to lack of confidence. I shouldn't had seen.
// Before I thought that only smallest odd freq. number is answer, and forgot about k.
// Later got confused when saw k, although it was easy.
signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t; cin>>t;
    while(t--){
        int n,k; cin>>n>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++){cin>>a[i];}
        auto z = max_element(a.begin(),a.end());
        vector<int>freq(*z+1,0);
        for(int i=0;i<n;i++) freq[a[i]]++;
        int m=0;
        for(int i=0;i<=*z;i++){
            if(freq[i]<2*k){m=i;break;}
        }
        if(freq[m]==2*k-1) cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}