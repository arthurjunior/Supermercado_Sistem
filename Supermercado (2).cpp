#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Produto{
	char nome[10];
	float quantidade;
	float valor;
	char status[10];
}Produto;

typedef struct Funcionario{
	char nome[10];
	int matricula;
}Funcionario;

void realizarvenda();

char prodpesq[20];
int op,ec,quant;
float total;	
Produto vetpro[3];
Funcionario vetfun[3];	

main(){

	
	do{
	system("cls");	
	printf("1-Cadastrar produto\n");
	printf("2-Cadastrar Funcionario\n");
	printf("3-Realizar venda\n");
	printf("4-Relatorio\n");
	printf("0-Sair\n ");	
	scanf("%i",&op);
	 
	 switch(op){
		case 1:
			
		 for(int i=0;i<3;i++){
			printf("Nome: ");
			fflush(stdin);
			gets(vetpro[i].nome);
			printf("\nQuantidade: ");
			scanf("%f",&vetpro[i].quantidade);
			printf("\nValor: ");
			scanf("%f",&vetpro[i].valor);
			
			strcpy(vetpro[i].status,"Disponivel");//inicializando status livre para o produto
		 } //fim for para cadastro produto
			break;//fim case 1	
		case 2:
		 for(int i=0;i<3;i++){
		  printf("Nome: ");
		  fflush(stdin);
		  gets(vetfun[i].nome);	
		  printf("\nMatricula: ");
		  scanf("%f",&vetfun[i].matricula);
		
		 }//fim for para cadastro do funcionario	
			break;//fim case 2	
		case 3:
			
			char fun[20];
			printf("Dgite o nome do funcionario: ");
			scanf("%s",fun);
			for(int i=0;i<3;i++){
			 if(vetfun[i].nome==fun){
				  	printf("Seja bem vindo [%s]",fun);
				  	void realizarVenda();	  	
				 }//fim for para exibir produtos
			}
			
		
			break;	
		case 4:
		
			break;	
		case 0:
			exit(0);
			break;
	
		default:
		printf("Opcao invalida\n");							
	 }//fim switch
	}while(op!=0);	
	
system("pause");	
}//fim main 



void relizarVenda(){
	
printf("Nome do produto: ");
			scanf("%s",&prodpesq);
			printf("\n");
			for(int i=0;i<3;i++){
			 if(vetpro[i].nome==prodpesq){
			 	for(int c=0;c<3;c++){
				  if(strcmp(vetpro[c].status,"Disponivel")==0){
				  	printf("%i - Produto:%s - Valor:%.2f\n",c,vetpro[c].nome,vetpro[c].valor);
				  }//fim condicao de exibir produtos disponiveis
				 }//fim for para exibir produtos
				scanf("%i",&ec);
				printf("\nQuantas unidades: ");
				scanf("%i",&quant);
			
			//calculo valor total do prudto
			total= vetpro[ec].valor*quant;	
			
			printf("\nValor total do produto:%.2f ",total);
			
			strcpy(vetpro[ec].status,"Indisponivel");	 
			system("pause");
			 }//fim condicao realizar venda	
			}//fim 	
			
}







