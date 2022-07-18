//Author: Akash Gautam (@geekblower)
//Date: 13-07-2022
#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define GEEKBLOWER ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define int long long int
#define TEST_CASES create(t);while(t--)
#define SOLUTION solve(); return 0;
#define display(n) cout<<n<<endl;
#define VI vector<int>
#define PB push_back
#define ALL(a) a.begin(),a.end()
#define SORT(a) sort(ALL(a))
#define loop(i,a,b,c) for(int i=a;i<b;i+=c)
#define revloop(i,a,b,c) for(int i=a;i>=b;i-=c)
#define start_loop loop(i,0,n,1)
#define start_revloop revloop(i,n,0,1)
#define create(n) int n;cin>>n;
#define def(a,n) int a[n];start_loop cin>>a[i];
#define print(a) for(auto i : a){cout<<i<<" ";}cout<<endl;
#define vector(a,n) VI a;loop(i,0,n,1){int x;cin>>x;a.PB(x);}
inline int GCD(int a,int b){return !b?a:GCD(b,a%b);}
const int MOD = 1000000007;

void solve() {
    create(n)
    VI arr(n,0);
    
    unordered_map<int, int> count;
    int mx = 0;
    
    start_loop {
        cin>>arr[i];
        count[arr[i]]++;
        mx = max(mx, arr[i]);
    }
    
    int result = 0;
    int maximum = 0;
    
    for (auto i:count) {
        if(i.second == 1)
            result++;
        
        maximum = max(maximum , i.second);
    }
    
    if(result&1) {
        int ans = (result+1)/2;
        if(count[mx]==1) {
            if(maximum==2)
                ans++;
        }
        display(ans)
    } else {
        int ans = result/2;
        display(ans)
    }
}

int32_t main() {
    GEEKBLOWER
    TEST_CASES
    SOLUTION
}
