#include<iostream>
using namespace std;

int main(){
	float n,matriz[7][4],total[4],s=0;
	for(int j=0;j<4;j++){
		cout<<"INGRESE LAS VENTAS DE LA SEMANA "<<j+1<<" :\n";
		cout<<"LUNES:";cin>>matriz[0][j];
		cout<<"MARTES:";cin>>matriz[1][j];
		cout<<"MIERCOLES:";cin>>matriz[2][j];
		cout<<"JUEVES:";cin>>matriz[3][j];
		cout<<"VIERNES:";cin>>matriz[4][j];
		cout<<"SABADO:";cin>>matriz[5][j]; 
		matriz[6][j]=0;
		total[j]=matriz[0][j]+matriz[1][j]+matriz[2][j]+matriz[3][j]+matriz[4][j]+matriz[5][j];
	}
	
	cout<<"\nVentas de cuatro semanas\n";
	cout<<"------------------------------------\n";
	cout<<"	 SEM1 	 SEM2	 SEM3	 SEM4\n";
	for(int i=0;i<7;i++){
		if(i==0){
			cout<<"(L)";
		}else if(i==1){
			cout<<"(M)";
		}else if(i==2){
			cout<<"(M)";
		}else if(i==3){
			cout<<"(J)";
		}else if(i==4){
			cout<<"(V)";
		}else if(i==5){
			cout<<"(S)";
		}else if(i==6){
			cout<<"(D)";
		}
		for(int j=0;j<4;j++){
			cout<<"\t"<<matriz[i][j];
		}
		cout<<endl;
	}
	cout<<"------------------------------------\n";
	for(int i=0;i<4;i++){
		cout<<"\t"<<total[i];
		s+=total[i];
	}
	cout<<"\n\nVenta total del mes: "<<s<<endl;
	
	return 0;
}