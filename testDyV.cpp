#include "DyV.h"
#include<vector>


int main(){

        std::vector<int> a{1, 25, 3};            //Vector de ints vacío
        std::vector<double> b{1.1, 2.2, 3.3};      //Vector de floats con 10 elementos
        std::vector<char> c{'a', 'b', 'c'}; //Vector de shorts con 3 elementos: 1, 2 y 3
      std::vector<int>d {75, 25, 3};            //Vector de ints vacío
        std::vector<double> e{7.1, 2.2, 1.3};      //Vector de floats con 10 elementos
        std::vector<char> f{'c', 'b', 'a'}; //Vector de shorts con 3 elementos: 1, 2 y 3
	std:: vector<int> g{9,3, 5,0};
	

      std::cout << "Busqueda Binaria Int: "<<BusquedaBinaria(1, a, 0, 2)<<"\n";
        std::cout << "Busqueda Binaria Double: "<<BusquedaBinaria(3.3, b, 0, 2)<<"\n";
        std::cout << "Busqueda Binaria Char: "<<BusquedaBinaria('a', c, 0, 2)<<"\n";
        std::cout<<"Busqueda BinariaINV Int: "<<INV(25, d, 0, 2)<<"\n";
        std::cout<<"Busqueda BinariaINV Double: "<<INV(7.1, e, 0, 2)<<"\n";
        std::cout<<"Busqueda BinariaINV Char:"<<INV('a', f, 0, 2)<<"\n";
        
	QuickSort(g, 0, 3);
	QuickSortINI(a, 0, 2);
	QuickSortMED(d, 0, 2);
	
	for(int i = 0; i < 4; i++){
		std::cout<<g[i]<<" ";
	}
       
		std::cout<<std::endl;

	for(int i = 0; i < 3; i++){
		std::cout<<d[i]<<" ";
	}
       
	std::cout<<std::endl;
	for(int i = 0; i < 3; i++){
		std::cout<<a[i]<<" ";
	}
       
	
        return 0;

}


