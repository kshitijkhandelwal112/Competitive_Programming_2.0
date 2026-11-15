//Dice Combinations
#include <bits/stdc++.h>
#define int long long
// Being very new to DP, I couldn't solve this problem. Took hint from AI, how to apply DP here.
using namespace std;
signed main(){
    int n; cin>>n;
    n--;
    vector<int> dp(n+1); // dp[i] represents ways to get sum i.
    // If the last number coming on dice was k (1<=k<=6) then sum before that was i-k, so to get that ways were dp[i-k]
    // Observation: Till i=6, dp will be nothing but 2^(n-1)
    for(int i=1;i<=6;i++){
        dp[i]=(int)pow(2,i-1);
    }
    if(n<=6){cout<<dp[n]<<"\n";return 0;}
    for(int i=7;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6]; // This is the main part of the hint taken from AI, that I couldn't think.
    }
    cout<<dp[n]<<"\n";
    return 0;
}