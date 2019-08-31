
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
map<ll,ll>occ;
int main()
{
    fast();
    ll n,k; cin>>n>>k;
    ll mx=0;
    for(ll i=1;i<=n;i++)
    {
        cin>>a[i];
        mx=max(mx,a[i]);
        occ[a[i]]++;
    }
    ll mn=1e18;
    for(ll i=0;i<=mx;i++)
    {
        if(occ[i]>=k)
        {
            cout<<0<<endl;
            return 0;
        }
        else
        {
            vector<ll>tmp;
            ll ans=0;
            for(ll j=1;j<=n;j++)
            {
                ll ck=0;
                ll tt=a[j];
                while(tt)
                {
                    tt/=2;
                    ck++;
                    if(tt==i) tmp.pb(ck);
                    if(tt<=i) break;
                }
            }
            if(tmp.size()+occ[i]>=k)
            {
                sort(tmp.begin(),tmp.end());
                ll nibe=k-occ[i];
                for(ll p=0;p<nibe;p++) ans+=tmp[p];
                mn=min(mn,ans);
            }
        }

    }
    cout<<mn;
    return 0;

}
