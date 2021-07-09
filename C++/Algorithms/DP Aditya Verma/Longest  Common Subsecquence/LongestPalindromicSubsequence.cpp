#include<bits/stdc++.h>
using namespace std;


int lps(string a)
{
    int n = a.length();
    string b = a;
    reverse(b.begin(),b.end());
    int dp[n+1][n+1];
    memset(dp,0,sizeof(dp));
    for(int i = 1;  i<= n ; i++)
    {
        for(int j = 1;  j <= n ; j++)
        {
            if(a[i-1] == b[j-1])
                dp[i][j] = 1 + dp[i-1][j-1];
            else
                dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
        }
    }
    return dp[n][n];
}

int main()
{
    string a;
    cin >> a;
    cout << lps(a);
}