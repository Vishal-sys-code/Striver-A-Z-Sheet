#include <bits/stdc++.h>
using namespace std;

int datatypes(string type){
    if (type == "int") return 4;
    else if (type == "Long") return 8;
    else if (type == "Float") return 4;
    else if (type == "Double") return 8;
    else if (type == "Character") return 1;
    else return -1;
}

int main(){
    string type;
    cin>>type;
    int ans = datatypes(type);
    cout << ans << endl;
    return 0;
}
