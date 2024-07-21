#include<iostream>
using namespace std;

int main(){
	int n,m,s,mayor=0,g,c;
	cout<<"Ingrese la cantidad de partidos politicos que participan: ";cin>>n;
	cout<<"Ingrese la cantidad de ciudades donde se desarrollan las votaciones:";cin>>m;
	int part[n][m];
	for(int i=0;i<n;i++){
		s=0;
		cout<<"INGRESE LA CANTIDAD DE VOTOS DEL PARTIDO "<<i+1<<" POR CADA CIUDAD:\n";
		for(int j=0;j<m;j++){
			cout<<"CIUDAD "<<j+1<<": ";cin>>part[i][j];
			s+=part[i][j];
		}
		if(s>mayor){
			mayor=s;
			g=i;
		}

		cout<<endl;
	}
	cout<<"EL PARTIDO QUE GANA LA ELECCION A NIVEL NACIONAL ES: EL PARTIDO "<<g+1<<endl;
	cout<<"CIUDAD DONDE TUVO MAYOR VOTACION EL PARTIDO GANADOR:\n";
	for(int j=0;j<m;j++){
		for(int e=0;e<m;e++){
		if(part[g+1][j]>=part[g+1][e])
			s++;
		}
		if(s==m){
			c=j;
			s=0;
		}else
			s=0;
	}
	cout<<"Ciudad "<<c<<endl;
	
	cout<<"EL PARTIDO GANADOR POR CADA CIUDAD: \n";
	for(int j=0;j<m;j++){
		cout<<"El partido que gano en la ciudad "<<j+1<<": Partido ";
		for(int i=0;i<n;i++){
			for(int e=0;e<n;e++){
				if(part[i][j]>=part[e][j]){
					s++;
				}
			}
				if(s==n){
					g=i;
					s=0;
				}else
					s=0;
		}
		cout<<g+1<<endl;
	}
	
	return 0;
}