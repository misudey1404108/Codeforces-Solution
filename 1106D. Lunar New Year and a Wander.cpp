
#include<bits/stdc++.h>
#define ll long long
#define pb push_back
#define fr(i,a,b) for(int i=a;i<=b;i++)
#define re_fr(i,a,b) for(int i=a;i>=b;i--)
#define frl(i,a,b) for(ll i=a;i<=b;i++)
#define re_frl(i,a,b) for(ll i=a;i>=b;i--)
#define mp make_pair
#define F first
#define S second
#define MX 5000010
#define eps 1e-9
#define PI acos(-1)
#define inf 1e18
#define pll pair<ll,ll>
#define mod 1000000007
#define mod2 998244353
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define PI acos(-1)
#define fast() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;
vector<ll>V[300010];
ll vis[300010];
ll n,m,x,y;
vector<ll>ans;
priority_queue<int, vector<int>, greater<int> >pq;
void dfs(ll s)
{
    pq.push(1);
    vis[1]=1;
    while(!pq.empty())
    {
        ll tmp=pq.top();
        pq.pop();
        ans.pb(tmp);
        //cout<<tmp<<endl;

        for(ll j=0;j<V[tmp].size();j++)
        {
            ll vp=V[tmp][j];
            if(!vis[vp])
            {
                vis[vp]=1;
                pq.push(vp);
            }
        }
    }

}

int main()
{
    fast();
    cin>>n>>m;
    for(ll i=1;i<=m;i++)
    {
        cin>>x>>y;
        V[x].pb(y);
        V[y].pb(x);
    }
    for(ll i=1;i<=n;i++) sort(V[i].begin(),V[i].end());
    dfs(1);
    for(ll i=0;i<ans.size();i++) cout<<ans[i]<<' ';


}
