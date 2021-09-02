#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
 
int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
 
    int n=0;
    cin >>n;
    int a=0 , b=0 , cnt=0;
    int maxx=0;
    for(int i=0 ; i<n ; i++){
        cin >> a >> b;
        cnt+=b;
        cnt-=a;
        maxx = max(cnt , maxx);
    }
    cout << maxx;
    return 0;
}
