/* Programa para administrar loja de hot-dog
Alunos: Leticia Silva de Brito 		RA: 2211105235
		Felipe Pitombeira de Sena 	RA: 2211106196 
		Sala 209, Período: Manhã, Professora Elisa */
		
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>

float pure=1.50, basico=2, milho=1, azeitona=0.50, vinagrete=0.50, frita=2.00, catupiry=2.50, total;
char nome;

int main ()
{
while (1)
     {
           puts ("\n\n\n \t \xDB \xDB Hot-Dog ... \xDB \xDB");
           puts ("\n\n Qual o seu nome?\n");
           gets ("%s, nome");
           puts ("\n\n Escolha a opcao desejada: \n");
           puts ("\n 1 - Hot-Dog Basico");
           puts ("\n 2 - Azeitona");
           puts ("\n 3 - Catupiry");
           puts ("\n 4 - Batata Frita");
           puts ("\n 5 - Milho");
           puts ("\n 6 - Pure");
           puts ("\n 7 - Vinagrete");
           puts ("\n Para sair digite 0");
           scanf ("%d",& opcao);
           if (opcao==0)
           break;

           system("cls");
           switch (opcao)
           {
			   case 1: 
			   puts ("\n Voce escolheu hot-dog basico");
               puts ("\nEscolha o tamanho do arranjo:");
            }

}
