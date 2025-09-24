#include <bits/stdc++.h>
#include <math.h>
using namespace std;
typedef long long ll;
#define maxn 10000003
#define MOD 100000000003

const int base = 31;
ll s[maxn];
ll a[maxn];
#define fast_io ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

int main(){

	freopen("inputf.in", "r", stdin);
    freopen("outputf.out", "w", stdout);
	fast_io;
	

    int t; cin >> t;
    while (t--){
    	int n; cin >> n;
    	ll sum=0;

    	std::vector<int> v_odd;
    	for (int i =0; i < n; i++){
    		cin >> a[i];
    		if (a[i]%2==1)
    		{
    			v_odd.push_back(a[i]);
    		}else{
    			sum+= a[i];
    		}		
    	}
    	sort(v_odd.begin(), v_odd.end(), greater<int>())
;
    	if (v_odd.size() == 0){
    		sum = 0 ;
    	}else if(v_odd.size() ==1){
    		sum = sum+= v_odd[0];
    	}else if (v_odd.size() > 1 && v_odd.size() %2 ==1){
    		int k = (v_odd.size()/2) ;
    		for (int i =0; i <= k; i++){
    			sum+= v_odd[i];

    		}
    	}else{
    			int o = v_odd.size() /2 -1;
    			for (int i = 0; i<= o; i++){
    				sum += v_odd[i];
    			}
    		}  cout << sum << '\n';  	
    	}
	return 0;
}