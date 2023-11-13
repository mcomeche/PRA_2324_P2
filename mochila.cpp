#include <iostream>
#include <vector>
#include <limits>
#include<algorithm>

int mochila(std::vector<int>peso , int M,int tam, std::vector<int>& valor , int tabla[5][6], std::vector<int>& dev){
	
	for(int i = 0; i <  M+1; i++){
                tabla[0][i] = 0;
		
        }
        for(int j = 0; j < tam+1; j++)
	  tabla[j][0] = 0;


	for(int i = 1; i< tam+1; i++){
		for(int j = 1; j < M+1; j++){
			if(j - peso[i-1] < 0)
				tabla[i][j] = tabla[i-1][j];
			else
				tabla[i][j] =std:: max(tabla[i-1][j], tabla[i-1][j-peso[i-1]] + valor[i-1]);
		}
	}
	int i = tam;
	int j = M;
	
	while(j > 0){
	  	if(tabla[i][j]  == tabla[i-1][j])
	    		i--;
	  	else{
			dev[i] = 1;
			j = j -  peso[i];
			i--;
	  	}
	}    
	return tabla[tam][M];
	
	
}
int main(){

  int M = 5;
  int tam = 4;
  std::vector<int>peso = {1, 3, 2, 4};
  std::vector<int> valor = {10, 20, 15, 20};
  int tabla [5][6];
  
  for(int i = 0; i < M; i++){
    for(int j = 0; j < tam; j++){
            tabla[i][j] = -1;  
    } 
  } 
  std::vector<int> dev= {0,0,0, 0};
  
  int resultado = mochila(peso, M,tam, valor, tabla, dev);
  
  for(int i = 0; i< tam+1; i++){
    for(int j = 0; j < M+1; j++){
      std::cout<<tabla[i][j]<<" ";
		}
    std::cout<<std::endl;
  }
  for(int i = 0; i < tam; i++){
	std::cout<<dev[i]<<" "<<std::endl;
  }
  std::cout<<std::endl<<"Resultado = "<<resultado<<std::endl;	
  
	
  return 0;

}

