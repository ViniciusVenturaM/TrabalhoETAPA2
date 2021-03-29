#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define a 300

int main() {

	struct contato
	{
		char nome[a];
		char email[a];
		char endereco[a];
		char estado[a];
		char num_tel[a];
	};
	struct contato contatos[10];

    int id_l;
    int condicao=0;
    int id_a=0;
    int id_c=0;
    int pos=0;
    int aux;
    int aux2;
    printf("BEM VINDO A SUA AGENDA TELEFONICA!\n");
    printf("\n\n");
    printf("Para cadastrar um contato digite 1 \nPara consultar um contato digite 2 \nPara alterar algum contato digite 3\n");
    printf("\n");
    scanf("%d",&id_l);
    setbuf(stdin, NULL);
    while(condicao<4) {

    	switch (id_l) {
	        case 1:
	            {
	             	fflush(stdin);
	            	system("cls");
	             	printf("Cadastre o nome:\n");
	             	gets(contatos[pos].nome);
	             	fflush(stdin);

					printf("Cadastre o email:\n");
	                gets(contatos[pos].email);
	                fflush(stdin);

			        printf("Cadastre o telefone:\n");
	                gets(contatos[pos].num_tel);
	                fflush(stdin);

	                printf("Cadastre o endereco:\n");
	            	gets(contatos[pos].endereco);
	                fflush(stdin);

		            printf("Cadastre o Estado:\n");
	                gets(contatos[pos].estado);
	                fflush(stdin);

	                printf("\n\n");
	                aux=pos+1;
	                system("cls");
	                printf("Voce eh o usuario: %d", aux);
	                printf("\n\n\n");
	            }
	        break;

	        case 2:
	            {
					printf("Digite o numero de usuario da pessoa:\n");
					scanf("%d", &id_c);
					system("cls");
					aux2=id_c-1;
					// printf("Nome:%s\n", &contatos[aux2].nome);
					printf("Nome:%s\n", contatos[aux2].nome);
					printf("Email:%s\n", contatos[aux2].email);
					printf("Telefone:%s\n", contatos[aux2].num_tel);
					printf("Endereço:%s\n", contatos[aux2].endereco);
					printf("Estado:%s\n", contatos[aux2].estado);
					system("pause");
					fflush(stdin);
	            }
	        break;

	        case 3:
	            {
					printf("Digite a posicao do usuario que deseja alterar:");
					scanf("%d",&id_a);
					int aux3=id_a-1;
                    fflush(stdin);
		            printf("Cadastre um novo nome:\n");
		            gets(contatos[aux3].nome);
                    fflush(stdin);
	                printf("Cadastre um novo email:\n");
	                gets(contatos[aux3].email);
                    fflush(stdin);
	                printf("Cadastre um novo telefone:\n");
	                gets(contatos[aux3].num_tel);
                    fflush(stdin);
	                printf("Cadastre um novo endereco:\n");
	                gets(contatos[aux3].endereco);
                    fflush(stdin);
	                printf("Cadastre o novo Estado:\n");
	                gets(contatos[aux3].estado);
	                fflush(stdin);
	            }
	        break;
	    }

		fflush(stdin);
        printf("Deseja cadastrar mais uma pessoa? Digite 1\nDeseja consultar uma pessoa? Digite 2\nDeseja alterar uma pessoa? Digite 3\nDeseja sair? Digite 4\n");
        scanf("%d", &condicao);

        if(condicao==1){
            id_l=condicao;
            pos=pos+1;
        }
        if(condicao==2){
            id_l=condicao;
        }
        if(condicao==3){
            id_l=condicao;
        }

	}

    return 0 ;
}
