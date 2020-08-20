#include <iostream>

using namespace std;

void cifras(int n1, int n2, int n3, int n4, int &nc1, int &nc2, int &nc3, int &nc4);
void promedio(int n1, int n2, int n3, int n4, float &prom);

int main(int argc, char** argv) {
	
	cout<<"Este programa muestra el promedio de 4 numeros de hasta 3 cifras y muestra el numero de cifras de cada uno."<<endl;
	
	int n1, n2, n3, n4, nc1, nc2, nc3, nc4, cont=0;
	float prom;
	
	while(cont!=1)
	{
		cout<<"Ingrese el primer numero: ";
		cin>>n1;
		cout<<"Ingrese el segundo numero: ";
		cin>>n2;
		cout<<"Ingrese el tercer numero: ";
		cin>>n3;
		cout<<"Ingrese el cuarto numero: ";
		cin>>n4;
		cout<<endl;
		if(n1>=0 & n1<=999 & n2>=0 & n2<=999 & n3>=0 & n3<=999 & n4>=0 & n4<=999 )
		{
			cont=1;
		}else{
			cout<<"Los numeros ingresados tienen mas de 3 cifras o son negativos, por favor ingreselos de nuevo."<<endl;
		}
	}
	
	cifras(n1, n2, n3, n4, nc1, nc2, nc3, nc4);
	cout<<"El primer numero tiene "<<nc1<<" cifras."<<endl;
	cout<<"El segundo numero tiene "<<nc2<<" cifras."<<endl;
	cout<<"El tercer numero tiene "<<nc3<<" cifras."<<endl;
	cout<<"El cuarto numero tiene "<<nc4<<" cifras."<<endl;
	cout<<endl;
	
	promedio(n1, n2, n3, n4, prom);
	cout<<"El promedio es: "<<prom<<endl;

	return 0;
}

void cifras(int n1, int n2, int n3, int n4, int &nc1, int &nc2, int &nc3, int &nc4)
{
	int A[4];
	int B[4];
	A[0]=n1;
	A[1]=n2;
	A[2]=n3;
	A[3]=n4;
	for(int i=0; i<4; i++)
	{
		if(A[i]<=9)
		{
			B[i]=1;
		}
		if(A[i]>9 & A[i]<=99)
		{
			B[i]=2;
		}
		if(A[i]>99 & A[i]<=999)
		{
			B[i]=3;
		}
	}
	nc1=B[0];
	nc2=B[1];
	nc3=B[2];
	nc4=B[3];
}

void promedio(int n1, int n2, int n3, int n4, float &prom)
{
	prom=(float(n1+n2+n3+n4)/4);
}

