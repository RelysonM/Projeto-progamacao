#include <stdio.h>

void menuCadastro(void);
void menuFuncao(void);


int main(void) {
    printf("================================\n");
	printf("==== Bem vindo à SIG-Aninha ====\n");
    printf("====== sua cigana virtual ======\n");
	printf("================================\n");
    menuCadastro ();
    menuFuncao ();
	return 0;
}


void menuCadastro(void) {
	printf("################################\n");
    printf("##            Menu            ##\n");
    printf("################################\n");
    printf("##  1 - Cadastrar usuário     ##\n");  
	printf("##  2 - Alterar cadastro      ##\n");
	printf("##  3 - Excluir usuário       ##\n");
	printf("##  4 - Login                 ##\n");
	printf("##  0 - Sair                  ##\n");
	printf("################################\n");
	printf("\n");
}

void menuFuncao(void) {
	printf("################################\n");
	printf("##       Bem vind@ nome       ##\n");
	printf("################################\n");
	printf("##  1 - Horóscopo semanal     ##\n");
	printf("##  2 - Mais sobre seu sígno  ##\n");
	printf("##  3 - Tarot virtual         ##\n");       
	printf("##  0 - Alterar usuário       ##\n");
	printf("################################\n");
	printf("\n");
}