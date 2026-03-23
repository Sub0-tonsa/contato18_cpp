/*
	Name: Piano.cpp
	Author: Giovanni Tonsa
	Date: 23/03/26 10:17
	Description: Simulação de um teclado sonoro qualquer 
*/

//Seção das bibliotecas
# include <stdio.h>
# include <windows.h>
# include <conio.h>

main()
{
	while(1)
	{
		int tecla;
		tecla = getch(); //recebe o caracter
		Beep(tecla * 25, 250);
		//printf("%c - %d", tecla, tecla);
	}
}
