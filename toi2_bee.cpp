#include<bits/stdc++.h>
using namespace std;
int dp[25][3],n;

int main() {
    cin.tie(0)->sync_with_stdio(0);
    dp[0][0]=1 ; dp[0][1]=1;
    for(int i=1;i<25;i++) {
        dp[i][0]=1;
        dp[i][1]=dp[i-1][2]+dp[i-1][1]+dp[i-1][0];
        dp[i][2]=dp[i-1][1];
    }
    while(cin >> n) {
        if(n==-1) return 0;
        cout << dp[n][1] << " " << dp[n][0]+dp[n][1]+dp[n][2] << "\n";
    }
}