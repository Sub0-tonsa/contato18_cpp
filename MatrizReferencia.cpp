/*
	Name: MatrizReferencia.cpp
	Author: Giovanni Tonsa
	Date: 23/03/26 09:37
	Description: Programa para demonstrar como passar um array bidimencional - matriz, como referência à uma função
*/

# include <stdio.h>

//Seção para prototipação
void imprimirMatriz(int mat[][3]);

main()
{
	int mat[3][3] = {{4, 6, 8}, 
					 {7, 3, 1},  
					 {8, 9, 2}};
					 
	imprimirMatriz(mat);
	printf("Elemento [2][1]: %d", mat[2][1]);
}

//Função para imprimir o conteúdo da matriz
void imprimirMatriz(int M[][3])
{
	int i, j;
	i = j = 0;
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
			printf("%d\t", M[i][j]);
	puts("\n");
	}
	M[2][1] = 200;
}
