#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <math.h>
#include <iomanip>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define nl '\n'
#define All(x) x.begin(),x.end()
#define revAll(x) x.rbegin(),x.rend()

vector<int> v;

void recc(int n , int target){
    if(n==0) {
        v.push_back(target);
        return;
    }
    recc(n-1 , target+1);
    recc(n-1 , target-1);
}


int main() {
    Fast
    string s1, s2;
    cin >> s1 >> s2;
    int target = 0, tmp = 0, q = 0;
    for (char c: s1)
        target += (c == '+' ? 1 : -1);
    for (char c: s2) {
        if (c == '?') q++;
        else tmp += (c == '+' ? 1 : -1);
    }
    recc(q, tmp);
    int res = 0;
    for (auto x: v){
        if (x == target)
            res++;
    }
    cout << setprecision(20) << (double) res/v.size();
    return 0;
}
