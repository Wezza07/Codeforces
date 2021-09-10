#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ////////
    int n;
    cin >> n;
    int p;
    cin >> p;
    int temp=0;
    int freq[n+1] = {0};
    for(int i=0 ; i<p ; i++){
        cin >> temp;
        freq[temp]++;
    }
    int q;
    cin >> q;
    for(int i=0 ; i<q ; i++){
        cin >> temp;
        freq[temp]++;
    }
    int cnt=0;
    for(int i=1 ; i<=n ; i++){
        if(freq[i]>0) cnt++;
    }
    if(cnt==n) cout<< "I become the guy.";
    else cout << "Oh, my keyboard!" ;
    ///////
    return 0;
}
