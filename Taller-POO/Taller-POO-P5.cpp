#include <iostream>
#include <string.h>

using namespace std;

class Electrodomesticos{
	
	private:
		string tienda, vendedor, color,peso, ancho, altura;
		int precio, consumo;
		
	public:
		//Electrodomesticos(string _tienda, string _vendedor, string _color, int _precio, int _peso, int _altura, int _ancho, int _consumo);
		Electrodomesticos(string _tienda, string _vendedor, int _precio, string _color, string _altura, string _ancho);
		Electrodomesticos(string _tienda, string _vendedor, int _precio, int _consumo);
		Electrodomesticos(string _tienda, string _vendedor, string _color, int _precio, string _peso, string _altura, string _ancho, int _consumo);
		Electrodomesticos(string _tienda, string _vendedor, int _precio);
	    void mostrarElectrodomesticos();
	    void mostrarElectrodomesticos1();
	    void mostrarElectrodomesticos2();
	    void mostrarElectrodomesticos3();
		void settienda(string _tienda);
		string gettienda();
		
		void setvendedor(string _vendedor);
		string getvendedor();
		
		void setcolor(string _color);
		string getcolor();
		
		void setprecio(int _precio);
		int getprecio();
		
		void setpeso(string _peso);
		string getpeso();
		
		void setaltura(string _altura);
		string getaltura();
		
		void setancho(string _ancho);
		string getancho();
		
		void setconsumo(int _consumo);
		int getconsumo();
		~Electrodomesticos();
	
};
Electrodomesticos::Electrodomesticos(string _tienda, string _vendedor, int _precio, string _color, string _altura, string _ancho)
{
	tienda= _tienda;
	vendedor=_vendedor;
	precio=_precio;
	color=_color;
	altura=_altura;
	ancho=_ancho;
}

Electrodomesticos::Electrodomesticos(string _tienda, string _vendedor, int _precio, int _consumo)
{
	tienda=_tienda;
	vendedor=_vendedor;
	precio=_precio;
	consumo=_consumo;
}

Electrodomesticos::Electrodomesticos(string _tienda, string _vendedor, string _color, int _precio, string _peso, string _altura, string _ancho, int _consumo)
{
	tienda=_tienda;
	vendedor=_vendedor;
	color=_color;
	precio=_precio;
	peso=_peso;
	altura=_altura;
	ancho=_ancho;
	consumo=_consumo; 
}

Electrodomesticos::Electrodomesticos(string _tienda,string _vendedor, int _precio)
{
	tienda=_tienda;
	vendedor=_vendedor;
	precio=_precio;
}

void Electrodomesticos::mostrarElectrodomesticos()
{
	cout<<"Tienda: "<<tienda<<endl;
	cout<<"Nombre del vendedor: "<<vendedor<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Altura: "<<altura<<endl;
	cout<<"Ancho: "<<ancho<<endl;
	cout<<endl;
}
void Electrodomesticos::mostrarElectrodomesticos1()
{
	cout<<"Tienda: "<<tienda<<endl;
	cout<<"Nombre del vendedor: "<<vendedor<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Consumo: "<<consumo<<endl;
	cout<<endl;
}
void Electrodomesticos::mostrarElectrodomesticos2()
{
	cout<<"Tienda: "<<tienda<<endl;
	cout<<"Nombre del vendedor: "<<vendedor<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<"Color: "<<color<<endl;
	cout<<"Peso: "<<peso<<endl;
	cout<<"Altura: "<<altura<<endl;
	cout<<"Ancho: "<<ancho<<endl;
	cout<<"Consumo: "<<consumo<<endl;
	cout<<endl;
}
void Electrodomesticos::mostrarElectrodomesticos3()
{
	cout<<"Tienda: "<<tienda<<endl;
	cout<<"Nombre del vendedor: "<<vendedor<<endl;
	cout<<"Precio: "<<precio<<endl;
	cout<<endl;
}



void Electrodomesticos::settienda(string _tienda)
{
	tienda=_tienda;
}

string Electrodomesticos::gettienda(){
	return tienda;
}

void Electrodomesticos::setvendedor(string _vendedor)
{
	vendedor=_vendedor;
}

string Electrodomesticos::getvendedor(){
	return vendedor;
}
void Electrodomesticos::setcolor(string _color)
{
	color=_color;
}

string Electrodomesticos::getcolor(){
	return color;
}

void Electrodomesticos::setpeso(string _peso)
{
	peso=_peso;
}

string Electrodomesticos::getpeso(){
	return peso;
} 

void Electrodomesticos::setprecio(int _precio)
{
	precio=_precio;
}

int Electrodomesticos::getprecio(){
	return precio;
}

void Electrodomesticos::setaltura(string _altura)
{
	altura=_altura;
}
string Electrodomesticos::getaltura(){
	return altura;
}

void Electrodomesticos::setancho(string _ancho)
{
	ancho=_ancho;
}

string Electrodomesticos::getancho(){
	return ancho;
}

void Electrodomesticos::setconsumo(int _consumo)
{
	consumo=_consumo;
}

int Electrodomesticos::getconsumo(){
	return consumo;
} 
Electrodomesticos::~Electrodomesticos(){
}
int main(int argc, char** argv) {
	
	string tienda, vendedor, color,peso,altura,ancho;
	int precio,consumo,a, editar, producto, p1, p2, p3, p4;
	int bucle=1;
	
	Electrodomesticos producto1= Electrodomesticos(tienda, vendedor, precio, color, altura, ancho);
	Electrodomesticos producto2= Electrodomesticos(tienda, vendedor, precio, consumo);
	Electrodomesticos producto3= Electrodomesticos(tienda, vendedor, color, precio, peso, altura, ancho, consumo);
	Electrodomesticos producto4= Electrodomesticos(tienda, vendedor, precio);
	
	while(bucle==1)
	{
		cout<<"Seleccione una de las opciones de almacenamiento de datos"<<endl;
		cout<<"1. Tienda, vendedor, precio, color, altura y ancho"<<endl;
		cout<<"2. Tienda, vendedor, precio y consumo energetico"<<endl;
		cout<<"3. Tienda, vendedor, precio, color, peso, altura, ancho y consumo energetico"<<endl;
		cout<<"4. Tienda, vendedor, precio"<<endl;
		cout<<"5. Salir de almacenamiento"<<endl;
		cin>>a;
		cout<<endl;
		
		switch(a)
		{
			case 1:{
				cout<<"Ingrese los datos que se le indican a continuacion"<<endl;
				cout<<"Tienda: ";
				cin>>tienda;
				cout<<"Nombre del vendedor: ";
				cin>>vendedor;
				cout<<"Precio del producto: ";
				cin>>precio;
				cout<<"Color del producto: ";
				cin>>color;
				cout<<"Altura: ";
				cin>>altura;
				cout<<"Ancho: ";
				cin>>ancho;
				producto1.settienda(tienda);
				producto1.setvendedor(vendedor);
				producto1.setprecio(precio);
				producto1.setcolor(color);
				producto1.setaltura(altura);
				producto1.setancho(ancho);
				cout<<endl;
				cout<<"Producto 1:"<<endl;
				producto1.mostrarElectrodomesticos();
				break;
			}
			
			case 2:{
				cout<<"Ingrese los datos que se le indican a continuacion"<<endl;
				cout<<"Tienda: ";
				cin>>tienda;
				cout<<"Nombre del vendedor: ";
				cin>>vendedor;
				cout<<"Precio del producto: ";
				cin>>precio;
				cout<<"Consumo: ";
				cin>>consumo;
				producto2.settienda(tienda);
				producto2.setvendedor(vendedor);
				producto2.setprecio(precio);
				producto2.setconsumo(consumo);
				cout<<endl;
				cout<<"Producto 2:"<<endl;
				producto2.mostrarElectrodomesticos1();
				break;
			}
			
			case 3:{
				cout<<"Ingrese los datos que se le indican a continuacion"<<endl;
				cout<<"Tienda: ";
				cin>>tienda;
				cout<<"Nombre del vendedor: ";
				cin>>vendedor;
				cout<<"Precio del producto: ";
				cin>>precio;
				cout<<"Color del producto: ";
				cin>>color;
				cout<<"Peso del producto: ";
				cin>>peso;
				cout<<"Altura: ";
				cin>>altura;
				cout<<"Ancho: ";
				cin>>ancho;
				cout<<"Consumo: ";
				cin>>consumo;
				producto3.settienda(tienda);
				producto3.setvendedor(vendedor);
				producto3.setprecio(precio);
				producto3.setcolor(color);
				producto3.setpeso(peso);
				producto3.setaltura(altura);
				producto3.setancho(ancho);
				producto3.setconsumo(consumo);
				cout<<endl;
				cout<<"Producto 3:"<<endl;
				producto3.mostrarElectrodomesticos2();
				break;
		}	

			case 4:{
				cout<<"Ingrese los datos que se le indican a continuacion"<<endl;
				cout<<"Tienda: ";
				cin>>tienda;
				cout<<"Nombre del vendedor: ";
				cin>>vendedor;
				cout<<"Precio del producto: ";
				cin>>precio;
				producto4.settienda(tienda);
				producto4.setvendedor(vendedor);
				producto4.setprecio(precio);
				cout<<endl;
				cout<<"Producto 4:"<<endl;
				producto4.mostrarElectrodomesticos3();
				break;
			}
			case 5:{
				bucle=0;
				break;
			}		
		}
	}
	cout<<endl;
	cout<<"¿Desea editar?"<<endl;
	cout<<"1. Si"<<endl;
	cout<<"2. No"<<endl;
	cin>>editar;
	cout<<endl;
	while(editar==1)
	{
		cout<<"Elija el producto que desea editar:"<<endl;
		cout<<"Producto 1."<<endl;
		cout<<"Producto 2."<<endl;
		cout<<"Producto 3."<<endl;
		cout<<"Producto 4."<<endl;
		cout<<"5 para dejar de editar."<<endl;
		cin>>producto;
		cout<<endl;
		switch(producto)
		{
			case 1:{
				cout<<"¿Que desea editar del producto 1?"<<endl;
				cout<<"1. Tienda."<<endl;
				cout<<"2. Vendedor."<<endl;
				cout<<"3. Precio."<<endl;
				cout<<"4. Color."<<endl;
				cout<<"5. Altura."<<endl;
				cout<<"6. Ancho."<<endl;
				cin>>p1;
				switch(p1)
				{
					case 1:{
						cout<<"Ingrese la nueva tienda: ";
						cin>>tienda;
						producto1.settienda(tienda);
						producto1.mostrarElectrodomesticos();
						break;
					}
					case 2:{
						cout<<"Ingrese el nuevo vendedor: ";
						cin>>vendedor;
						producto1.setvendedor(vendedor);
						producto1.mostrarElectrodomesticos();
						break;
					}
					case 3:{
						cout<<"Ingrese el nuevo precio: ";
						cin>>precio;
						producto1.setprecio(precio);
						producto1.mostrarElectrodomesticos();
						break;
					}
					case 4:{
						cout<<"Ingrese el nuevo color: ";
						cin>>color;
						producto1.setcolor(color);
						producto1.mostrarElectrodomesticos();
						break;
					}
					case 5:{
						cout<<"Ingrese la nueva altura: ";
						cin>>tienda;
						producto1.setaltura(altura);
						producto1.mostrarElectrodomesticos();
						break;
					}
					case 6:{
						cout<<"Ingrese el nuevo ancho: ";
						cin>>tienda;
						producto1.setancho(ancho);
						producto1.mostrarElectrodomesticos();
						break;
					}
				}
				break;
			}
			
			case 2:{
				cout<<"¿Que desea editar del producto 2?"<<endl;
				cout<<"1. Tienda."<<endl;
				cout<<"2. Vendedor."<<endl;
				cout<<"3. Precio."<<endl;
				cout<<"4. Consumo."<<endl;
				cin>>p2;
				switch(p2)
				{
					case 1:{
						cout<<"Ingrese la nueva tienda: ";
						cin>>tienda;
						producto2.settienda(tienda);
						producto2.mostrarElectrodomesticos1();
						break;
					}
					case 2:{
						cout<<"Ingrese el nuevo vendedor: ";
						cin>>vendedor;
						producto2.setvendedor(vendedor);
						producto2.mostrarElectrodomesticos1();
						break;
					}
					case 3:{
						cout<<"Ingrese el nuevo precio: ";
						cin>>precio;
						producto2.setprecio(precio);
						producto2.mostrarElectrodomesticos1();
						break;
					}
					case 4:{
						cout<<"Ingrese el nuevo consumo: ";
						cin>>consumo;
						producto2.setconsumo(consumo);
						producto2.mostrarElectrodomesticos1();
						break;
					}
				}
				break;
			}
			
			case 3:{
				cout<<"¿Que desea editar del producto 3?"<<endl;
				cout<<"1. Tienda."<<endl;
				cout<<"2. Vendedor."<<endl;
				cout<<"3. Precio."<<endl;
				cout<<"4. Color."<<endl;
				cout<<"5. Altura."<<endl;
				cout<<"6. Ancho."<<endl;
				cout<<"7. Peso."<<endl;
				cout<<"8. Consumo."<<endl;
				cin>>p3;
				switch(p3)
				{
					case 1:{
						cout<<"Ingrese la nueva tienda: ";
						cin>>tienda;
						producto3.settienda(tienda);
						producto3.mostrarElectrodomesticos2();
						break;
					}
					case 2:{
						cout<<"Ingrese el nuevo vendedor: ";
						cin>>vendedor;
						producto3.setvendedor(vendedor);
						producto3.mostrarElectrodomesticos2();
						break;
					}
					case 3:{
						cout<<"Ingrese el nuevo precio: ";
						cin>>precio;
						producto3.setprecio(precio);
						producto3.mostrarElectrodomesticos2();
						break;
					}
					case 4:{
						cout<<"Ingrese el nuevo color: ";
						cin>>color;
						producto3.setcolor(color);
						producto3.mostrarElectrodomesticos2();
						break;
					}
					case 5:{
						cout<<"Ingrese la nueva altura: ";
						cin>>tienda;
						producto3.setaltura(altura);
						producto3.mostrarElectrodomesticos2();
						break;
					}
					case 6:{
						cout<<"Ingrese el nuevo ancho: ";
						cin>>tienda;
						producto3.setancho(ancho);
						producto3.mostrarElectrodomesticos2();
						break;
					}
					case 7:{
						cout<<"Ingrese el nuevo peso: ";
						cin>>peso;
						producto3.setpeso(peso);
						producto3.mostrarElectrodomesticos2();
						break;
					}
					case 8:{
						cout<<"Ingrese el nuevo consumo: ";
						cin>>consumo;
						producto3.setconsumo(consumo);
						producto3.mostrarElectrodomesticos2();
						break;
					}
				}
				break;
			}
			case 4:{
				cout<<"¿Que desea editar del producto 4?"<<endl;
				cout<<"1. Tienda."<<endl;
				cout<<"2. Vendedor."<<endl;
				cout<<"3. Precio."<<endl;
				cin>>p4;
				switch(p4)
				{
					case 1:{
						cout<<"Ingrese la nueva tienda: ";
						cin>>tienda;
						producto4.settienda(tienda);
						producto4.mostrarElectrodomesticos3();
						break;
					}
					case 2:{
						cout<<"Ingrese el nuevo vendedor: ";
						cin>>vendedor;
						producto4.setvendedor(vendedor);
						producto4.mostrarElectrodomesticos3();
						break;
					}
					case 3:{
						cout<<"Ingrese el nuevo precio: ";
						cin>>precio;
						producto4.setprecio(precio);
						producto4.mostrarElectrodomesticos3();
						break;
					}
				break;
			}
		}
		
		case 5:{
			cout<<"Cambios realizados con exito."<<endl;
			editar=2;
			break;
		}
	}
	}
}
