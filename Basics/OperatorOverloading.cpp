#include<bits/stdc++.h>
using namespace std;

struct Vector{
	int x,y;
	Vector(){x=y=0;}
	Vector(int x, int y):x(x),y(y){}
	void print(){
		cout<< x <<' '<< y <<'\n';
	}
	Vector operator + (const Vector &v) const{
		return Vector(x + v.x , y + v.y);
	}
};

int32_t main(){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	Vector v1(3,4);
	Vector v2(5,6);
	Vector sum =  v1+v2;

	sum.print();
	
	return 0;
}