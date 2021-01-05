#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int n = s.size();
        
        int dp[n+1][n+1];
        
        for(int i = 0 ; i <=n ; i++)
        {
            for(int j = 0 ; j <= n ; j++)
            {
                dp[i][j] = 0;
            }
        }
        
        for(int i = 1; i <= n ; i++)
        {
            for(int j = 1 ;  j <= n ; j++)
            {
                if(s[i-1] == s[j - 1] && i != j)
                {
                    dp[i][j] = dp[i-1][j-1] + 1;
                }
                else
                {
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
                }
            }
        }
        
        for(int i = 0 ; i <= n ; i ++)
        {
            for(int j = 0 ; j <= n ; j++)
            {
                cout << dp[i][j] << " ";
            }

            cout << endl;
        }
}