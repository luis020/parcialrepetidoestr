
#include  <stdio.h>


int main()
{
	
	
	int n=0,aux=0;
	
	printf("ingrese un tamano \n");
	scanf("%i",&n);
	int tam=0;
	tam=((n*n)*2);
	printf("%i",tam);
	int matriz1[n][n];
	int matriz2[n][n];
	int vector[tam];
	int vec=0;
	
	printf("LLenado de la primera matriz \n");
	
	for(int fila=0; fila<n;fila++){
		for(int columna=0;columna<n;columna++){
			
			printf("ingrese un valor");
	scanf("%i",&matriz1[fila][columna]);
			
		}
		
	}
	
	printf("LLenado de la segunda matriz \n");
	for(int fila=0; fila<n;fila++){
		for(int columna=0; columna<n; columna++){
			
			printf("ingrese un valor \n");
	scanf("%i",&matriz2[fila][columna]);
			
		}
		
	}
	
	
	
	for(int fila=0; fila<n;fila++){
		for(int columna=0; columna<n; columna++){
			
		for(int fila2=0; fila2<n;fila2++){
		for(int columna2=0; columna2<n; columna2++){
		
		
		if(matriz1[fila][columna]<matriz1[fila2][columna2]){
			
			aux=matriz1[fila][columna];
			matriz1[fila][columna]=matriz1[fila2][columna2];
			matriz1[fila2][columna2]=aux;
			vector[vec]=matriz1[fila2][columna2];
			printf("%i ",vec);
			vec++;
		}
		
		if(matriz2[fila][columna]<matriz2[fila2][columna2]){
			aux=matriz2[fila][columna];
			matriz2[fila][columna]=matriz2[fila2][columna2];
			matriz2[fila2][columna2]=aux;
			vector[vec]=matriz2[fila2][columna2];
			printf("%i ",vec);
			vec++;
			
		}
		
		
		
		}
	}
	
		
		
		}
	}
	
	printf("-------------\n");
	for(int fila=0; fila<n;fila++){
		for(int columna=0; columna<n; columna++){
			
			printf("%i ",matriz1[fila][columna]);
printf("\n");
	
			
		}
		
	}
	printf("-------------\n");
	
	for(int fila=0; fila<n;fila++){
		for(int columna=0; columna<n; columna++){
			
			printf("%i ",matriz2[fila][columna]);
printf("\n");
	
			
		}
		
	}
	
	
	for(int pos=0; pos<tam;pos++){
		for(int pos2=0; pos2<tam; pos2++){
			
		if(vector[pos]<vector[pos2]){
			aux=vector[pos];
			vector[pos]=vector[pos2];
			vector[pos2]=aux;
		}
			
		}
		
	}
	
	printf("-------------\n");
	for(int pos=0; pos<tam; pos++){
			
			printf("%i ",vector[pos]);
printf("\n");
	
			
		}
	
	
	
	return 0;
}

