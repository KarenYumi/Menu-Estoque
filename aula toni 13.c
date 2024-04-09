#include <stdio.h>
#include <stdlib.h>

// modelagem de dados
int quantidade[10];
char produto[10][20];
float valor [10];

// historico de venda

char cliente [10][20];
float total [10];
char cproduto [10][20];

int k;
k=0;
char resp;

void cadastro()
{
    system("cls");
    printf("\n............................................");
    printf("\n...........Controle de Cadastro.............");
    printf("\n................Cadastro....................");


    do{
        k++;
        printf("\n...........................................");
        printf("\n            Produto Codigo %d ",k);
        printf("\n...........................................");
        printf("\nInforme o nome do produto: ");
        fgets(produto[k],20,stdin);
        fflush(stdin);

        printf("\nInforme a quantidade em estoque: ");
        scanf("%d", &quantidade[k]);
        fflush(stdin);

        printf("\nInforme o valor unitario do produto: ");
        scanf("%f", &valor[k]);
        fflush(stdin);

        printf("\nPretende continuar o cadastro (s/n): ");
        scanf(" %c", resp);
        resp = toupper(resp);
        fflush(stdin);
    }while(resp != 'N');
}
void pesquisa()
{
    char pesq[20];
    int i=0, achou=0;

    system("cls");
    printf("\n............................................");
    printf("\n............Controle de Pequisa.............");
    printf("\n.................Pesquisa...................");

    printf("\nInforme o produto a ser pesquisado");
    fgets(pesq,20,stdin);
    fflush(stdin);

    while(i<=k){
        i++;
        if(strcmp(pesq,produto[i])==0)
        {
            printf("\nProduto Dispositivo em Estoque");
            printf("\nQuantidade %d", quantidade[i]);
            printf("\nValor do produto %.2f", valor[i]);
            system("\n pause");
            achou = 1;
            break;

        }
    }

}



int main()
{

int op;
do{
    system("cls");
    printf("\n ---------------------------------------------");
    printf("\n ********** CONTROLE DE ESTOQUE **************");
    printf("\n ************   ADS - MANHÃ ******************");
    printf("\n   [1] Cadastro de Produtos                   ");
    printf("\n   [2] Pesquisa de Produtos                   ");
    printf("\n   [3] Relatorio dos Itens em Estoque         ");
    printf("\n   [4] Baixa & Vendas de Produtos             ");
    printf("\n   [5] View de Vendas                         ");
    printf("\n   [6] Sair do Sistema                        ");
    printf("\n ---------------------------------------------");
    printf("\n Escolha a Opção Desejada ");
    scanf("%d",&op);
    fflush(stdin);

    switch(op){
        case 1:
            cadastro();
            break;
        case 2:
            pesquisa();
            break;


    }


}while(op != 6);



}

