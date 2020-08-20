#include <iostream>

using namespace std;

void cantidad(float *pA, int n);

int main(int argc, char** argv) {
	
	cout<<"************"<<endl;
	cout<<"*Bienvenido*"<<endl;
	cout<<"************"<<endl;
	cout<<endl;
	
	int n;
	cout<<"Por favor ingrese el numero de piezas a procesar: ";
	cin>>n;
	cout<<endl;
	
	float A[n];
	
	for(int i=0; i<n; i++)
	{
		cout<<"Longitud de la pieza "<<i+1<<": ";
		cin>>A[i];
	}cout<<endl;
	
	cantidad(&A[0], n);
	
	return 0;
}

void cantidad(float *pA, int n)
{
	int cont=0;
	for(int i=0; i<n; i++)
	{
		if(pA[i]>=1.2 & pA[i]<=1.3)
		{
			cont++;
		}
	}
	cout<<"La cantidad de piezas aptas es de: "<<cont<<" piezas."<<endl;
}
