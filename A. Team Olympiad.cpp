#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n=0;
    cin >> n;
    int teams[3] = {0};
    int a[n];
    for(int i=0 ; i<n ; i++){
        cin >> a[i];
        teams[a[i]-1]++;
    }
    sort(teams,teams+3);
    int res = teams[0];
    cout << res << "\n";
    if(res == 0){
        return 0;
    }
    int ans[res][3];
    int cnt=0;
    for(int i=1 ; i<=3 ; i++){
        for(int j=0 ; j<n ; j++){
            if(a[j]==i){
                ans[cnt][i-1] = j+1;
                cnt++;
            }
            if(cnt>=res){
                break;
            }
        }
        cnt=0;
    }
    for(int i=0 ; i<res ; i++){
        for(int j=0 ; j<3 ; j++){
            cout << ans[i][j] << " ";
        }
        cout << "\n";
    }
    
    return 0;
}
