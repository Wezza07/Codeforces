#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fi first
#define se second
#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define sortA(v) sort(v.begin(),v.end());
#define sortD(v) sort(v.rbegin(),v.rend());
#define nl cout << '\n';

const double eps=1e-6;
int main()
{
    Fast

    int t;
    cin >> t;
    while(t--){
        ll n;
        cin >> n;
        vector<int>a(n);
        ll temp=0;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            temp+=a[i];
        }
        ll rem = temp%n;
        cout << rem*(n-rem);
        nl
    }
    return 0;
}
