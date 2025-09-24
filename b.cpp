#include <bits/stdc++.h>
// Other includes and definitions...
using namespace std;
typedef long long ll;

using namespace std;
const int maxn=300010;
typedef long long ll;
vector<int>v1,v2;

#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);
 
int t;
char s[maxn];
int main()
{
    fast_io;
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
    int t; cin >> t;
    while (t--){
        v1.clear();
        v2.clear();
        char s[maxn]; cin >> s;
        int len = strlen(s);
        int n;
        
        for (int i =0; i < len; i ++){
            n = s[i] -'0';
            if (n%2) v1.push_back(n);
            else v2.push_back(n);
        }

        int i,j;
        int lenv1= v1.size();
        int lenv2= v2.size();
        for ( i =0, j=0; i < lenv1 && j <lenv2;){
            if (v1[i] < v2[j]) cout << v1[i], i++;
            else cout << v2[j]; j++;
        }

        if (i < lenv1){
            for (int k = i; k < lenv1; k++){
                cout << v1[k];
            }
        }
        if (j < lenv2){
            for (int k =j; k < lenv2; k++){
                cout << v2[k];
            }
        }
        cout << '\n';
    }
    return 0;
}



