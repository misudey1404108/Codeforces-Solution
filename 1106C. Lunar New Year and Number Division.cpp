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
ll a[300010];
int main()
{
    fast();
    ll n; cin>>n;
    for(ll i=1;i<=n;i++) cin>>a[i];
    sort(a+1,a+n+1);
    ll sum=0;
    for(ll i=1;i<=n/2;i++)
    {
        sum+=( (a[i]+a[n-i+1])*(a[i]+a[n-i+1]) );
    }
    cout<<sum<<endl;
}
