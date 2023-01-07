#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> vec;
	
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		vec.push_back(x);
	}
	
	reverse(vec.begin(), vec.end()); 
	
	for (int i = 0; i < n; i++){
		cout << vec[i] << " ";
	}
}

