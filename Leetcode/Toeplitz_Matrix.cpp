#include<bits/stdc++.h>
using namespace std;

// class Solution {
// public:
//     bool isToeplitzMatrix(vector<vector<int>>& matrix) {

        
//         for(int i=0; i<matrix.size()-1; i++){

//             for(int j=0; j<matrix[0].size()-1; j++){
//                 if(matrix[i][j] != matrix[i+1][j+1]){
//                     return false;
//                 }
//             }
//         }

//         return true;

//     }
// };

int32_t main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int n; cin>>n;
	vector<vector<int>>a ={{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

	// for (int i=0; i<n; i++){
	// 	for(int j=0; j<n; j++){
	// 		cin>>a[i][j];
	// 	}
	// }

	cout<<a[0].size()-1;

	
	return 0;
}