#include<bits/stdc++.h>
using namespace std;

double dist(int x1, int y1, int x2, int y2 ){
	return sqrt((long long)(x1-x2)*(x1-x2) +(long long) (y1-y2)*(y1-y2));
}

int main(){
	int t; cin>>t;
	while(t--){
		
		int center_x,center_y,radius;
		cin>>center_x>>center_y>>radius;
		int x,y;
		cin>>x>>y;
		double d = dist(center_x,center_y,x,y);

		if(d<=radius){
			cout<<"The point is inside the circle\n";
		}
		else cout<<"The point is not inside the circle\n";
	
	}

	return 0;
}