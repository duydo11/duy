#include<bits/stdc++.h>
#define endl '\n'
#define pb push_back
#define mp make_pair
#define _ ios::sync_with_stdio(false)
bool SUBMIT = 1;
typedef long long ll;
using namespace std;
const double PI = acos(-1);
ll n,m;
const int inf =300000+1000;
ll s1[inf],s2[inf];
int main()
{
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
    cin>>n;
    for(int i=0;i<n;i++)cin>>s1[i];
    cin>>m;
    for(int i=0;i<m;i++)cin>>s2[i];
    ll ans=0;bool f=false;
    ll k1=0,k2=0,u=0;
    for(int i=0;i<n;i++)
    {
        k1+=s1[i];
        while(k2<k1&&u<m)k2+=s2[u++];
        if(k1==k2){
            k1=0,k2=0;
            ans++;continue;
        }
        if(k1<k2)continue;
        if(u>=m){
            f=true;break;
        }
    }
    if(!f&&u>=m&&k1==k2)cout<<ans<<endl;
    else cout<<"-1"<<endl;
    return 0;
}