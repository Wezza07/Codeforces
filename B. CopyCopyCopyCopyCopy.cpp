#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ////////
    int t=0;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int a[n];
        for(int i=0 ; i< n ;i++) cin >> a[i];
        sort(a,a+n);
        int res=0;
        for(int i=0 ; i<n-1 ; i++){
            if(a[i]!=a[i+1]) res++;
        }
        res++;
        cout << res << '\n';
    }
    ///////
    return 0;
}
