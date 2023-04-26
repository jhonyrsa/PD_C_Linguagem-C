#include <stdio.h>

int main(void)
{
    int quantidade, codigo;
    float valorPedido;

    printf("\n\tCALCULADORA DE PEDIDOS INDIVIDUAIS\n\n");
    printf("ESPECIFICACAO    \tCODIGO\tPRECO\n");
    printf("Cachorro Quente  \t100   \tR$ 1.20\n");
    printf("Bauru Simples    \t101   \tR$ 1.30\n");
    printf("Bauru com Ovo    \t102   \tR$ 1.50\n");
    printf("Hamburguer       \t103   \tR$ 1.20\n");
    printf("Cheeseburguer    \t104   \tR$ 1.70\n");
    printf("Suco             \t105   \tR$ 2.20\n");
    printf("Refrigerante     \t106   \tR$ 1.00\n\n");

    printf("Digite o codigo do produto desejado: ");
    scanf("%d", &codigo);
    printf("Digite a quantidade desejada: ");
    scanf("%d", &quantidade);

    switch(codigo){
        case 100:
            valorPedido = quantidade*1.2;
            break;
        case 101:
            valorPedido = quantidade*1.3;
            break;
        case 102:
            valorPedido = quantidade*1.3;
            break;
        case 103:
            valorPedido = quantidade*1.2;
            break;
        case 104:
            valorPedido = quantidade*1.7;
            break;
        case 105:
            valorPedido = quantidade*2.2;
            break;
        case 106:
            valorPedido = quantidade*1.0;
            break;
        default:
            printf("\nCodigo informado inexistente.\n");
    }
    if(codigo>=100 && codigo<=106)
        printf("\nValor do pedido: R$ %.2f.\n", valorPedido);

    return 0;
}
