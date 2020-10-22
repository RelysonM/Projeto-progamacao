#include <stdio.h>

char menuCadastro(void);
char menuFuncao(void);
void cadastro(void);
void alterar(void);
void login(void);
void excluir(void);
void horoscopo(void);
void signo(void);
void tarot(void);


int main(void) {
	char escolha, escolhaFuncao;
	do{
		escolha = menuCadastro();
		switch (escolha){
		case '1' :
			cadastro();
			break;
		case '2':
			alterar();
			break;
		case '3': 
			excluir();
			break;
		case '4':
			login();
			do{
				escolhaFuncao = menuFuncao();
				switch (escolhaFuncao){
				case '1' :
					horoscopo();
					break;
				case '2':
					signo();
					break;
				case '3': 
					tarot();
					break;
				}	

			}while (escolhaFuncao != '0');
		}	

	}while (escolha != '0');
	return 0;
}


char menuCadastro(void) {
	char opcao;
	printf("================================\n");
	printf("==== Bem vindo à SIG-Aninha ====\n");
	printf("====== sua cigana virtual ======\n");
	printf("================================\n");
	printf("################################\n");
	printf("##                            ##\n");
	printf("##            menu            ##\n");
	printf("##                            ##\n");
	printf("################################\n");
	printf("##                            ##\n");
	printf("##  1 - Cadastrar usuário     ##\n");
	printf("##  2 - Alterar cadastro      ##\n");
	printf("##  3 - Excluir usuário       ##\n");
	printf("##  4 - Login                 ##\n");
	printf("##  0 - Sair                  ##\n");
	printf("##                            ##\n");
	printf("################################\n");
	printf("    Escolha uma opção:");
	scanf("%c", &opcao);
	getchar();
	printf("\n");
	return opcao;
}

char menuFuncao(void) {
	char opcao;
	printf("################################\n");
	printf("##                            ##\n");
	printf("##         Bem vind@!         ##\n");
	printf("##                            ##\n");
	printf("################################\n");
	printf("##                            ##\n");
	printf("##  1 - Horóscopo semanal     ##\n");
	printf("##  2 - Mais sobre seu sígno  ##\n");
	printf("##  3 - Tarot virtual         ##\n");
	printf("##  0 - Alterar usuário       ##\n");
	printf("##                            ##\n");
	printf("################################\n");
	printf("    Escolha uma opção:");
	scanf("%c", &opcao);
	getchar();
	printf("\n");
	return opcao;
}

void cadastro(void){
	printf(" ==Área de cadastro==\n");
	printf("==Em desenvolvimento==\n");
	printf("\n");
}

void alterar(void){
	printf("==Área de alterar usuário==\n");
	printf("  ==Em desenvolvimento==\n");
	printf("\n");
}

void excluir(void){
	printf("==Área de Excluir cadastro==\n");
	printf("   ==Em desenvolvimento==\n");
	printf("\n");
}

void login(void){
	printf("  ==Área de login==\n");
	printf("==Em desenvolvimento==\n");
	printf("\n");
}

void horoscopo(void){
	printf("==Área de Horóscopo==\n");
	printf("==Em desenvolvimento==\n");
	printf("\n");
}

void signo(void){
	printf("==Área de Informações sobre signo==\n");
	printf("      ==Em desenvolvimento==\n");
	printf("\n");
}

void tarot(void){
	printf("==Área de Tarot virtual==\n");
	printf(" ==Em desenvolvimento==\n");
	printf("\n");
}

