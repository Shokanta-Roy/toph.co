#include<bits/stdc++.h>
using namespace std;

typedef vector<int> vii;
#define fast() ios_base::sync_with_stdio(false),cin.tie(NULL)
#define all(a) a.begin(),a.end()
#define MAX(x) *max_element(all(x))
#define nl '\n'

int main()
{
    fast();
    int tc=1,cs=0;
    ///cin>>tc;
    while(tc--)
    {
        int n,m;
        cin>>n>>m;
        vii dp(m+1);
        for(int i=0;i<n;i++)
        {
            int w,v;
            cin>>w>>v;
            for(int j=m;j>=w;j--)
                dp[j]=max(dp[j],v+dp[j-w]);
        }
        cout<<MAX(dp)<<nl;
    }
}
