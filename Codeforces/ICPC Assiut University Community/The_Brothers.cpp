#include<iostream>
#include<cstring>
using namespace std;

int main(){

char f1[1000],f2[1000];
char s1[1000],s2[1000];
cin>>f1>>f2>>s1>>s2;
int len1 =  strlen(f2);
int len2 =  strlen(s2);

bool is_equal = true;
if(len1 != len2){
    is_equal = false;
}
else{
    for(int i=0; i< len1; i++){
        if(f2[i]!=s2[i]){
            is_equal= false;
        }
    }
}

if(is_equal){
    cout<< "ARE Brothers";
}
else cout<<"NOT";


return 0;
}
