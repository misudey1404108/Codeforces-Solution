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

vector<pll>P;
ll b[100010],c[100010];
int main()
{
    fast();
    ll n,m;
    cin>>n>>m;
    for(ll i=1;i<=n;i++) cin>>b[i];
    for(ll i=1;i<=n;i++)
    {
        cin>>c[i];
        //cout<<c[i]<<' '<<i<<endl;
        P.pb(mp(c[i],i));
    }
    sort(P.begin(),P.end());
    ll tmp=0;
    for(ll i=1;i<=m;i++)
    {
        ll u,v,sum=0;
        cin>>u>>v;
        if(b[u]>=v)
        {
            b[u]-=v;
            sum+=(c[u]*v);
            v=0;
        }
        else
        {v-=b[u]; sum+=(c[u]*b[u]); b[u]=0;}
        //cout<<b[u]<<' '<<sum<<endl;
        for(ll j=tmp;j<n;j++)
        {
            ll t1=P[j].S;
            //cout<<t1<<' '<<b[t1]<<endl;
            if(b[t1]>=v)
            {
                b[t1]-=v;
                sum+=(c[t1]*v);
                v=0;
            }
            else
            {
                v-=b[t1]; sum+=(c[t1]*b[t1]); b[t1]=0;
            }
            if(b[t1]==0)
            {
                tmp++;
            }
            if(!v)
            {
                cout<<sum<<endl;
                break;
            }
        }
        if(v)
        {
            cout<<0<<endl;
        }



    }




}
