#include <stdio.h> // biblioteca de comunicação de usuário //
#include <stdlib.h> // biblioteca de alocação de espaço em memória //
#include <locale.h> // biblioteca de alocação de texto por região //
#include <string.h> // biblioteca resonsável por cuidar das strings //

int registro()
{
	char arquivo[40]; // variável tipo char para guardar os dados do cliente
	char cpf[40];  // variável tipo char para guardar o cpf 
	char nome[40]; // variável tipo char para guardar o nome
	char sobrenome[40]; // variável tipo char para guardar o sobrenome
	char cargo[40]; // variável tipo char para guardar o cargo
	
	printf("\n digite o seu cpf \n");
	scanf("%s",cpf); // copia o que o usuário escrever
	
	strcpy(arquivo, cpf); // responsável por copiar os valores das strings
	
	FILE *file; // vai criar os arquivos com dados dos clientes no banco de dados
	file = fopen (arquivo, "w"); // cria o arquivo e o "w" permite o sistema escrever e salvar no arquivo
	fprintf(file, cpf); // aloca oq foi escrito pelo usuário para o arquivo (cpf no caso)
	fclose(file);  // fecha o arquivo
	
	file = fopen  (arquivo, "a"); // abre o arquivo e o "a" permite atualização
	fprintf (file,"," ); // coloca uma virgula para separação de espaços
	fclose(file); 
	
	printf("\n digite seu nome \n");
	scanf("%s",nome);
	
	file = fopen (arquivo,"a");  
	fprintf(file,nome);  
	fclose(file);
	
	file = fopen  (arquivo, "a");
	fprintf (file,"," );
	fclose(file);
	
	printf("\n digite o seu sobrenome \n");
	scanf("%s",sobrenome);
	
	file = fopen(arquivo,"a");  
	fprintf(file,sobrenome);  
	fclose(file);
	
	file = fopen  (arquivo, "a"); 
	fprintf (file,"," ); 
	fclose(file);
	
	printf("\n digite seu cargo \n");
	scanf("%s",cargo);
	
	file = fopen(arquivo,"a");
	fprintf (file,cargo);
	fclose(file);
	
	system ("pause");		
}

int consulta()
{
	printf ("\n voce escolheu a consulta de nomes! \n ");
	system("pause");
	
	char cpf[40];
	char conteudo[200];
	
	printf("qual cpf consultar ?");
	scanf("%s", cpf);
	
	FILE *file;
	file = fopen(cpf,"r");
	
	if(file == NULL)
	{
		printf ("\nnão localizado\n");
	}
	while(fgets(conteudo, 200, file)!= NULL)
	{
	  printf("\n essas são as informações do usuário !\n");
	
	  printf("%s",conteudo);
	  printf("\n\n");
	  
	  system("pause");
	  
	}
}



int deletar()
{
	printf("voce escolheu a exclusão de nomes!\n");
		  system ("pause");
		
    char cpf[40];
    
    printf("qual cpf deseja excluir:\n");
    scanf("%s",cpf);
    
    remove(cpf); // remover o cpf
    
    FILE *file; // consultar pastas 
    file = fopen(cpf,"r"); // abrir pasta e o "r" fará a função de ler o arquivo pro usuário
    
    if(file==NULL) // caso o cpf não estiver cadastrado (nulo)
	{
		printf("usuário não encontrado no sistema!\n");
		system("pause");
	}
	
	
	
	

    
		  		  
}



int main ()
{
 
  int opcao=0; // definindo variáveis
  int laco=1;
  
  for (laco=1;laco=1;) // laço de repetição de tela pra escolha do usuário
  
  {
  	system("cls"); // limpar tela do usuário 
  	

   
  
  setlocale(LC_ALL, "Portuguese" ); // definindo a linguagem
  
   printf("\n\n cartório da ebac \n\n"); // inicio do menu
   printf("escolha a opção desejada do menu :\n\n");
   printf("\t1 - registrar nomes\n");
   printf("\t2 - consultar nomes\n");
   printf("\t3 - deletar nomes\n\n");
   printf("\t4 - sair do sistema \n\n") ;
   printf("\n opção:");
    
    scanf("%d", &opcao); // armazenando informações digitadas
    
    
    system ("cls");
    
    switch (opcao)
  	{
	   
  		case 1: 
		        registro();
	    break;
	    
	    case 2:
	            consulta();
		  break;
		  
		  case 3: 
		          deletar();
		  break;
		  
		  case 4 :
		  	printf("obrigado por utilizar o nosso sistema \n");
		  	return 0;
		  	break;
		  	
		
		  default: printf ("voce escolheu uma opção invalida\n");
		    system ("pause");
		  break;
    
	
	}
 }
 
}




















 
