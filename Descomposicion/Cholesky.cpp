#include <iostream>
#include <math.h>

using namespace std;

void llenar(float *pA, int n);
void imprimir(float *pA, int n);
void simetrica(float *pA, int n, int &sim);
void cholesky(float *pA, float *pL, int n, int sim);
void traspuesta(float *pL, int n, int sim);

int main(int argc, char** argv) {
	
	int n, sim=0;
	
	cout<<"Descomposicion Cholesky de matrices."<<endl;
	cout<<"Ingrese el numero de filas y columnas para su matriz: ";
	cin>>n;
	
	float A[n][n];
	float L[n][n];
	
	llenar(&A[0][0],n);
	imprimir(&A[0][0],n);
	simetrica(&A[0][0],n,sim);
	cholesky(&A[0][0],&L[0][0],n,sim);
	traspuesta(&L[0][0],n,sim);
	return 0;
}

void llenar(float *pA, int n)
{	
	for (int i=0;i<n;i++)
	{
		cout<<"Fila "<<i+1<<"."<<endl;
		for (int j=0;j<n;j++)
		{
			cout<<"Por favor ingrese el coeficiente ["<<i+1<<"]["<<j+1<<"]: ";
			cin>>pA[i*n+j];
		}cout<<endl;
	}
}

void imprimir(float *pA, int n)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout<<pA[i*n+j]<<"  ";
		}cout<<endl;
	}
	cout<<endl;
}

void simetrica(float *pA, int n, int &sim)
{
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if(pA[i*n+j]==pA[j*n+i])
			{
				sim++;
			}
		}
	}
	if(sim==n*n)
	{
		cout<<"La matriz es simetrica."<<endl;
		cout<<endl;
	} else{
		cout<<"La matriz no es simetrica, por favor ingrese otra matriz."<<endl;
	}
}

void cholesky(float *pA, float *pL, int n, int sim)
{
	float sum;
	
	if(sim==n*n)
	{
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				sum=0;
				if(i==j)
				{
					for(int k=0;k<j;k++)
					{
						sum+=pow(pL[j*n+k],2);
					}
					pL[i*n+j]=sqrt(pA[i*n+j]-sum);
				}
				if(j<i)
				{
					for(int k=0;k<j;k++)
					{
						sum+=pL[j*n+k]*pL[i*n+k];
					}
					pL[i*n+j]=(1/pL[j*n+j])*(pA[j*n+i]-sum);
				}
				if(j>i)
				{
					pL[i*n+j]=0;
				}
			}
		}
	}
	cout<<"La matriz L es:"<<endl;
	imprimir(&pL[0],n);
}

void traspuesta(float *pL, int n, int sim)
{
	if(sim==n*n)
	{
		cout<<"La matriz traspuesta es:"<<endl;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				cout<<pL[j*n+i]<<"  ";
			}cout<<endl;
		}
	}
}
