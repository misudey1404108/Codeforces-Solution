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


/*vector<pll>V1,V2;
ll n,r1,c1,r2,c2;
string s[210];
ll vis1[110][110],vis2[110][110];
ll dx[4]={0,0,1,-1};
ll dy[4]={1,-1,0,0};
bool exist(ll x,ll y)
{
    if(x<0 || x>=n || y<0 || y>=n) return false;
    return true;
}
void dfs1(ll x,ll y)
{
    vis1[x][y]=1;
    ll dxx=x,dyy=y;
    for(ll i=0;i<4;i++)
    {
        dxx=x+dx[i];
        dyy=y+dy[i];
        if(exist(dxx,dyy) && !vis1[dxx][dyy] && s[dxx][dyy]=='0')
        {
            V1.pb(mp(dxx,dyy));
            dfs1(dxx,dyy);
        }
    }
}
void dfs2(ll x,ll y)
{
    vis2[x][y]=1;
    ll dxx=x,dyy=y;
    for(ll i=0;i<4;i++)
    {
        dxx=x+dx[i];
        dyy=y+dy[i];
        if(exist(dxx,dyy) && !vis2[dxx][dyy] && s[dxx][dyy]=='0')
        {
            V2.pb(mp(dxx,dyy));
            dfs2(dxx,dyy);
        }
    }
}
void check()
{
    ll ans=1e18;
    for(ll i=0;i<V1.size();i++)
    {
        for(ll j=0;j<V2.size();j++)
        {
            //cout<<V1[i].F<<' '<<V1[i].S<<' '<<V2[j].F<<' '<<V2[j].S<<endl;
            ll tmp=(V1[i].F-V2[j].F)*(V1[i].F-V2[j].F);
            tmp+=((V1[i].S-V2[j].S)*(V1[i].S-V2[j].S));
            ans=min(ans,tmp);
        }
    }
    cout<<ans<<endl;
}*/


int main()
{
    fast();
    ll n,k;
    cin>>n>>k;
    ll ans=(2*n)+1;
    if(k!=1) ans+=min(k-1,n-k);
    ans+=(n-1);
    cout<<ans;


}
