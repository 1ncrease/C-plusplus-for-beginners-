#include <iostream>
#include <vector>
using namespace std;

void MaxtoMin(int n){
	vector<int> v;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	int max = -1e9;
	int min = 1e9;
	for (int i = 0; i < n; i++){
		if (v[i] > max){
			max = v[i];
		}
		if (v[i] < min){
			min = v[i];
		}
	}
	
	for (int i = 0; i < n; i++){
		if (v[i] == max){
			cout << min << " ";
		}
		else{
			cout << v[i] << " ";
		}
	}
	
}
int main(){
	int n; cin >> n;
	MaxtoMin(n);
} 
