
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
string s1,s2;
ll a[200010];
string tmp[6]={"abc","acb","bac","bca","cab","cba"};
bool check(string tm)
{
    string fi,se,th;
    fi+=tm[0]; fi+=tm[1];
    se+=tm[1]; se+=tm[2];
    th+=tm[2]; th+=tm[0];
    //cout<<fi<<' '<<se<<' '<<th<<endl;
    if(fi==s1 || fi==s2) return false;
    if(se==s1 || se==s2) return false;
    if(n>1)
    {
        if(th==s1 || th==s2) return false;
    }
    return true;

}
bool check2(string tm)
{
    string fi,se,th;
    fi+=tm[0]; fi+=tm[1];
    se+=tm[1]; se+=tm[2];
    th+=tm[2]; th+=tm[0];
    //cout<<fi<<' '<<se<<' '<<th<<endl;
    if(fi==s1 || fi==s2) return false;
    if(se==s1 || se==s2) return false;
    return true;

}
int main()
{
    fast();
    cin>>n;
    cin>>s1>>s2;
    for(ll i=0;i<6;i++)
    {
        bool pp=check(tmp[i]);
        if(pp)
        {
            cout<<"YES"<<endl;
            for(ll j=1;j<=n;j++) cout<<tmp[i];
            return 0;
        }
    }
    for(ll i=0;i<6;i++)
    {
        bool pp=check2(tmp[i]);
        if(pp)
        {
            cout<<"YES"<<endl;
            for(ll j=1;j<=n;j++) cout<<tmp[i][0];
            for(ll j=1;j<=n;j++) cout<<tmp[i][1];
            for(ll j=1;j<=n;j++) cout<<tmp[i][2];
            return 0;
        }
    }


    cout<<"NO"<<endl;





    return 0;

}
