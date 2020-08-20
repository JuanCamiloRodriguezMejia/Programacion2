#include <iostream>

using namespace std;

void cifras(int *pA, int &nc1, int &nc2, int &nc3, int &nc4);
void promedio(int *pA, float &prom);

int main(int argc, char** argv) {
	
	cout<<"Este programa muestra el promedio de 4 numeros de hasta 3 cifras y muestra el numero de cifras de cada uno."<<endl;
	
	int A[4];
	int nc1, nc2, nc3, nc4, cont=0;
	float prom;
	
	while(cont!=4){
		for(int i=0; i<4; i++)
		{
			cout<<"Ingrese el numero "<<i+1<<": ";
			cin>>A[i];
		}cout<<endl;
		
		for(int i=0; i<4; i++)
		{
			if(A[i]<=999 & A[i]>=0)
			{
				cont++;
			}
		}
		
		if(cont!=4)
		{
			cout<<"Los numeros ingresados tienen mas de 3 cifras o son negativos, por favor ingreselos de nuevo."<<endl;
		}
	}
	
	cifras(&A[0], nc1, nc2, nc3, nc4);
	cout<<"El primer numero tiene "<<nc1<<" cifras."<<endl;
	cout<<"El segundo numero tiene "<<nc2<<" cifras."<<endl;		
	cout<<"El tercer numero tiene "<<nc3<<" cifras."<<endl;
	cout<<"El cuarto numero tiene "<<nc4<<" cifras."<<endl;
		
	promedio(&A[0], prom);
	cout<<"El promedio es: "<<prom<<endl;

	return 0;
}

void cifras(int *pA, int &nc1, int &nc2, int &nc3, int &nc4)
{
	int B[4];
	for(int i=0; i<4; i++)
	{
		if(pA[i]<=9)
		{
			B[i]=1;
		}
		if(pA[i]>9 & pA[i]<=99)
		{
			B[i]=2;
		}
		if(pA[i]>99 & pA[i]<=999)
		{
			B[i]=3;
		}
	}
	nc1=B[0];
	nc2=B[1];
	nc3=B[2];
	nc4=B[3];
}

void promedio(int *pA, float &prom)
{
	float num=0;
	for(int i=0; i<4; i++)
	{
		num+=pA[i];
	}
	prom=(num/4);
}

