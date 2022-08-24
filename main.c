#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>

/*

	DESENVOLVEDORES:
	
	NOME: SAMUEL SILVA COSTA
	NOME: NATHALY DE LIMA BARBIERI
	
	INSTITUI��O DE ENSINO: FATEC ZONA SUL
	PROFESSOR: CARLOS BEZERRA
	DISCIPLINA: LINGUAGEM DE PROGRAMA��O
	
	DATA DE CRIA��O: 24/08/2022
	
	INSTRU��ES: CRIAMOS UM MENU EM QUE CADA OP��O CORRESPONDE A UM EXERCICIO DA LISTA. ASSIM, PARA EXECUTAR UM DOS EXERCICIOS, BASTA DIGITAR A OP��O DESEJADA.


 */
 
 int media(int n1, int n2, int n3)
 {
 	int calculo;
 	
 	calculo = (n1+n2+n3)/3;
 	
 	return calculo;
 }
 
void main()
{
	
	setlocale(LC_ALL, "");
	
	int dig, op, ex4[4], x, x1=0, x2=0, x3=0, x4=0, x5=0, N1, N2, N3, maior, menor, reposicao = 0, tirateima = 0, resultado;
	char letra;
	
	system("color df");
	
	printf("\n\n\n\n\n\n\n                                             BEM-VINDO AO PROGRAMA!");
	
	printf("\n\n\n\n\n\n\n                                    PRESSIONE QUALQUER TECLA PARA CONTINUAR.");
	
	getch();
	
	fflush(stdin);
	system("cls");
	
	system("color e0");
	
	do
	{
		
		printf("------------------------------------------------------MENU--------------------------------------------------------------");
		
		printf("\n\n\n ESCOLHA UMA OP��O PARA PROSSEGUIR:\n\n 1) - EXERCICIO 1\n 2) - EXERCICIO 2\n 3) - EXERCICIO 3\n 4) - EXERCICIO 4\n 5) - EXERCICIO 5\n 6) - LER A DESCRI��O DOS EXERCICIOS\n 7) - SAIR\n\n R: ");
		scanf("%i", &op);
		
		system("cls");
		
		fflush(stdin);
		
		
		if(op == 1)
		{	
			system("color df");
			printf("---------------------------------------------------EXERCICIO 1----------------------------------------------------------");
			
			printf("\n\n DIGITE O PRIMEIRO VALOR: ");
			scanf("%i", &N1);
			
			printf("\n DIGITE O SEGUNDO VALOR: ");
			scanf("%i", &N2);
			
			printf("\n DIGITE O TERCEIRO VALOR: ");
			scanf("%i", &N3);
		    
		    // DESCOBRE QUAL N�MERO � MAIOR
		    
		    if (N1 > N2 && N1 > N3)
		    {
		    	maior = N1;
			}
		    
		    else
		    {
		    	if (N2 > N3)
		    	{
		    		maior = N2;
				}
		            
		        else
		        {
		        	maior = N3;
				}
			}
		    
		    // DESCOBRE QUAL N�MERO � MENOR
		    
		    if (N1 < N2 && N1 < N3)
		    {
		    	menor = N1;
			}
			
		    else
		    {
		    	if(N2 < N3)
		    	{
		    		menor = N2;
				}
		    
		        else
		        {
		            menor = N3;                                                                                                                                                                                                                                               
				}
			}
			
			
			
			 // INFORMA QUE TODOS OS VALORES S�O IGUAIS E SE S�O APR OU N�O.
			
			if(N1 == N2 && N2 == N3)
			{
				if(N1 % 2 == 0)
				{
					printf ("\n\n\n OS TR�S VALORES S�O IGUAIS E O N�MERO � PAR");
				}
				else
				{
					printf ("\n\n\n OS TR�S VALORES S�O IGUAIS E O N�MERO � IMPAR");
				}
			}
			
			 // INFORMA QUE DOIS VALORES S�O IGUAIS E S�O OS MAIORES
			
			if(N1 == N2 && N2 > N3)
			{
				printf ("\n\n OS VALORES 1 E 2 S�O IGUAIS.");
				
				maior = N2;
				menor = N3;	
			}
			
			if(N2 == N3 && N2 > N1)
			{
				printf ("\n\n OS VALORES 2 E 3 S�O IGUAIS.");
				
				maior = N2;
				menor = N1;	
			}
			
			if(N3 == N1 && N3 > N2)
			{
				printf ("\n\n OS VALORES 1 E 3 S�O IGUAIS.");
				
				maior = N3;
				menor = N2;	
			}
			
			 // INFORMA QUE DOIS VALORES S�O IGUAIS E S�O OS MENORES
			
			if(N1 == N2 && N2 < N3)
			{
				printf ("\n\n OS VALORES 1 E 2 S�O IGUAIS.");
				
				maior = N3;
				menor = N2;	
			}
			
			if(N2 == N3 && N2 < N1)
			{
				printf ("\n\n OS VALORES 2 E 3 S�O IGUAIS.");
				
				maior = N1;
				menor = N2;	
			}
			
			if(N3 == N1 && N3 < N2)
			{
				printf ("\n\n OS VALORES 1 E 3 S�O IGUAIS.");
				
				maior = N2;
				menor = N3;	
			}
			
			 // VERIFICA SE O MAIOR VALOR � PAR -> OU <- SE O MENOR � IMPAR.
			
		    if(maior % 2==0 || menor % 2==1)
		    {
		    	printf ("\n\n\n                                                    VERDADEIRO!\n");
			}
		    else
		    {
		        printf ("\n\n\n                                                      FALSO!\n");
		    }
		}
		

		
		else if(op == 2)
		{	
			system("color df");
			printf("---------------------------------------------------EXERCICIO 2----------------------------------------------------------");
			
			printf("\n\n DIGITE UMA LETRA: ");
			scanf("%c", &letra);
			
			if(letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u' || letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
			{
				printf("\n\nVOGAL");
			}
			else 
			{
				printf("\n\nCONSOANTE");
			}
			
			fflush(stdin);
			
		}
		
		else if(op == 3)
		{
			system("color df");
			printf("---------------------------------------------------EXERCICIO 3----------------------------------------------------------");
			
			printf("INSIRA OS GOLS DO PRIMERO TIME: ");
			scanf("%i", &N1);
			printf("INSIRA OS GOLS DO SEGUNDO TIME: ");
			scanf("%i", &N2);
			
			if(N1 == N2)
			{
				printf("\nEMPATE! Placar:  %i X %i ", N1, N2);
			}
			else if(N1 > N2)
			{
				printf("\nPRIMEIRO TIME GANHOU! PLACAR: %i X %i  ", N1, N2);
			}
			else
			{
				printf("\nSEGUNDO TIME GANHOU! PLACAR: %i X %i ", N1, N2);
			}
		}

		
		else if(op == 4)
		{
			system("color df");
			printf("---------------------------------------------------EXERCICIO 4----------------------------------------------------------\n");
			
			for(x=0; x<4; x++)
			{
				printf("\nDIGITE O %i� VALOR: ", x+1);
				scanf("%i", &ex4[x]);
				
				fflush(stdin);
				
				if(ex4[x] >= 1 && ex4[x] <= 25)
				{
					x1++;
				}
				
				fflush(stdin);
				
				if(ex4[x] >= 26 && ex4[x] <= 50)
				{
					x2++;
				}
				
				fflush(stdin);
				
				if(ex4[x] >= 51 && ex4[x] <= 75)
				{
					x3++;
				}
				
				fflush(stdin);
				
				if(ex4[x] >= 76 && ex4[x] <= 100)
				{
					x4++;
				}
				
				if(ex4[x] < 1 || ex4[x] > 100)
				{
					x5++;
				}
			}
			
			printf("\n\nFORAM DIGITADOS %i N�MEROS NO INTERVALO DE 1 A 25, %i NO INTERVALO DE 26 A 50, %i NO INTERVALO DE 51 A 75, %i NO INTERVALO DE 76 A 100 E %i N�MEROS ESTAVAM FORA DESTES INTERVALOS.\n\n\n", x1, x2, x3, x4, x5);
		}

		else if(op == 5)
		{
			system("color df");
			printf("---------------------------------------------------EXERCICIO 5----------------------------------------------------------\n\n");
			
			fflush(stdin);
	
			printf(" Insira a primeira nota do aluno: ");
			scanf("%i", &N1);
			printf(" Insira a segunda nota do aluno: ");
			scanf("%i", &N2);
			printf(" Insira a terceira nota do aluno: ");
			scanf("%i", &N3);
			
			resultado = media(N1, N2, N3);
			
			printf("\n 1� nota: %i | 2� nota: %i | 3� nota: %i", N1, N2, N3);
			
			printf("\n M�dia: %i", resultado);
			if(resultado >= 7)
			{
				printf("\n Aprovado por m�dia");
			}
			else
			{
				printf("\n\n Nota ou notas inferiores a 7. Aluno tem direito a prova de reposi��o");
				printf("\n\n Insira nota da prova de reposi��o: ");
				scanf("%i", &reposicao);
				
				if(N1 <= N2 && N1 <= N3)
				{
					N1 = reposicao;
				}
				else if(N2 <= N1 && N2 <= N3)
				{
					N2 = reposicao;
				}
				else if(N3 <= N1 && N3 <= N2)
				{
					N3 = reposicao;
				}

				resultado = media(N1, N2, N3);
				
				printf("\n 1� nota: %i | 2� nota: %i | 3� nota: %i", N1, N2, N3);
			
				printf("\n M�dia: %i", resultado);
				
				if(resultado >= 7)
				{
					printf("\n Aprovado ap�s reposi��o");
				}
				
				else
				{
					fflush(stdin);
					
					printf("\n\n Nota de reposi��o: %i, n�o foi o sufici�nte", reposicao);
					printf("\n Direito a tira-teima");
					printf("\n\n Insira nota da prova de tira-teima: ");
					scanf("%i", &tirateima);
					
					resultado = resultado + reposicao + tirateima;
					
					if(resultado >= 12)
					{
						printf("\n 1� nota: %i | 2� nota: %i | 3� nota: %i", N1, N2, N3);	
						printf("\n M�dia: %i", media(N1, N2, N3));
						printf("\n Reposi��o: %i", reposicao);
						printf("\n Soma da m�dia, reposi��o e tira-teima: %i", resultado);
						
						printf("\n Aprovado ap�s tira-teima!");
					}
					else
					{
						printf("\n 1� nota: %i | 2� nota: %i | 3� nota: %i", N1, N2, N3);	
						printf("\n M�dia: %i", media(N1, N2, N3));
						printf("\n Nota da prova de reposi��o: %i", reposicao);
						printf("\n Soma da m�dia, reposi��o e tira-teima: %i", resultado);
						printf("\n Reprovado!");
					}
				}
			}
		}
		
		
		else if(op == 6)
		{
			system("color df");
			printf("----------------------------------------------------DESCRI��ES----------------------------------------------------------");
			
			printf("\n\n1- Crie um algoritmo/programa que l� tr�s inteiros e informa VERDADEIRO se apenas o maior deles � par ou se o menor deles � �mpar informa FALSO em caso contr�rio.");
			
			printf("\n\n2 - Fa�a um algoritmo/programa que l� do usu�rio um caractere e informa se ele � uma vogal, uma consoante ou n�o � uma letra.");
			
			printf("\n\n3 - Escreva um algoritmo/programa que recebe do usu�rio o placar de um jogo de futebol (os gols de cada time) e informe se o resultado foi empate, a vit�ria foi do primeiro time ou a vit�ria foi do segundo time.");
			
			printf("\n\n4 - Escreva um algoritmo/programa que l� do usu�rio 4 (quatro) n�meros inteiros e informe se h� ou n�o um deles no intervalo entre 1 e 25, outro entre 26 a 50, outro entre 51 a 75 e outro entre 76 a 100.");
			
			printf("\n\n5 - Pelas regras da UniTajara Education, toda disciplina � composta de 3 avalia��es obrigat�rias. Se um aluno tem m�dia superior ou igual a 7 (sete) nas tr�s avalia��es, ele � considerado �Aprovado por m�dia.�. Se tiver m�dia inferior a 7 (sete), tem direito a uma quarta prova, chamada de Reposi��o, que substituiu a menor nota das tr�s provas anteriores (se a nota da reposi��o for maior que ela). Ap�s a Reposi��o, se as tr�s maiores notas formarem uma m�dia igual ou superior a 7 (sete), o aluno � considerado �Aprovado ap�s reposi��o.� Finalmente, apenas se tiver a m�dia com a Reposi��o inferior a 7 (sete), ele far� uma quinta prova, chamada de tira-teima, em que ser� considerado �Aprovado ap�s a tira-teima.� se a soma da m�dia com a Reposi��o e a nota da prova tira-teima for igual ou maior a 12 (doze). Nesse �ltimo caso, a soma da m�dia com reposi��o e prova final for inferior a 12 (doze), o aluno � dito como �Reprovado.�. Fa�a um programa que leia as tr�s notas obrigat�rias de uma disciplina e seguida, apenas se necess�rio, leia as notas da Reposi��o e tira-teima. O programa deve apresentar como sa�da as frases �Aprovado por m�dia.�, �Aprovado ap�s a reposi��o�. �Aprovado ap�s a tira-teima.� ou �Reprovado.� respectivamente em cada uma dessas situa��es j� mencionadas anteriomente.");
			
		}
		
		
		else if(op == 7)
		{
			
			system("color df");
			printf("-------------------------------------------------------SAIR-------------------------------------------------------------\n\n");
					
		}
		
		
		fflush(stdin);
		
		printf("\n\n\n                  PARA VOLTAR AO MENU APERTE QUALQUER TECLA, PARA ENCERRAR O PROGRAMA APERTE 'ESC'.");
		
		printf("\n");
		
		dig = getch();
		
		system("cls");
		
	}while(dig != 27);
	
	

	printf("\n\n\n\n\n\n\n\n\n\n\n\n\n                                                  PROGRAMA ENCERRADO!");
	
	
	printf("\n\n\n\n\n");
	
	

	
}
