#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define fast  ios::sync_with_stdio(false); \
    cin.tie(NULL)


void _run()
{
    int n;
    cin >> n;
    ll a[n];
    for(int i = 0 ; i < n ; i ++)
        cin >> a[i];

    ll ans[n];
    for(int i = 0 ; i < n ; i ++)
        ans[i] = (a[i] + (a[i]-1) * i);
    
    ll sum = 0;
    for(int i = 0 ; i < n ; i ++)
        sum += ans[i];
    cout << sum;
}

int main()
{
    fast;
    int test=1;
    while(test--)
        _run();
    return 0;
}
