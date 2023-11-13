#include <iostream>
#include <vector>
#include <limits>
#include<algorithm>

int cambio(std::vector<int>moneda , int M, std::vector<int>& m,int tam, int tabla[4][9], int infinito){
	
	for(int i = 0; i < M +1; i++){
                tabla[0][i] = infinito;
        }
        for(int j = 0; j < tam+1; j++)
                tabla[j][0] = 0;


	for(int i = 1; i< M+1; i++){
		for(int j = 1; j < tam+1; j++){
			if(moneda[j-1] > i)
				tabla[j][i] = tabla[j-1][i];
			else
				tabla[j][i] =std:: min(tabla[j-1][i], (tabla[j][i-moneda[j-1]]) + 1);
		}
	}
	int i = tam;
	int j = M;
	while(j > 0){
		if(i > 1 && tabla[i][j]  == tabla[i-1][j])
			i--;
		else{
			m[i-1]++;
			j -= moneda[i-1];
		
		}
	}
		return tabla[tam][M];
	

}
int main(){
	int M = 8;
	int tam = 3;
	int infinito = std::numeric_limits<int>::max();
	std::vector<int>moneda = {1, 4, 6};
	int tabla [4][9];
	std::vector<int> m= {0,0,0};

	int resultado = cambio(moneda, M, m, tam, tabla, infinito);

       for(int i = 1; i< tam+1; i++){
                for(int j = 1; j < M+1; j++){
			std::cout<<tabla[i][j]<<" ";
		}
		std::cout<<std::endl;
       }
	for(int i = 0; i < tam; i++){
		std::cout<<m[i]<<" "<<std::endl;
	}
	std::cout<<std::endl<<"Resultado = "<<resultado<<std::endl;	

	
	return 0;

}
