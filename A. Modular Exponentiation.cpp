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

// Binary Exponentiation
ll FastMultiplication(ll Base , ll Power){
    if(Power==0) return 1;
    ll res = FastMultiplication(Base,Power>>1);
    res*=res;
    if(Power&1) res*=Base;
    return res;
}

int main() {
    Fast
    int n,m;
    cin >> n >> m;
    cout << ( n>=31 ? m : m% FastMultiplication(2,n));
    return 0;
}
