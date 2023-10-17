#include "DyV.h"
#include<vector>

int main(){

	std::vector<int> a{1, 25, 3};            //Vector de ints vacío
	std::vector<double> b{1.1, 2.2, 3.3};      //Vector de floats con 10 elementos
	std::vector<int> d{1, 2, 3}; //Vector de shorts con 3 elementos: 1, 2 y 3

	std::cout << "Busqueda Binaria Int: "<<BusquedaBinaria(25, a, 0, 2)<<"\n";
	std::cout << "Busqueda Binaria Double: "<<BusquedaBinaria(2.2, b, 0, 2)<<"\n";
	std::cout << "Busqueda Binaria Int: "<<BusquedaBinaria(2, d, 0, 2)<<"\n";


}

