#include <iostream>
#include <string.h>

using namespace std;

class Cliente{
	
	private:
		string nombre, cedula, celular;;
		
	public:
		Cliente(string _nombre, string _cedula, string _celular);
		void mostrarCliente();
		void setNombre(string _nombre);
		void setCedula(string _cedula);
		void setCelular(string _celular);
		~Cliente();
	
};

Cliente::Cliente(string _nombre, string _cedula, string _celular)
{
	nombre=_nombre;
	cedula=_cedula;
	celular=_celular;
}

void Cliente::mostrarCliente()
{
	cout<<"Nombre: "<<nombre<<endl;
	cout<<"Cedula: "<<cedula<<endl;
	cout<<"Celular: "<<celular<<endl;
	cout<<endl;
}

void Cliente::setNombre(string _nombre)
{
	nombre=_nombre;
}

void Cliente::setCedula(string _cedula)
{
	cedula=_cedula;
}

void Cliente::setCelular(string _celular)
{
	celular=_celular;
}

Cliente::~Cliente(){
}

int main(int argc, char** argv) {
	
	string nombre1 = "Rodolfo";
	string cedula1 = "48329472";
	string celular1 = "3148735572";
	Cliente cliente1 = Cliente(nombre1,cedula1,celular1);
	
	string nombre2 = "Daniela";
	string cedula2 = "1003754937";
	string celular2 = "3108521344";
	Cliente cliente2 = Cliente(nombre2,cedula2,celular2);
	
	string nombre3, cedula3, celular3;
	cout<<"*BIENVENIDO*"<<endl;
	cout<<"Por favor ingrese el nombre del cliente: ";
	cin>>nombre3;
	cout<<"Por favor ingrese la cedula del cliente: ";
	cin>>cedula3;
	cout<<"Por favor ingrese el numero de celular del cliente: ";
	cin>>celular3;
	Cliente cliente3 = Cliente(nombre3,cedula3,celular3);
	cout<<"*Cliente guardado en el espacio numero 3*"<<endl;
	cout<<endl;
	
	int bucle=1;
	int menu, seleccionar, editar, borrar;
	
	while(bucle==1){
		
		cout<<"¿Que desea hacer a continuacion?"<<endl;
		cout<<endl;
		cout<<"Presione 1 para seleccionar un cliente."<<endl;
		cout<<"Presione 2 para editar un cliente."<<endl;
		cout<<"Presione 3 para borrar un cliente."<<endl;
		cout<<"Presione 4 para salir."<<endl;
		cin>>menu;
		cout<<endl;
		
		switch(menu)
		{
			case 1:{
				cout<<"Ingrese la ranura del cliente que quiere visualizar: ";
				cin>>seleccionar;
				cout<<endl;
				switch(seleccionar)
				{
					case 1:{
						cout<<"Ranura de cliente 1:"<<endl;
						cout<<endl;
						cliente1.mostrarCliente();
						break;
					}
					case 2:{
						cout<<"Ranura de cliente 2:"<<endl;
						cout<<endl;
						cliente2.mostrarCliente();
						break;
					}
					case 3:{
						cout<<"Ranura de cliente 3:"<<endl;
						cout<<endl;
						cliente3.mostrarCliente();
						break;
					}
				}
				break;
			}
			case 2:{
				cout<<"Ingrese la ranura del cliente que quiere editar: ";
				cin>>editar;
				cout<<endl;
				switch(editar)
				{
					case 1:{
						cout<<"Ingrese el nuevo nombre del cliente 1: ";
						cin>>nombre1;
						cliente1.setNombre(nombre1);
						cout<<"Ingrese la nueva cedula del cliente 1: ";
						cin>>cedula1;
						cliente1.setCedula(cedula1);
						cout<<"Ingrese el nuevo celular del cliente 1: ";
						cin>>celular1;
						cliente1.setCelular(celular1);
						cout<<endl;
						cout<<"Nuevo cliente 1:"<<endl;
						cout<<endl;
						cliente1.mostrarCliente();
						break;
					}
					case 2:{
						cout<<"Ingrese el nuevo nombre del cliente 2: ";
						cin>>nombre2;
						cliente2.setNombre(nombre2);
						cout<<"Ingrese la nueva cedula del cliente 2: ";
						cin>>cedula2;
						cliente2.setCedula(cedula2);
						cout<<"Ingrese el nuevo celular del cliente 2: ";
						cin>>celular2;
						cliente2.setCelular(celular2);
						cout<<endl;
						cout<<"Nuevo cliente 2:"<<endl;
						cout<<endl;
						cliente2.mostrarCliente();
						break;
					}
					case 3:{
						cout<<"Ingrese el nuevo nombre del cliente 3: ";
						cin>>nombre3;
						cliente3.setNombre(nombre3);
						cout<<"Ingrese la nueva cedula del cliente 3: ";
						cin>>cedula3;
						cliente3.setCedula(cedula3);
						cout<<"Ingrese el nuevo celular del cliente 3: ";
						cin>>celular3;
						cliente3.setCelular(celular3);
						cout<<endl;
						cout<<"Nuevo cliente 3:"<<endl;
						cout<<endl;
						cliente3.mostrarCliente();
						break;
					}
				}
				break;
			}
			case 3:{
				cout<<"Ingrese la ranura del cliente que quiere borrar: ";
				cin>>borrar;
				cout<<endl;
				switch(borrar)
				{
					case 1:{
						cliente1.~Cliente();
						cout<<"*Cliente borrado con exito*"<<endl;
						cout<<endl;
						break;
					}
					case 2:{
						cliente2.~Cliente();
						cout<<"*Cliente borrado con exito*"<<endl;
						cout<<endl;
						break;
					}
					case 3:{
						cliente3.~Cliente();
						cout<<"*Cliente borrado con exito*"<<endl;
						cout<<endl;
						break;
					}
				}
				break;
			}
			case 4:{
				bucle=0;
				break;
			}
		}	
	}
	cout<<"**SALIR**";
	
	
	return 0;
}
