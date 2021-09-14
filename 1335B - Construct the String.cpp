#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second

void solve(int n , int a , int b){
    string res;
    int j=0;
    for(int i=0 ; i<n ; i++){
        res+= 97+(j%b);
        j++;
    }
    cout << res << '\n';
}

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ////////
    int t;
    cin >> t;
    while(t--){
        int n,a,b;
        cin >> n >> a >> b;
        solve(n,a,b);
    }
    ///////
    return 0;
}
