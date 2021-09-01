#include <bits/stdc++.h>

using namespace std;
typedef long long ll;


int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    sort(s.begin() , s.end());
    int n = s.size()/2;
    string res;
    for(int i=n ; i<s.size() ; i++){
        res+=s[i];
        if(i!=s.size()-1){
            res+='+';
        }
    }
    cout << res;

    return 0;
}
