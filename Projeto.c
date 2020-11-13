#include "assinaturas.h"

int main(void) {
	char escolha, escolhaFuncao, nome[20], senha[11];
	int dd, mm, aa;

	do{
		escolha = menuCadastro();
		switch (escolha){
		case '1' :
			printf("Digite seu nome: ");
			scanf("%s", nome);
			printf("Digite sua data de nascimento\n");
			printf("Dia: ");
			scanf("%d", &dd);
			printf("Mês: ");
			scanf("%d", &mm);
			printf("Ano: ");
			scanf("%d", &aa);
			if (dataValida(dd, mm, aa)){
				printf("data válida!");
			}else{
				printf("data inválida tente novamente");
				break;
			}
			printf("Digite uma senha de até 10 caracteres: ");
			scanf("%s", senha);
			printf("\n");
			printf("Cadastro concluido com sucesso, efetue o login!\n");
			break;
		case '2':
			alterar();
			break;
		case '3': 
			excluir();
			break;
		case '4':
			login(nome, senha);
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


