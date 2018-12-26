
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
vector<ll>V[300010];
ll vis[300010],colour[300010],power[300010];
ll col_2=0,col_1or3=0,ckk=0;
void make_power()
{
    power[0]=1;
    for(ll i=1;i<=300000;i++)
    {
        power[i]=power[i-1];
        power[i]*=2;
        power[i]%=998244353;
    }
    power[0]=1;
}
void dfs(ll node) /// col 1 stands for 2, 0 stands for 1/3
{

    vis[node]=1;
    if(colour[node]==1) col_2++;
    else col_1or3++;
    for(ll j=0;j<V[node].size();j++)
    {
        ll v=V[node][j];
        ll tmp=colour[node];
        tmp^=1;
        if(vis[v] && colour[v]!=tmp) ckk=-1;
        else if(!vis[v]) colour[v]=tmp,dfs(v);
    }
}

int main()
{
    fast();
    ll t,n,m,u,v; scanf("%lld",&t);
    make_power();
    while(t--)
    {
        scanf("%lld%lld",&n,&m);
        col_2=0,col_1or3=0,ckk=0;
        for(ll i=1;i<=n;i++)
        {
            vis[i]=0;
            colour[i]=0;
            V[i].clear();
        }
        for(ll i=1;i<=m;i++)
        {
            scanf("%lld%lld",&u,&v);
            V[u].pb(v);
            V[v].pb(u);
        }
        ll ans=1,tmp=0;
        for(ll i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                colour[i]=1;
                col_2=0; col_1or3=0;
                dfs(i);
                tmp=(power[col_2]+power[col_1or3]);
                tmp%=998244353;
                ans*=tmp;
                ans%=998244353;

            }
        }
        if(ckk==-1) ans=0;
        printf("%lld\n",ans);
    }
}
