#include <iostream>
using namespace std;

int main(){
	int n, m; cin >> n >> m;
	int a[n][m];
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			cin >> a[i][j];
		}
	}
	
	
	//replacement of elements of the main diagonal
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (i == j){
				a[i][j] = 0;
			}
		}
	}
	
	
	//replacement of secondary diagonal elements
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++){
			if (i + j == n - 1){
				a[i][j] = 0; 
			}
			cout << a[i][j] << " ";
		}
		cout << endl;
	}
}
