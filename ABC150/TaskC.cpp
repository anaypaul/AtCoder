#include<iostream>
#include<vector>
#include<unordered_map>
#include<algorithm>
using namespace std;
string encode(vector<int> v){
    string res = "";
    for(int i = 0; i<v.size(); i++){
        res += to_string(v[i]) + "#";
    }
    return res;
}
void permute(int curr, vector<int>& v, vector<vector<int> >& res){
    if(curr == v.size()){
        res.push_back(v);
        return;
    }
    for(int i= curr; i<v.size(); i++ ){
        swap(v[i], v[curr]);
        permute(curr + 1, v, res);
        swap(v[i], v[curr]);
    }
}
int main(){
    int n;
    cin>>n;
    vector<int> v1(n);
    for(int i = 0; i<n; i++){
        cin>>v1[i];
    }
    string s1 = encode(v1);
    vector<int> v2(n);
    for(int i = 0; i<n; i++){
        cin>>v2[i];
    }
    string s2 = encode(v2);

    vector<int> v;
    for(int i= 1; i<=n; i++){
       v.push_back(i); 
    }
    unordered_map<string , int> m;
    vector<vector<int> > res;
    int num = 1;
    permute(0, v, res);
    sort(res.begin(), res.end());
    for(int i = 0; i<res.size(); i++){
        string x = encode(res[i]);
        m[x] = i+1;
    }
    cout<<abs(m[s1]- m[s2])<<endl;
    return 0;
}