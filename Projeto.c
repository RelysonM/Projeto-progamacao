#include "assinaturas.h"

int main(void) {
	char escolha, escolhaFuncao, nome[20], senha[11];

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
				printf("==Área de Tarot virtual==\n");
				printf(" ==Em desenvolvimento==\n");
				printf("\n");
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
				case '4':
					relatorio();
					break;
				}	

			}while (escolhaFuncao != '0');
		}	

	}while (escolha != '0');
	return 0;
}


