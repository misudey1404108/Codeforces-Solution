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


map<pll,ll>Map;
ll a[200010],b[200010];
ll cnt=0;
int main ()
{
    fast();
    ll n; cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i];
    for(ll i=1;i<=n;i++)
    {
        cin>>b[i];
        if(a[i] && !b[i])
        {
            Map[ mp(0,1 )]++;
        }
        else if(a[i] && b[i])
        {
        ll gc=__gcd( abs(a[i]-0), abs(b[i]-0) );
        a[i]/=gc; b[i]/=gc;
        //cout<<a[i]<<' '<<b[i]<<endl;
        if(a[i]<0 && b[i]>0 || a[i]>0 && b[i]<0) Map[ mp( abs(a[i]-0),abs(b[i]-0) ) ]++;
        if(a[i]<0 && b[i]<0 || a[i]>0 && b[i]>0) Map[  mp( - abs(a[i]-0),abs(b[i]-0) )]++;
        }
        else if(!a[i] && !b[i]) cnt++;
    }
    ll mx=0;
    for (auto it : Map) mx=max(mx,it.S);
    cout<<mx+cnt;


    return 0;

}
