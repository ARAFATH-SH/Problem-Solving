#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
	
	for(int i=0; i<image.size(); i++){
        reverse(image[i].begin(), image[i].end());
    }

    for(int i=0; i<image.size(); i++){
        for(int j=0; j<image.size(); j++){
            image[i][j] = 1 ^ image[i][j];
        }
    }
    return image;
}
};

int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*

	return 0;
}