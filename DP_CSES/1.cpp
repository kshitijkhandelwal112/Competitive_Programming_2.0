//Dice Combinations
#include <bits/stdc++.h>
#define int long long
// Being very new to DP, I couldn't solve this problem. Took hint from AI, how to apply DP here.
using namespace std;
int powr(int a, int b){
    int ans=1;
    while(b--)ans*=a;
    return ans;
}
signed main(){
    int n; cin>>n;
    if(n<=6){cout<<powr(2,n-1)<<"\n";return 0;}
    vector<int> dp(n+1); // dp[i] represents ways to get sum i.
    // If the last number coming on dice was k (1<=k<=6) then sum before that was i-k, so to get that ways were dp[i-k]
    // Observation: Till i=6, dp will be nothing but 2^(n-1)
    for(int i=1;i<=6;i++){
        dp[i]=((int)powr(2,i-1))%1000000007;
    }
    for(int i=7;i<=n;i++){
        dp[i]=dp[i-1]+dp[i-2]+dp[i-3]+dp[i-4]+dp[i-5]+dp[i-6]; // This is the main part of the hint taken from AI, that I couldn't think.
        dp[i]%=1000000007;
    }
    dp[n]%=1000000007;
    cout<<dp[n]<<"\n";
    return 0;
}
/*
BEST WAY TO WRITE THIS CODE AS TOLD BY CLAUDE:
#include <bits/stdc++.h>
using namespace std;

int main() {
    const long long MOD = 1000000007;
    int n;
    scanf("%d", &n);

    vector<long long> dp(n + 1, 0);
    dp[0] = 1;

    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= 6 && k <= i; k++) {
            dp[i] += dp[i - k];
        }
        dp[i] %= MOD;
    }

    cout<<dp[n]<<"\n";
    return 0;
}
*/