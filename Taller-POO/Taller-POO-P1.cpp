#include <iostream>

using namespace std;

class Rectangulo{
	
	private:
		float base, altura;
	
	public:    //metodos  = funciones
		Rectangulo(float _base, float _altura);    //constructor
		
		//métodos de área y perímetro
		void perimetro();
		void area();

};

Rectangulo::Rectangulo(float _base, float _altura)
{
	
	base=_base;
	altura=_altura;
	
}

void Rectangulo::perimetro()
{
	int perimetro=(base*2)+(altura*2);
	cout<<"El perimetro es: "<<perimetro<<endl;
	cout<<endl;
}

void Rectangulo::area()
{
    
	int area=base*altura;
	cout<<"El area es: "<<area<<endl;
	cout<<endl;
}

int main(int argc, char** argv) {
	
	float base, altura;
	
	cout<<"Por favor ingrese la medida de la base de su rectangulo: ";
	cin>>base;
	cout<<endl;
	
	cout<<"Por favor ingrese la medida de la altura de su rectangulo: ";
	cin>>altura;
	cout<<endl;
	
	Rectangulo R1=Rectangulo(base,altura);
	R1.area();
	R1.perimetro();
	
	return 0;
}
