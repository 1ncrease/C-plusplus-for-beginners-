#include <iostream>
#include <vector>
#include <math.h>

using namespace std;

void square(int n){
	vector<int> v;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	for (int i = 0; i < n; i++){
		cout << pow(v[i], 2) << " ";
	}
}

int main(){
	int n; cin >> n;
	square(n);
}

