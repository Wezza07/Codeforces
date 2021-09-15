#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(string s){
    int z=0 , o=0;
    int n = s.size();
    for(int i=0 ; i<n ; i++){
        if(s[i]=='0') z++;
        else o++;
    }
    if(z==n || o==n){
        cout << "NET\n";
        return;
    }
    int minn = min(z,o);
    if(minn%2==0) cout << "NET\n";
    else cout << "DA\n";
}

int main()
{
    Fast
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        solve(s);
    }
    return 0;
}
