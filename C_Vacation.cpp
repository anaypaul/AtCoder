#include<iostream>
#include<algorithm>
#include<vector>
#define pb push_back
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<vector<int> > v;
    for(int i = 0;i<n;i++){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int> t;
        t.push_back(a);
        t.push_back(b);
        t.push_back(c);
        v.push_back(t);
        t.clear();
    }
    int dp[3][100005];
    for(int i = 0;i<n;i++){
        dp[0][i] = v[i][0] + max(dp[1][i-1] , dp[2][i-1] );
        dp[1][i] = v[i][1] + max(dp[0][i-1] , dp[2][i-1] );
        dp[2][i] = v[i][2] + max(dp[0][i-1] , dp[1][i-1] );
    }
    cout<<max( dp[0][n-1] , max(dp[1][n-1], dp[2][n-1]));
    return 0;
}