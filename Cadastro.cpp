/*
	Name: Cadastro.cpp
	Author: Giovanni Tonsa
	Date: 23/03/26 10:36
	Description: Fazer um cadastro de uma pessoa emitindo beeps ao final de cada entrada (dado lido)
*/

# include <stdio.h>
# include <windows.h>

main()
{
	char *nome;
	int idade;
	float altura, imc, peso;
	char sexo;
	int freq, tempo;
	freq = 2000;
	tempo = 250;
	
	printf("Nome: "); scanf("%s", &nome);
	Beep(freq,tempo);
	printf("Idade: "); scanf("%d",&idade);
	Beep(freq,tempo);
	printf("Altura: "); scanf("%f",&altura);
	Beep(freq,tempo);
	printf("Peso: "); scanf("%f",&peso);
	Beep(freq,tempo);
	printf("Sexo: "); scanf(" %c", &sexo);
	Beep(freq,tempo);
	
	imc = peso / (altura * altura);
	
	printf("\nSeu IMC eh: %.2f\n", imc);
	printf("Classificacao: ");
	
	if (imc < 18.5) {
        printf("Abaixo do peso\n");
        Beep(1000,tempo);
    } else if (imc >= 18.5 && imc < 25.0) {
        printf("Peso normal\n");
        Beep(4000,tempo);
    } else if (imc >= 25.0 && imc < 30.0) {
        printf("Sobrepeso\n");
        Beep(1600,tempo);
    } else if (imc >= 30.0 && imc < 35.0) {
        printf("Obesidade Classe I\n");
        Beep(2000,tempo);
    } else if (imc >= 35.0 && imc < 40.0) {
        printf("Obesidade Classe II\n");
        Beep(3000,tempo);
    } else {
        printf("Obesidade Classe III\n");
        Beep(3500,tempo);
    }
}
