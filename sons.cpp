/*
	Name: sons.cpp
	Author: Giovanni Tonsa
	Date: 23/03/26 10:01
	Description: Programa para demonstar a utilização da biblioteca que emite sons
*/

//Seção das bibliotecas
# include <stdio.h>
# include <windows.h>

main()
{
	int freq, tempo;
	int i;
	freq = 900;
	tempo = 150;
	
	while(1)
	{
		for(i = 0; i < 20; i++)
		{
			Beep(freq, tempo);
			freq = freq - 50;
		}
	
		for(i; i >= 0; i--)
		{
			Beep(freq, tempo);
			freq = freq + 50;
		}
	}
}

