#include <stdio.h>
#include <stdlib.h>
int main(){
	char v [8];
	int quantabacaxi;
	int quantmaca;
	int quantpera;
	float calc;
	
	    do{ printf("======MENU FRUTAS======\n"); 
	        printf("1 => ABACAXI-- 5,00 a unidade\n");
	        printf("2 => MACA -- 1,00 a unidade\n");
	        printf("3 => PERA -- 4,00 a unidade\n");
	
	        printf("Indique a quantidade de cada fruta. Se nao quiser determinada fruta, digite 0:\n");
	        printf("ABACAXI: ");
	        scanf("%d",&quantabacaxi);
	        printf("MACA: ");
	        scanf("%d",&quantmaca);
	        printf("PERA: ");
	        scanf("%d",&quantpera);
	        calc = quantabacaxi*5.0 + quantmaca*1.0 + quantpera*4.0;
	        printf("O valor total da compra foi: %.2f\n",calc);
	
	        printf("Digite 'voltar' para retornar ao menu: ");
	        scanf("%s",&v);
	        system("cls");
	}while( v[8] = 'voltar');
	
	    return 0; 
}