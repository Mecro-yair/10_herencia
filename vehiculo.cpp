#include <iostream>

using namespace std;

class vehiculo{
	private:
		string numeroPlaca;
		string color;
		string marca;
		float velocimetro;
	public:
		vehiculo(string _numeroPlaca, string _color, string _marca, float _velocimetro){
			numeroPlaca = _numeroPlaca;
			color = _color;
			marca = _marca;
			velocimetro = _velocimetro;	
		}
		void mostrarDatos(){
			cout <<numeroPlaca<<endl;
			cout <<color<<endl;
			cout <<marca<<endl;
			cout <<velocimetro <<endl;
		}
		void cambiarVelocidad(float velocidad){
			velocimetro = velocidad;
		}
};

class automovil:public vehiculo{
	private:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		automovil(string _numeroPlaca, string _color, string _marca, float _velocimetro,int _cantidadPuertas, int _cantidadPasajeros):vehiculo(_numeroPlaca,_color,_marca,_velocimetro){
			cantidadPuertas=_cantidadPuertas;
			cantidadPasajeros=_cantidadPasajeros;
		}
		
		void mostrarAutomovil(){
			mostrarDatos();
			cout <<cantidadPuertas <<endl;
			cout <<cantidadPasajeros <<endl;
		}
		void subirPasajeros(int nuevosPasajeros){
			cantidadPasajeros+=nuevosPasajeros;
		}
		void bajarPasajeros(int bajaPasajeros){
			cantidadPasajeros-=bajaPasajeros;
		}
};

class camion:public vehiculo{
	private:
		string carga;
	public:
		camion(string _numeroPlaca, string _color, string _marca, float _velocimetro,string _carga):vehiculo(_numeroPlaca,_color,_marca,_velocimetro){
			carga=_carga;
		}	
		void mostrarCamion(){
			mostrarDatos();
			cout << carga<<endl;
		}
		void cambiarCarga(string nuevaCarga){
			carga = nuevaCarga;
		}
		
};
int main(){
	camion obj1("X","VERDE","RANCIO",0,"larbas");
	automovil obj2("X","VERDE","RANCIO",0,4,2);

	
	obj1.mostrarCamion();
	obj2.mostrarAutomovil();
	return 0;
}