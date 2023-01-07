// find the largest number in an array
// I will show two methods

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n; cin >> n;
	vector<int> v;
	for (int i = 0; i < n; i++){
		int x; cin >> x;
		v.push_back(x);
	}
	
	
	//first method, it only works with the library <algorithm>
	sort(v.begin(), v.end());
	cout << "Max in array with algorithm library " << v[n - 1] << "\n";
	
	
	//the second method is the most common
	int max = -1e9;
	for (int i = 0; i < n; i++){
		if (max < v[i]){
			max = v[i];
		}
	}
	cout << "The largest element of an array in the usual way " << max;
}

