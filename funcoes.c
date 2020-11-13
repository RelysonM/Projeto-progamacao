#include "assinaturas.h"

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

void login(char* nome, char* senha){
	char comparaNome[20], comparaSenha[11];
	int comparacao1, comparacao2;
	printf("Digite seu nome: ");
	scanf("%s", comparaNome);
	printf("digite sua senha: ");
	scanf("%s", comparaSenha);
	comparacao1 = strcmp (nome,comparaNome);
	comparacao2 = strcmp (senha,comparaSenha);
	if (comparacao1 == 0 && comparacao2 == 0){
		printf("login realizado com sucesso");
	}else{
		printf("Algum dos campos a cima não foi preenchido corretamente\n");
		printf("Por favor inseira os dados novamente\n");
		login(nome, senha);
	}

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


int dataValida(int dd, int mm, int aa) {
	int maiorDia;
	if (aa < 0 || mm < 1 || mm > 12 || dd < 1)
 		return 0;
	if (mm == 2) {
 		if (bissexto(aa)){
 			maiorDia = 29;
		}else{
 			maiorDia = 28;
		}
 	} else if (mm == 4 || mm == 6 ||mm == 9 || mm == 11) {
 		maiorDia = 30;
 	} else {
 		maiorDia = 31;
		if (dd > maiorDia){
            return 0;
        }
    }
 	return 1;
}

int bissexto(int aa) {
	if ((aa % 4 == 0) && (aa % 100 != 0)) {
 		return 1;
 	} else if (aa % 400 == 0) {
 		return 1;
 	} else {
 		return 0;
 	}
}