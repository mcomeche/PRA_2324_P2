#include<vector>
#include<iostream>

template<typename T>
int PartitionINI(std::vector<T>& V, int ini, int fin){
	T x = V[ini];
	int i = ini;
	int j ;	
	for(j = ini ;j < fin; j++){

	       if(V[j] <= x){
	       int aux = V[i];
		V[i] = V[j];
 		V[j] = aux;
		i = i +1;
	       }
	}
	int aux1 = V[i];
	V[i] = V[fin];
	V[fin] = aux1;
	return i;
}
template<typename T>
void QuickSortINI(std::vector<T>& V, int ini, int fin){

	if(ini < fin){
		int pivot = PartitionINI(V, ini, fin);
		QuickSortINI(V, ini, pivot-1);
		QuickSortINI(V, pivot +1, fin);
	}
}

template<typename T>
int PartitionMED(std::vector<T>& V, int ini, int fin){
  int medio = (ini +fin) / 2;
  T x = V[medio];
	int i = ini;
	
	int j ;	
	for(j = ini; j<=fin; j++){

	       if(V[j] < x){
	       int aux = V[i];
		V[i] = V[j];
 		V[j] = aux;
		i = i +1;
	       }
	}
	int aux1 = V[i];
	V[i] = V[medio];
	V[medio] = aux1;
	return i;
}
template<typename T>
void QuickSortMED(std::vector<T>& V, int ini, int fin){
	
	if(ini < fin){
		int pivot = PartitionMED(V, ini, fin);
		QuickSortMED(V, ini, pivot -1);
		QuickSortMED(V, pivot +1, fin);
	}
}
template<typename T>
int Partition(std::vector<T>& V, int ini, int fin){
        T x = V[fin];
        int i = ini;
        int j ;
        for(j = ini ;j < fin; j++){

               if(V[j] <= x){
               int aux = V[i];
                V[i] = V[j];
                V[j] = aux;
                i = i +1;
               }
        }
        int aux1 = V[i];
        V[i] = V[j];
        V[j] = aux1;
        return i;
}

template<typename T>
void QuickSort(std::vector<T>& V, int ini, int fin){
	if(ini < fin){
		int pivot = Partition(V, ini, fin);
		QuickSort(V, ini, pivot -1);
		QuickSort(V, pivot +1, fin);
	}
}

template<typename T>

int INV(T X, std::vector<T>& V, int ini, int fin){

       if( ini > fin){
                 std ::cout<<"No se encuentra en el array";
                 return -1;
       }

        int medio = (ini + fin) / 2;
        if (V[medio] == X)
                 return medio;
        else if(V[medio] > X)
                 return INV(X, V, medio +1, fin);
        else
                 return INV(X, V, ini, medio -1);
}

template<typename T>

int BusquedaBinaria(T X, std::vector<T>& V, int ini, int fin){

       if( ini > fin){
                 std ::cout<<"No se encuentra en el array";
		 return -1;
       }

        int medio = (ini + fin) / 2; 
        if (V[medio] == X) 
                 return medio; 
	else if(V[medio] > X)
                 return BusquedaBinaria(X, V, ini, medio - 1);
	else
                 return BusquedaBinaria(X, V, medio +1, fin);
}






