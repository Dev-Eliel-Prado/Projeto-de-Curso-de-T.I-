#include <stdio.h> //biblioteca de comunica��o com o usu�rio
#include <stdlib.h> //biblioteca de aloca��o de espa�o em mem�ria 
#include <locale.h> //biblioteca de aloca��es de texto por regi�o
#include <string.h> // biblioteca respons�vel por cuidar das string 

int registro() // Fun��o responsavel por cadastrar os usu�rios no sistema.
{
	// Inicio cria��o de variave�s/string.
	char arquivo[40];
	char cpf[40];
	char nome[40];
	char sobrenome[40];
	char cargo[40];
	//final da cria��o da variave�s /string 
	
	printf("Digite o CPF a ser cadastrado: "); // coletando informa��es do usu�rio.
	scanf("%s", cpf); // %s refere-se a string.
	
	strcpy(arquivo, cpf); //Responsavel por copiar os valores das string
	
	FILE *file; // cria o arquivo
	file = fopen(arquivo, "w"); // cria o arquivo - "W" Significa escrever 
	fprintf(file,cpf); // salvo o valor da variavel
	fclose(file); // fecha o arquivo
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o nome a ser cadastrado: ");
	scanf("%s",nome);
	
	file = fopen(arquivo, "a");
	fprintf(file,nome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o sobrenome a ser cadastrado: ");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo, "a");
	fprintf(file,sobrenome);
	fclose(file);
	
	file = fopen(arquivo, "a");
	fprintf(file,",");
	fclose(file);
	
	printf("Digite o cargo a ser cadastrado: ");
	scanf("%s",cargo);
	
	file = fopen(arquivo, "a");
	fprintf(file,cargo);
	fclose(file);	
	
    system("pause");

}

int consulta()
{
	setlocale(LC_ALL,"PORTUGUESE"); //Definindo a linguagem
	
    char cpf[40];
    char conteudo[200];
    
    printf("Digite o CPF a ser consultado: ");
    scanf("%s",cpf);
    
    FILE *file;
    file = fopen(cpf,"r");
    
    if(file== NULL)
    {
    	printf("N�o foi possivel abrir o arquivo, n�o localizado!.\n");
	}
    
    while(fgets(conteudo,200, file) != NULL)
    {
    	printf("\nEssas s�o as informa��es do usu�rio: ");
    	printf("%s", conteudo);
    	printf("\n\n");
	}
	
    system("pause");

}

int deletar()
{
   char cpf[40];
  
   printf("CPF a ser deletado: ");
   scanf("%s",cpf);
   
   remove(cpf);
   
   FILE *file;
   file = fopen(cpf,"r");
   
   if(file == NULL)
   {
   	
    printf("O usu�rio n�o se encontra no sistema!.\n");
    
    system("pause");
   	
   }

  
  
}


int main()
    {
	int opcao=0; //Definindo as Vari�veis
	int laco=1;
	
	for(laco=1;laco=1;)
	{
	 system("cls"); // responsavel por limpar a tela do usu�rio 
	
	 setlocale(LC_ALL,"PORTUGUESE"); //Definindo a linguagem
	
	
	 printf("### Cart�rio da EBAC ###\n\n"); //In�cio do Menu
	 printf("Escolha a op��o desejada do menu:\n\n");
	 printf("\t1 - Registrar Nomes\n");
	 printf("\t2 - Consultar Nomes\n");
	 printf("\t3 - Deletar Nomes\n\n"); 
	 printf("\t4 - Sair do sistema\n\n");
	 printf("Op��o: ");//Fim do Menu
	
	 scanf("%d", &opcao);
	
	 system("cls");
	 
	 switch(opcao) // inicio da sele��o do menu.
	{
		case 1: 
		registro(); // chamada das fun��es.
		break;
		
		case 2:
	    consulta();
		break;
		
		case 3:
	    deletar();
		break;
		
		case 4:
		printf("Obrigado por utilizar o sistema!\n");
		return 0;
		break;
		
	
		default:
		printf("Essa op��o n�o est� dispon�vel!\n");
		system("pause");
		break;
		// fim da sele��o.
		
		
	 } 
	
	
	
	
     }
	
     }
	
