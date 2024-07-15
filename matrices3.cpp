#include<iostream>
using namespace std;

int main(){
	int n,matriz[50][150];
	cout<<"Ingrese la filas de la matriz: ";cin>>n;
	for(int j=0;j<3*n;j++){
	matriz[0][j]=1;
	}
	for(int j=0;j<3*n;j++){
	matriz[n-1][j]=1;
	}
	for(int i=2;i<n-1;i++){
		for(int j=0;j<3*n;j++){
	matriz[n-i][j]=0;	
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<3*n;j++){
			cout<<matriz[i][j];
		}
		cout<<endl;
	}
	
	return 0;
}