/* Instituto Tecnologico de Costa Rica
 * Area academica de Ingenieria en Computadores
 * Curso de Arquitectura en Computadores II
 * Profesor: Jeferson Gonzales Gomez 
 * Taller 2: Ejercicio 3 Matriz de 4x4
 * Kevin Alfaro Vega - 2015027603
 * II Semestre 2018
 * Referencias: https://software.intel.com/sites/landingpage/IntrinsicsGuide/
*/

#include <emmintrin.h> //SSE2

#include <stdio.h>

int main(){

	float a[4][4];
	float b[4][4];
	float c[4][4];

	printf("Llenar matrix 1\n");

	for(int i = 0; i < 4 ; i++){

		for(int j = 0; j < 4 ; j++){
			printf("F: %d C: %d\n",i,j);
			scanf("%f",&a[i][j]);
			
		
		}

	}

	printf("Llenar matrix 2\n");

	for(int i = 0; i < 4 ; i++){

		for(int j = 0; j < 4 ; j++){
			printf("F: %d C: %d\n",i,j);
			scanf("%f",&b[i][j]);
			
		
		}

	}

	__m128 column, row, product;

	//Aligned float array for addition
  	float temp[4] __attribute__((aligned(16)));  // 16-byte aligned temp array

	for (int i = 0; i < 4; i++) {

		//Get row values from matrix a
		row = _mm_set_ps(a[i][3], a[i][2], a[i][1], a[i][0]); 

                                          
		for (int j = 0; j < 4; j++) {

			//Get column values from matrix b
			column = _mm_set_ps(b[3][j],b[2][j],b[1][j],b[0][j]); 

  			//Perform row by column multiplication
  			product = _mm_mul_ps(row, column);
  			_mm_store_ps(temp,product);

  			//Add product result
  			c[i][j] = temp[0]+temp[1]+temp[2]+temp[3];     
                                       
		}
	}

	//Print result
	for(int i = 0; i < 4 ; i++){

		for(int j = 0; j < 4 ; j++){
			printf("%f ",c[i][j]);
		}

		printf("\n");

	}

	return 0;
}