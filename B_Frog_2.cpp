#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<climits>
using namespace std;
int main(){
    int n;
    cin>>n;
    int K;
    cin>>K;
    vector<int> v;
    for(int i = 0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int> dp(110000, INT_MAX);
    dp[0] = 0;
    for(int i = 0;i<n;i++){
        for(int j = 1;j<=K && i+j<n;j++){
            dp[i+j] = min(dp[i+j], dp[i] + abs(v[i]-v[i+j]));
        }
    }
    cout<<dp[n-1]<<endl;
    return 0;
}