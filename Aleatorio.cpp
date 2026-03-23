/*
	Name: Aleatorio.cpp
	Author: Giovanni tonsa
	Date: 23/03/26 11:19
	Description: Gerador de números aleatórios
*/

# include <stdio.h>
# include <windows.h>
# include <time.h>

main()
{
	while(1)
	{
		int num, i;
		int vet[100];
		int freq, tempo;
		
		srand(time(NULL)); //semente de acordo com o tempo
		
		//alimentando o vetor com números aleatórios
		for(i = 0; i < 20; i++)
			vet[i] = rand() % 100 + 1;
			
		puts("\nConteudo do vetor: ");
		for(i = 0; i < 20; i++)
			printf("%d|", vet[i]);
			Beep(vet[i] * 10,100);
		
		for(i = 0; i < 20; i++)
			Beep(vet[i] * 10,100);
	}

}
