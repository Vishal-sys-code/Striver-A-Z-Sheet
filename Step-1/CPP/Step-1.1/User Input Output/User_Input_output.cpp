#include <bits/stdc++.h>
#include <cctype>
#include <iostream>
#include <cstring>
using namespace std;

int main() {
	// Write your code here
	char s;
	cin>>s;
    if(isupper(s)){
		cout << 1 << endl;
	}
	else if(islower(s)){
		cout << 0 << endl;
	}
	else{
		cout << -1 << endl;
	}
	return 0;
}