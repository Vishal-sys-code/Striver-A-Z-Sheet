#include <bits/stdc++.h>
using namespace std;

string compareIfElse(int a, int b) {
	// Write your code here
	string ans = " ";
	if(a > b){
		ans = "greater";
	}
	else if(a < b){
		ans = "smaller";
	}
	else{
		ans = "equal";
	}
	return ans;
}

int main(){
    int a,b; cin>>a>>b;
    string ans = compareIfElse(a,b);
    cout << ans << endl;
    return 0;
}