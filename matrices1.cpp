#include<iostream>
using namespace std;

int main(){
	int n,matriz[50][50],s=0;
	
	cout<<"Ingrese tamaño de la matriz: ";cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if((i!=j)&&(i<j)){
				s+=matriz[i][j];
			}
		}
	}
	cout<<s;
	return 0;
}