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

string s[105];
vector<ll>V[105];
ll ans[105],degree[105],have[105];
ll n,ck=0,dep=0;
priority_queue<int, vector<int>, greater<int> >pq;

void topo()
{
    for(ll i=0;i<26;i++)
    {
        if(!degree[i] && have[i]==1) pq.push(i);
    }
    while(!pq.empty())
    {
        ll tmp=pq.top();
        //cout<<(char) (tmp+'a') <<endl;
        pq.pop();
        ans[ck]=tmp;
        ck++;
        if(V[tmp].size())
        frl(i,0,V[tmp].size()-1)
        {
            ll vp=V[tmp][i];
            degree[vp]--;
            if(!degree[vp])
            {
                pq.push(vp);
            }
        }
    }
    /// print ans array which is in which oder we will do the work
    /// the work is lexicographically smallest order as we used priority queue in increasing way
    ///if(ck!=n) that means we cant do the work in any order
}
int main()
{
    fast();
    cin>>n;
    for(ll i=0;i<n;i++) cin>>s[i];
    for(ll i=1;i<n;i++)
    {
        ll ch1,ch2;
        bool found=false;
        for(ll j=0;j<min( s[i-1].size(), s[i].size() );j++)
        {
            ch1=(s[i-1][j]-'a');
            ch2=(s[i][j]-'a');
            if(s[i-1][j]!=s[i][j])
            {
                V[ch1].pb(ch2);
                degree[ch2]++;
                have[ch1]=1;
                have[ch2]=1;
                found=true;
                break;
            }
        }
        if(!found && s[i-1].size()>s[i].size())
        {
            cout<<"Impossible"<<endl;
            return 0;

        }
    }
    topo();
    for(ll i=0;i<26;i++) if(have[i]==1) dep++;
    if(ck!=dep)
    {
        cout<<"Impossible"<<endl;
        return 0;
    }
    else
    {
        for(ll i=0;i<ck;i++)  cout<<(char) (ans[i]+'a');
        for(ll i=0;i<26;i++)
        {
            if(!have[i])
            {
                cout<<(char) (i+'a');
            }
        }
    }



}
