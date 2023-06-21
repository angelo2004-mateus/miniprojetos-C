#include <stdio.h>
#include <stdlib.h>

int main()
{

    float totalGasto, valorVariavel;
    int escolha, meses, i;
    printf(" Digite o total gasto: ");
    scanf("%f", &totalGasto);

    printf("\n MODO DE PAGAMENTO: \n\n [1] A VISTA \n [2] EM 2 VEZES SEM JUROS \n [3] 3 A 10 VEZES COM 3% DE JUROS AO MES (ACIMA DE 100R$) \n\n DIGITE: ");
    scanf("%d", &escolha);

    if (escolha == 1) {
        totalGasto = totalGasto - (totalGasto*10/100);
        printf("\n %2.f R$", totalGasto);

    }else if (escolha == 2) {
        totalGasto = totalGasto/2;
        printf("\n %2.f POR MES", totalGasto);

    } else if (escolha == 3) {
        if(totalGasto <= 100){
            printf(" NEGADO");
            return 0;
        };

        printf(" ESCOLHA ENTRE 3 A 10 MESES PARA DIVIDIR COM 3% DE JUROS AO MES: ");
        scanf("%d", &meses);

        if(meses > 10 || meses < 3){
            printf("\n OPCAO INVALIDA");
            return 0;


        };

        //totalGasto = (totalGasto + totalGasto*3/100)/meses);

        valorVariavel = totalGasto;

        for(i = 3; i<= meses; i++){
            totalGasto = valorVariavel * 1.03;
            valorVariavel = totalGasto;
        }


        printf("\n \n VALOR TOTAL: %f", totalGasto);
        printf("\n \n PARCELAS: %f", totalGasto/meses);

    };



    return 0;



}
