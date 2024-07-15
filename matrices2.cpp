#include<iostream>
using namespace std;
int main(){
	int n,matriz[50][50],s=0,a=0;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	for(int i=0;i<n;i++){
			s+=matriz[i][n-i-1];
	}
	cout<<s;
	
	return 0;
}