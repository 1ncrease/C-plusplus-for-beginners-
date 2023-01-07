#include <iostream>
#include <string>
using namespace std;

int main(){
    string s; cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size(); i++){
        if(s[i] == s[s.size() - 1 - i]){
            cnt++;
        }
    }

    if (cnt == s.size()){
        cout << "Yes";
    }
    else {
        cout << "No";
    }
}

