#include<bits/stdc++.h>

using namespace std;

//__builtin_popcount(); 	// count all set bits
//__builtin_popcountll(); 
//ceil = (a+b-1)/b;
int main(){
	/*freopen("modified_input.txt","r",stdin);
	freopen("modified_output.txt","w",stdout);*/
	int n;
	int ax,ay,bx,by,cx,cy,dx,dy,rx,ry;
	cin>>n;
	for(int i=1; i<=n; i++){
		cin>>ax>>ay>>bx>>by>>cx>>cy>>dx>>dy>>rx>>ry;
		if(ay<=ry and by<=ry and cy>=ry and dy>=ry){
			if(ax<=rx and bx>=rx and cx>=rx and dx<=rx){
				cout<<1<<endl;

			}
			else cout<<0<<endl;
		}
		else cout<<0<<endl;
	}
	return 0;
}