#include <bits/stdc++.h>
#include <unordered_map>
#define N 1000000
using namespace std;
#define maxn 1000006
typedef long long ll;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);

    int n; cin >> n;
    int a[maxn];
    for (int i = 0; i< n; i++){
        cin >> a[i];
    }
    int tmp =0;
    for (int i = 0; i <n; i++){
        for (int j = 0; i <n ; i++){
            if (a[i] > a[j]*2){
                tmp++;
            }
        }
    }
    cout << tmp;
}

