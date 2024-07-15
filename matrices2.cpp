#include<iostream>
using namespace std;
int main(){
	int n,matriz[50][50],s=0,a=0;
	cout<<"Ingrese el tamaño de la matriz: ";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Ingrese los elementos de la fila "<<i+1<<": \n";
		for(int j=0;j<n;j++){
			cin>>matriz[i][j];
		}
	}
	for(int i=0;i<n;i++){
			s+=matriz[i][n-i-1];
	}
	cout<<"La suma de la diagonal secundaria es: "<<s;
	
	return 0;
}