
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
#define MX 10010
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
/// ll lb = lower_bound( b, b+n, 100 ) - b
ll n,m;
ll a[200010];
int main()
{
    fast();
    ll t; scanf("%lld",&t);
    while(t--)
    {
        ll n,m,ans=0; scanf("%lld %lld",&n,&m);
        ll res=0;
        for(ll i=1;i<=10;i++) res+=( (i*m)% 10 );
        ll tmp=n/m;
        ans+=(res*(tmp/10));
        ll x=tmp%10;
        for(ll i=1;i<=x;i++)  ans+=( (i*m)% 10 );
        printf("%lld\n",ans);

    }
    return 0;

}
