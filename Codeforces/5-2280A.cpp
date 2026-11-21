#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--) {
        int n,k; cin>>n>>k;
        int odd=0;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++){cin>>a[i];odd+=a[i]%2;}
        for(int i=0;i<n;i++){cin>>b[i];odd-=b[i]%2;}
        // now, if 2nd array has less odd no. than 1st, then odd will be +ve, else negative. And 0 if equal odd numbers.
        // If odd==0, everything is sorted. Else, all depends on k.
        // If odd>0, we need to make even numbers out of odd ones. If k=odd, then not possible.
        if(odd==0) cout<<"YES\n";
        else if(odd>0) (k%2==0 ? cout<<"YES\n" : cout<<"NO\n");
        else (k%2!=0 ? cout<<"YES\n" : cout<<"NO\n");
    }
    return 0;
}