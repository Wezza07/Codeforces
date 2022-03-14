#include <bits/stdc++.h>
 
using namespace std;
typedef long long ll;
typedef long double ld;
 
const int N = 100;
vector<int> primes;
 
bool isPrime(int x){
    if(x<2)
        return 0;
 
    for (int i = 2; i*i <=x ; ++i) {
        if(x%i==0)
            return 0;
    }
    return 1;
}
 
void addPrimes(){
    for (int i = 2; i <=N ; ++i) {
        if(isPrime(i))
            primes.push_back(i);
    }
}
 
int closest_l(int x){
    int l = -1 , r = primes.size();
    while (r-l>1){
        int m = (l+r)>>1;
        if(primes[m]<=x)
            l = m;
        else
            r = m;
    }
    return primes[l];
}
 
void solve(){
    int n; cin >> n;
    addPrimes();
    int ones = closest_l(n);
    int zeros = n-closest_l(n);
    queue<int> q;
    for (int i = 0; i < ones; ++i) {
        q.push(1);
    }
 
    for (int i = 0; i < zeros; ++i) {
        q.push(0);
    }
 
    for (int i = 0; i < n; ++i) {
        queue<int> tmp = q;
        while (!tmp.empty()){
            cout << tmp.front() << ' ';
            tmp.pop();
        }
        cout << '\n';
        for (int j = 0; j < zeros; ++j) {
            int temp = q.front();
            q.pop();
            q.push(temp);
        }
    }
}
 
int main() {
 
    ios::sync_with_stdio(false);cin.tie(nullptr);cout.tie(nullptr);
 
    int t=1;
    cin >> t;
 
    while (t--){
        solve();
    }
 
    return 0;
}
