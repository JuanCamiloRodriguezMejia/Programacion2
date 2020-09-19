#include <iostream>
#include <string.h>

using namespace std;

class Vehiculo{
	
	private:  //Atributos
		string marca, modelo, color, matricula, aireacon;
		int pasajeros, puertas;
		
	public: //Metodos
		Vehiculo(string _marca, string _modelo, string _color, string _matricula, string _aireacon, int _pasajeros, int _puertas);
  	    void mostrarVehiculo();
		void setmarca(string _marca);
	  	string getmarca();
		
		void setmodelo(string _modelo);
		string getmodelo();
		
		void setcolor(string _color);
		string getcolor();
		
		void setmatricula(string _matricula);
		string getmatricula();
		
		void setaireacon(string _aireacon);
		string getaireacon();
		
		void setpasajeros(int _pasajeros);
		int getpasajeros();
		
		void setpuertas(int _puertas);
		int getpuertas();
};
void Vehiculo::mostrarVehiculo(){
	
	cout<<"Marca del vehiculo: "<<marca<<endl;	
	cout<<"Modelo: "<<modelo<<endl;
	cout<<"Color del vehiculo: "<<color<<endl;
	cout<<"Matricula: "<<matricula<<endl;
	cout<<"Aire acondicionado: "<<aireacon<<endl;
	cout<<"Pasajeros: "<<pasajeros<<endl;
	cout<<"Puertas: "<<puertas<<endl;
	
} 
Vehiculo::Vehiculo(string _marca, string _modelo, string _color, string _matricula, string _aireacon, int _pasajeros, int _puertas){
	
	marca=_marca;
	modelo=_modelo;
	color=_color;
    matricula= _matricula;
	aireacon= _aireacon;
	pasajeros= _pasajeros;
	puertas= _puertas; 
}

void Vehiculo::setmarca(string _marca){
	
marca= _marca;
} 
string Vehiculo::getmarca(){
	return marca;
} 
void Vehiculo::setmodelo(string _modelo){
	modelo=_modelo;
}
string Vehiculo::getmodelo(){
	return modelo;
}
void Vehiculo::setcolor(string _color)
{
    color= _color;
}
string Vehiculo::getcolor()
{
	return color;
}
void Vehiculo::setmatricula(string _matricula){
    matricula= _matricula;
}
string Vehiculo::getmatricula(){
    return matricula;
}
void Vehiculo::setaireacon(string _aireacon){
   aireacon= _aireacon;
}
string Vehiculo::getaireacon(){
	return aireacon;
}
void Vehiculo::setpasajeros(int _pasajeros){
	pasajeros= _pasajeros;
}
int Vehiculo::getpasajeros(){
	return pasajeros;
}
void Vehiculo::setpuertas(int _puertas){
    puertas= _puertas;
}
int Vehiculo::getpuertas()
{
	return puertas;
}


int main(int argc, char** argv) {
	
	string modelo,marca, color, matricula, aireacon;
	int a,b, pasajeros, puertas;

	
	cout<<"Ingrese los datos del vehiculo"<<endl;
    cout<<"Marca: ";
    cin>>marca;
    cout<<"Modelo: ";
    cin>>modelo;
    cout<<"Color: ";
    cin>>color;
    cout<<"Matricula: ";
    cin>>matricula;
    cout<<"Aire acondicionado, responda si o no: ";
    cin>>aireacon;
    cout<<"Numero de pasajeros: ";
    cin>>pasajeros;
    cout<<"Numero de puertas: ";
    cin>>puertas;
    cout<<endl;
    cout<<"El vehiculo "<<marca<<" que ingreso: "<<endl;
    
    
    Vehiculo vehiculo1= Vehiculo(marca, modelo, color, matricula, aireacon, pasajeros, puertas);
    vehiculo1.mostrarVehiculo();
    cout<<endl;
    
    cout<<"¿Desea modificar algun elemento?"<<endl;
    cout<<"1. Si"<<endl;
    cout<<"2. No"<<endl;
    cin>>a;
    cout<<endl;
    
    
   while (a==1)
   {
   
    	cout<<"¿Que desea modificar?"<<endl;
    	cout<<"1. Marca"<<endl;
    	cout<<"2. Modelo"<<endl;
    	cout<<"3. Color"<<endl;
    	cout<<"4. Matricula"<<endl;
    	cout<<"5. Aire acondicionado"<<endl;
    	cout<<"6. Pasajeros"<<endl;
    	cout<<"7. Puertas"<<endl;
    	cin>>b;
    	cout<<endl;
    	
    	switch (b)
    	{
    		case 1:
    		cout<<"Realice la modificacion a continuacion"<<endl;
    		cin>>marca;
    		vehiculo1.setmarca(marca);
    		cout<<endl;
    		vehiculo1.mostrarVehiculo();
    		
    		break;
    		
    		case 2:
    			cout<<"Realice la modificacion a continuacion"<<endl;
    			cin>>modelo;
    			vehiculo1.setmodelo(modelo);
    			cout<<endl;
    			vehiculo1.mostrarVehiculo();
    		break;
    		 
    		case 3:
    			cout<<"Realice la modificacion a continuacion"<<endl;
    			cin>>color;
    			vehiculo1.setcolor(color);
    			cout<<endl;
    			vehiculo1.mostrarVehiculo();
    		break;
    		
    		case 4:
    			cout<<"Realice la modificacion a continuacion"<<endl;
    			cin>>modelo;
    			vehiculo1.setmatricula(matricula);
    			cout<<endl;
    			vehiculo1.mostrarVehiculo();
    		break;
    		
    		case 5:
    			cout<<"Realice la modificacion a continuacion"<<endl;
    			cin>>aireacon;
    			vehiculo1.setaireacon(aireacon);
    			cout<<endl;
    			vehiculo1.mostrarVehiculo();
    		break;
    		
    		case 6:
    			cout<<"Realice la modificacion a continuacion"<<endl;
    			cin>>pasajeros;
    			vehiculo1.setpasajeros(pasajeros);
    			cout<<endl;
    			vehiculo1.mostrarVehiculo();
    		break;
    		
    		case 7:
    			cout<<"Realice la modificacion a continuacion"<<endl;
    			cin>>puertas;
    			vehiculo1.setpuertas(puertas);
    			cout<<endl;
    			vehiculo1.mostrarVehiculo();
    		break;
    			
		}
		cout<<endl;
		cout<<"¿Desea seguir modificando?"<<endl;
		cout<<"1. Si"<<endl;
   		cout<<"2. No"<<endl;
   		cin>>a;
	}

	cout<<"Vehiculo registrado con exito."<<endl;

  //  vehiculo1.setmarca(marca);
   // vehiculo1.setmodelo(modelo);
    
   /* cout<<"Color: "<<color<<endl;
    cout<<"Matricula: "<<matricula<<endl;
    cout<<"Tiene aire acondicionado"<<aireacon<<endl;
    cout<<"Cantidad de pasajeros: "<<pasajeros<<endl;
    cout<<"Cantidad de puertas: "<<
	cout<<endl;*/

	
	return 0;
}
