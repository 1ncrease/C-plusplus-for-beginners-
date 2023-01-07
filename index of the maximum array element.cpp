#include <iostream>
#include <vector>
using namespace std;
int main(){
	int n; cin >> n;
	vector<int> v;
	int max = -1e9;
	int position = 0;
	for (int i = 0 ; i < n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	
	for (int i = 0; i < n; i++){
		if (v[i] > max){
			max = v[i];
			position = i + 1;
		}
	}
	
	cout << position;
}
