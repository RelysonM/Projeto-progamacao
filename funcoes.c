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
    printf("##  4 - Relatório de consulta ##\n");
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
    char nome[30], senha[11], email[30];
    int aa, mm, dd;
	printf("Digite seu nome: ");
	scanf("%s", nome);
    printf("Digite seu E-mail: ");
    scanf("%s", email);
    validaEmail(email);
    while(validaEmail(email)){
        printf("Digite seu E-mail novamente: ");
        scanf("%s", email);
    }
	printf("Digite sua data de nascimento\n");
	printf("Dia: ");
	scanf("%d", &dd);
	printf("Mês: ");
	scanf("%d", &mm);
	printf("Ano: ");
	scanf("%d", &aa);
    dataValida(dd, mm, aa);
    while(!(dataValida(dd, mm, aa))){
        printf("\nData invalida! Digite novamente: ");
        printf("\nDigite sua data de nascimento\n");
	    printf("Dia: ");
	    scanf("%d", &dd);
	    printf("Mês: ");
	    scanf("%d", &mm);
	    printf("Ano: ");
	    scanf("%d", &aa);
    }
	printf("\nDigite uma senha de até 10 caracteres: ");
	scanf("%s", senha);
	printf("\n");
	printf("Cadastro concluido com sucesso, efetue o login!\n");
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

// função feita por @flaviusgorgonio
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


int validaEmail(char* email) {
    int tam=strlen(email);
    int arroba = 0, ponto = 0, antesPonto = 0, depoisPonto = 0, i;

    for (i = 0; i < tam; i++) {
        char c = email[i];
        if(c == '@') {
            if (arroba){
               break; // não pode ter uma segunda @
            }
            arroba = 1;
            if (i < 3){
                break; // se @ vier antes de 3 caracteres, erro
            }
        }else if (arroba) { // se já encontrou @
            if (ponto) { // se já encontrou . depois de @ 
            depoisPonto++;
            }else if(c == '.') {
                ponto = 1;
                if (antesPonto < 3) {
                break; // se . depois de @ vier antes de 3 caracteres, erro
                }
            }else {
                antesPonto++;
            }
        }
    }

    if (i == tam && depoisPonto > 1){
        return 0;
    }
    return 1;
}

void relatorio(void){
	printf("==Área de Relatórios==\n");
	printf("==Em desenvolvimento==\n");
	printf("\n");
}