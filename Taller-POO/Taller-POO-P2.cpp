#include <iostream>
#include <string.h>

using namespace std;

class Serie{
	
	private:
		int temporadas, anio;
		string titulo, fecha, estado, genero;
	
	public:
		//constructores
		Serie(string _fecha, int _anio);
		Serie(string _estado);
		Serie(string _titulo, string _genero, int temporadas);
		
		//método de tabla
		void tabla1();
		void tabla2();
		void tabla3();

};

Serie::Serie(string _fecha, int _anio)
{
	
	fecha=_fecha;
	anio=_anio;
	
}

Serie::Serie(string _estado)
{
	
	estado=_estado;
	
}

Serie::Serie(string _titulo, string _genero, int _temporadas)
{
	
	titulo=_titulo;
	temporadas=_temporadas;
	genero=_genero;
	
}

void Serie::tabla1()
{
	cout<<"************************************"<<endl;
	cout<<"Titulo:     "<<titulo<<endl;
	cout<<"************************************"<<endl;
	cout<<"Genero:     "<<genero<<endl;
	cout<<"************************************"<<endl;
	cout<<"Temporadas: "<<temporadas<<endl;
	cout<<"************************************"<<endl;
}

void Serie::tabla2()
{
	cout<<"Fecha:      "<<fecha<<endl;
	cout<<"************************************"<<endl;
	cout<<"Anio:       "<<anio<<endl;
	cout<<"************************************"<<endl;
}

void Serie::tabla3()
{
	cout<<"Estado:     "<<estado<<endl;
	cout<<"************************************"<<endl;
}

int main(int argc, char** argv) {
	
	int temporadas, anio;
	string titulo, estado, genero, fecha;
	
	cout<<"A continuacion ingrese los datos de la serie; en vez de espacio, use guión al piso."<<endl;
	cout<<endl;
	cout<<"Titulo: ";
	cin>>titulo;
	cout<<"Genero: ";
	cin>>genero;
	cout<<"Numero de temporadas: ";
	cin>>temporadas;
	cout<<"Fecha: ";
	cin>>fecha;
	cout<<"Anio: ";
	cin>>anio;
	cout<<"Estado: ";
	cin>>estado;
	cout<<endl;
	
	Serie S1=Serie(titulo, genero, temporadas);
	Serie S2=Serie(fecha, anio);
	Serie S3=Serie(estado);
	
	S1.tabla1();
	S2.tabla2();
	S3.tabla3();
	
	return 0;
}
