/*
figura.cpp
Crear la clase padre Figura y las clases hijas, Círculo, Rectángulo y Triángulo. 
Se pide implementar el diagrama de clases con los constructores y funciones miembro 
necesarios para cada clase e implementar un programa.

*/
#include <iostream>
#include <cmath>
using namespace std;
const float pi = M_PI;


class Figura{
	private:
		string color;
	public:
		Figura(string _color){
			color = _color;
			cout << "El color de la figura es " <<color<<endl;
		}
}; 
class Circulo:public Figura{
	private:
		float radio;
	public:
		Circulo(string _color,float _radio): Figura(_color){
			radio = _radio;
		}
		void calcularArea(){
			float area = pi*radio*radio;
			cout << "El area del circulo es "<<area<<endl;
		}	
		void calcularPerimetro(){
			float perimetro = 2*pi*radio;
			cout << "El perimetro del circulo es "<<perimetro<<endl;
		}
};

class Rectangulo:public Figura{
	private:
		float base;
		float altura;
	public:
		Rectangulo(string _color, float _base, float _altura): Figura(_color){
			base = _base;
			altura = _altura;
		}
		void calcularArea(){
			float area = base*altura; 
			cout << "El area del rectanculo es "<<area<<endl;
		} 	
};

class Triangulo:public Figura{
	private:
		float base;
		float altura;
		string tipo;
	public:
		Triangulo(string _color, float _base , float _altura, string _tipo): Figura(_color){
			base = _base;
			altura = _altura;
			tipo = _tipo;			
		}
		void calcularArea(){
			float area = (base*altura)/2;
			cout << "El triangulo es de tipo "<<tipo<<endl;
			cout << "El area del triangulo es "<<area<<endl;
		}
};

int main(){
	Figura f1("azul");
	Circulo c1("rojo",5);
	c1.calcularArea();
	c1.calcularPerimetro();
	Rectangulo r1("amarillo",4,2);
	r1.calcularArea();
	Triangulo t1("verde",6,3,"isósceles");
	t1.calcularArea();
	return 0;
}