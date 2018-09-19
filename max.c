/* Instituto Tecnologico de Costa Rica
 * Area academica de Ingenieria en Computadores
 * Curso de Arquitectura en Computadores II
 * Profesor: Jeferson Gonzales Gomez 
 * Taller 2: Ejercicio 2 Vector de maximos
 * Kevin Alfaro Vega - 2015027603
 * II Semestre 2018
 * Referencias: https://software.intel.com/sites/landingpage/IntrinsicsGuide/
*/

// SSE headers
#include <emmintrin.h> //SSE2

#include <stdio.h>

int main(){

	__m128i row1;
	__m128i row2;
	__m128i result;


	short int n = 0;

	printf("Insert 8 numbers for row 1\n");
	printf("Column 0:\n");
	scanf("%hd",&n);
	row1 = _mm_insert_epi16(row1, n, 0);

	printf("Column 1:\n");
	scanf("%hd",&n);
	row1 = _mm_insert_epi16(row1, n, 1);

	printf("Column 2:\n");
	scanf("%hd",&n);
	row1 = _mm_insert_epi16(row1, n, 2);

	printf("Column 3:\n");
	scanf("%hd",&n);
	row1 = _mm_insert_epi16(row1, n, 3);

	printf("Column 4:\n");
	scanf("%hd",&n);
	row1 = _mm_insert_epi16(row1, n, 4);

	printf("Column 5:\n");
	scanf("%hd",&n);
	row1 = _mm_insert_epi16(row1, n, 5);

	printf("Column 6:\n");
	scanf("%hd",&n);
	row1 = _mm_insert_epi16(row1, n, 6);

	printf("Column 7:\n");
	scanf("%hd",&n);
	row1 = _mm_insert_epi16(row1, n, 7);

	printf("Insert 8 numbers for row 2\n");
	printf("Column 0:\n");
	scanf("%hd",&n);
	row2 = _mm_insert_epi16(row2, n, 0);

	printf("Column 1:\n");
	scanf("%hd",&n);
	row2 = _mm_insert_epi16(row2, n, 1);

	printf("Column 2:\n");
	scanf("%hd",&n);
	row2 = _mm_insert_epi16(row2, n, 2);

	printf("Column 3:\n");
	scanf("%hd",&n);
	row2 = _mm_insert_epi16(row2, n, 3);

	printf("Column 4:\n");
	scanf("%hd",&n);
	row2 = _mm_insert_epi16(row2, n, 4);

	printf("Column 5:\n");
	scanf("%hd",&n);
	row2 = _mm_insert_epi16(row2, n, 5);

	printf("Column 6:\n");
	scanf("%hd",&n);
	row2 = _mm_insert_epi16(row2, n, 6);

	printf("Column 7:\n");
	scanf("%hd",&n);
	row2 = _mm_insert_epi16(row2, n, 7);

	//Compute max of every column
	result = _mm_max_epi16 (row1, row2);


	printf("Result *********************** \n");
	n = _mm_extract_epi16(result,0); 
	printf("%d \t", n);

	n = _mm_extract_epi16(result,1); 
	printf("%d \t", n);

	n = _mm_extract_epi16(result,2); 
	printf("%d \t", n);

	n = _mm_extract_epi16(result,3); 
	printf("%d \t", n);

	n = _mm_extract_epi16(result,4); 
	printf("%d \t", n);

	n = _mm_extract_epi16(result,5); 
	printf("%d \t", n);

	n = _mm_extract_epi16(result,6); 
	printf("%d \t", n);

	n = _mm_extract_epi16(result,7); 
	printf("%d \t", n);



	
	

	return 0;
}

