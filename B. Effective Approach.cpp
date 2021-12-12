#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

int main() {
    Fast
    int n,m;
    cin >> n;
    vector<int> a(n) , idx(n+1);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        idx[a[i]] = i+1;
    }
    cin >> m;
    int b ;
    ll v=0 , p=0;
    for (int i = 0; i < m; i++) {
        cin >> b;
        v+=idx[b];
        p+=n-idx[b]+1;
    }
    cout << v << ' ' << p;
    return 0;
}
