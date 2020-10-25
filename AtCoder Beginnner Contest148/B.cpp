#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_set>
#include<set>
#include<unordered_map>
#include<map>
#include<queue>
#include<stack>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s1, s2;
    cin>> s1 >> s2;
    string res = "";
    for(int i = 0; i<n; i++){
        res += s1[i];
        res += s2[i];
    }
    cout<< res<<endl;
    return 0;
}