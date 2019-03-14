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


vector<ll>V;
int main ()
{
    fast();
    ll n,x; cin>>n;
    for(ll i=1;i<=n;i++) cin>>x, V.pb(x);
    sort(V.begin(),V.end());
    ll ans=0;
    for(ll i=0;i<V.size();i++)
    {
        auto it=upper_bound(V.begin()+i,V.end(),V[i]+5);
        if(*it>V[i]+5 || it==V.end()) it--;
        ll tt=it-V.begin()-i+1;
        //cout<<tt<<endl;
        ans=max(ans, tt);
    }
    cout<<ans;

    return 0;

}
