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
ll degree[200010];
ll vis[200010],par[200010];
vector<ll>V[200010];
ll find(ll node)
{
    if(par[node]==node) return node;
    else return par[node]=find(par[node]);
}

int main ()
{
    fast();
    ll n,m,a,b; cin>>n>>m;
    for(ll i=1;i<=m;i++)
    {
        cin>>a>>b;
        V[a].pb(b);
        V[b].pb(a);
        degree[a]++; degree[b]++;
    }
    priority_queue<pll>pq;
    for(ll i=1;i<=n;i++)
    {
        par[i]=i;
        pq.push( { degree[i],i } );
    }
    ll cnt=0;
    vector<pll>ans;
    while(! pq.empty())
    {
        pll tmp=pq.top();
        pq.pop();
        for(ll i=0;i<V[tmp.S].size();i++)
        {
            ll vp=V[tmp.S][i];
            ll tmp1=find(tmp.S);
            ll tmp2=find(vp);
            if(tmp1!=tmp2)
            {
                cnt++;
                par[tmp1]=tmp2;
                ans. pb( {tmp.S, vp} );
            }
            if(cnt==n-1) break;
        }
        if(cnt==n-1) break;
    }
    for(ll i=0;i<ans.size();i++) cout<<ans[i].F<<' '<<ans[i].S<<endl;




    return 0;

}
