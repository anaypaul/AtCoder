#include<iostream>
#include<vector>
#include<algorithm>
#include<stdint.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	vector<int> v;
	for(int i =0;i<n;i++){
		int x;
		cin>>x;
		v.push_back(x);
	}
	int result = INT_MAX;
	int cost_p = 0;
	int cost_pp = abs(v[1]-v[0]);
	result = cost_pp;
	for(int i = 2;i<n;i++){
		result = min(cost_p + abs(v[i]-v[i-2]) , cost_pp + abs(v[i]-v[i-1]));
		cost_p = cost_pp;
		cost_pp = result;
	}
	cout<<result;
	return 0;
}