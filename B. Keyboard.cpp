#include <iostream>
#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <set>
#include <map>
#include <algorithm>
#include <math.h>
using namespace std;

#define Fast ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define nl '\n'
#define All(x) x.begin(),x.end()
#define revAll(x) x.rbegin(),x.rend()

int n , m , x;

int distance(pair<int,int> k , pair<int,int> s){
    return (k.first-s.first)*(k.first-s.first)+(k.second-s.second)*(k.second-s.second);
}

bool isValid(pair<int,int> k , vector<pair<int,int>> s){
    for(auto p:s){
        int d = distance(k,p);
        if(d<=x*x) return true;
    }
    return false;
}

int main() {
    Fast
    cin >> n >> m >> x;
    char key[n][m];
    vector<pair<int,int>> l[26] , s;
    for(int i=0 ; i<n ; i++){
        for(int j=0 ; j<m ; j++){
            cin >> key[i][j];
            if(key[i][j]=='S')
                s.push_back(make_pair(i,j));
            else
                l[key[i][j]-'a'].push_back(make_pair(i,j));
        }
    }
    vector<bool> valid(26,false);
    for(int i=0 ; i<26 ; i++){
        for(int j=0 ; j<l[i].size() && !valid[i] ; j++){
            valid[i] = valid[i] || isValid(l[i][j],s);
        }
    }
    int q;
    cin >> q;
    char text[q];
    for(int i=0 ; i<q ; i++)
        cin >> text[i];
    int res=0;
    for(char c:text){
        if(islower(c)){
            if(l[c-'a'].empty()){
                cout << -1;
                return 0;
            }
        } else{
            char tmp = tolower(c);
            if(s.empty() || l[tmp-'a'].empty()){
                cout << -1;
                return 0;
            }else{
                if(!valid[tmp-'a']) res++;
            }
        }
    }
    cout << res;
    return 0;
}
