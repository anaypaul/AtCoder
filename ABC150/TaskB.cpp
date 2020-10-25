#include<iostream>
#include<vector>
using namespace std;
int solve(string s){
    int res = 0;
    for(int i = 0; i<s.size()-2; i++){
        if(s[i]=='A' && s[i+1]=='B' && s[i+2] == 'C'){
            res++;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    cout<<solve(s)<<endl;
    return 0;
}