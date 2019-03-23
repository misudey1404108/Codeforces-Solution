///......................................///
///......... Name : Misu Dey  ...........///
///......... University: CUET ...........///
///......... Id : 1404108     ...........///
///......................................///

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
/// lower bound for sorted array
/// ll lb = lower_bound( b, b+n, 100 ) - b;

vector<ll>V[200010];
ll vis[200010];
ll sz=0;
ll bigmod(ll b,ll p,ll n){
    if (p==0) return 1;
    else if(p%2==0){
        ll half1=bigmod(b,p/2,n);
        return ((half1*half1)%n);
    }
    else if(p%2==1){
        ll p1=b%n;
        ll p2=bigmod(b,p-1,n);
        return((p1*p2)%n);
    }

}
void dfs(ll node)
{
    vis[node]=1;
    sz++;
    for(ll j=0;j<V[node].size();j++)
    {
        ll vp=V[node][j];
        if(!vis[vp]) dfs(vp);
    }
}
int main ()
{
    fast();
    ll n,k,u,v,x;
    cin>>n>>k;
    for(ll i=1;i<n;i++)
    {
        cin>>u>>v>>x;
        if(!x) V[u].pb(v), V[v].pb(u);
    }
    ll ans=bigmod(n,k,mod);
    for(ll i=1;i<=n;i++)
    {
        if(!vis[i])
        {
            sz=0;
            dfs(i);
            ans-=bigmod(sz,k,mod);
            ans+=mod; ans%=mod;
        }
    }
    cout<<ans;
    return 0;

}
