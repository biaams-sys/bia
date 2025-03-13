#include <stdio.h>
#include <locale.h>

int main() {
    char nome[100], rg[20], nascimento[11], chavePix[30], numerocartao[20], validade[6], cvv[4], tipoPagamento[20], nomeCompleto[100], pedidoReal[300];
    int pagamento, pedidos, tipoquarto; 
    float valorPagamento;

    printf ("Bom dia, somos o Hotel Ritz e estaremos disponiveis durante a sua estadia! Para fazer checkin vamos pedir algumas informações.");
    printf("\nDigite o seu nome completo: \n");
    scanf(" %[^\n]", nome); 
    printf("\nDigite o seu rg: \n");
    scanf("%s", rg); 
    printf("\nDigite a sua data de nascimento (dd/mm/aaaa): \n");
    scanf("%s", nascimento); 

    printf ("Selecione o tipo de quarto desejado\n");
    printf("1- quarto normal (R$150,00 )\n"); 
    printf("2- quarto medio(R$250,00)\n"); 
    printf("3- quarto premium(R$500,00)\n ");
    printf("4- quarto solteiro(R$100,00)\n ");
    scanf("%d", &tipoquarto);

    switch (tipoquarto) {
    case 1:
      valorPagamento = 150.00;
      printf("O preço do quarto escolhido é R$ %.2f\n", valorPagamento);

      printf("Escolha a sua forma de pagamento desejada:\n");
      printf("1- pix\n"); 
      printf("2- cartão\n"); 
      printf("3- dinheiro\n ");
      scanf("%d", &pagamento);
      switch (pagamento) {
        case 1: 
           printf(tipoPagamento, "pix"); 
           printf("Digite a chave Pix: ");
           scanf("%s", chavePix);
           printf("Pagamento via Pix realizado com sucesso! Chave: %s, Valor: R$ %.2f\n", chavePix, valorPagamento);
           break; 
        case 2: 
           printf(tipoPagamento, "cartão"); 
           printf("Pagamento via Cartão selecionado.\n");
           printf("Digite o número do cartão: ");
           scanf("%s", numerocartao);
           printf("Digite a data de validade (MM/AA): ");
           scanf("%s", validade);
           printf("Digite o CVV: ");
           scanf("%s", cvv);
           printf("Pagamento via Cartão realizado com sucesso! Número: %s, Valor: R$ %.2f\n", numerocartao,valorPagamento);
           break; 
        case 3: 
           printf(tipoPagamento, "dinheiro"); 
           printf("Pagamento em dinheiro realizado com sucesso, Valor: R$ %.2f\n", valorPagamento);
           break; 
        default: 
           printf("Opção inválida! Pagamento encerrado, tente novamente.\n"); 
           return 1;  
      }
      break;
    case 2:
      valorPagamento = 250.00;
      printf("O preço do quarto escolhido é R$ %.2f\n", valorPagamento);

      printf("Escolha a sua forma de pagamento desejada:\n");
      printf("1- pix\n"); 
      printf("2- cartão\n"); 
      printf("3- dinheiro\n ");
      scanf("%d", &pagamento);
      switch (pagamento) {
        case 1: 
           printf(tipoPagamento, "pix"); 
           printf("Digite a chave Pix: ");
           scanf("%s", chavePix);
           printf("Pagamento via Pix realizado com sucesso! Chave: %s, Valor: R$ %.2f\n", chavePix, valorPagamento);
           break; 
        case 2: 
           printf(tipoPagamento, "cartão"); 
           printf("Pagamento via Cartão selecionado.\n");
           printf("Digite o número do cartão: ");
           scanf("%s", numerocartao);
           printf("Digite a data de validade (MM/AA): ");
           scanf("%s", validade);
           printf("Digite o CVV: ");
           scanf("%s", cvv);
           printf("Pagamento via Cartão realizado com sucesso! Número: %s, Valor: R$ %.2f\n", numerocartao,valorPagamento);
           break; 
        case 3: 
           printf(tipoPagamento, "dinheiro"); 
           printf("Pagamento em dinheiro realizado com sucesso, Valor: R$ %.2f\n", valorPagamento);
           break; 
        default:
           printf("Opção inválida!\n");
           return 1;
      }
      break;
    case 3:
      valorPagamento = 400.00;
      printf("O preço do quarto escolhido é R$ %.2f\n", valorPagamento);

      printf("Escolha a sua forma de pagamento desejada:\n");
      printf("1- pix\n"); 
      printf("2- cartão\n"); 
      printf("3- dinheiro\n ");
      scanf("%d", &pagamento);
      switch (pagamento) {
        case 1: 
           printf(tipoPagamento, "pix"); 
           printf("Digite a chave Pix: ");
           scanf("%s", chavePix);
           printf("Pagamento via Pix realizado com sucesso! Chave: %s, Valor: R$ %.2f\n", chavePix, valorPagamento);
           break; 
        case 2: 
           printf(tipoPagamento, "cartão"); 
           printf("Pagamento via Cartão selecionado.\n");
           printf("Digite o número do cartão: ");
           scanf("%s", numerocartao);
           printf("Digite a data de validade (MM/AA): ");
           scanf("%s", validade);
           printf("Digite o CVV: ");
           scanf("%s", cvv);
           printf("Pagamento via Cartão realizado com sucesso! Número: %s, Valor: R$ %.2f\n", numerocartao,valorPagamento);
           break; 
        case 3: 
           printf(tipoPagamento, "dinheiro"); 
           printf("Pagamento em dinheiro realizado com sucesso, Valor: R$ %.2f\n", valorPagamento);
           break; 
        default:
           printf("Opção inválida!\n");
           return 1;
      }
      break;
    case 4:
      valorPagamento = 100.00;
      printf("O preço do quarto escolhido é R$ %.2f\n", valorPagamento);

      printf("Escolha a sua forma de pagamento desejada:\n");
      printf("1- pix\n"); 
      printf("2- cartão\n"); 
      printf("3- dinheiro\n ");
      scanf("%d", &pagamento);
      switch (pagamento) {
        case 1: 
           printf(tipoPagamento, "pix"); 
           printf("Digite a chave Pix: ");
           scanf("%s", chavePix);
           printf("Pagamento via Pix realizado com sucesso! Chave: %s, Valor: R$ %.2f\n", chavePix, valorPagamento);
           break; 
        case 2: 
           printf(tipoPagamento, "cartão"); 
           printf("Pagamento via Cartão selecionado.\n");
           printf("Digite o número do cartão: ");
           scanf("%s", numerocartao);
           printf("Digite a data de validade (MM/AA): ");
           scanf("%s", validade);
           printf("Digite o CVV: ");
           scanf("%s", cvv);
           printf("Pagamento via Cartão realizado com sucesso! Número: %s, Valor: R$ %.2f\n", numerocartao,valorPagamento);
           break; 
        case 3: 
           printf(tipoPagamento, "dinheiro"); 
           printf("Pagamento em dinheiro realizado com sucesso, Valor: R$ %.2f\n", valorPagamento);
           break; 
        default:
           printf("Opção inválida!\n");
           return 1;
      }
      break;
    default:
      printf("Opção inválida!\n");
      return 1;
    }

    printf("\nEscolha uma opção:\n");
    printf("1 - Serviço de quarto\n");
    printf("2 - Fazer pedido\n");
    printf("3 - Sair\n");
    printf("Digite a opção desejada: ");
    scanf("%d", &pedidos);

    switch (pedidos) {
      case 1:
        printf("Você escolheu Serviço de quarto.\n");
        printf("Por favor, digite seu nome completo: ");
        scanf(" %c", nomeCompleto);
        printf("Seu pedido de serviço de quarto foi registrado");
        break;
      case 2:
        printf("Você escolheu Fazer pedido.\n");
        printf("Por favor, digite seu nome completo: ");
        scanf(" %c", nomeCompleto); 
        printf("Digite seu pedido: ");
        scanf(" %c", pedidoReal); 
        printf("Seu pedido foi registrado");
        break;
      case 3:
        printf("Obrigado por usar o serviço de quarto!\n");
        return 0; 
      default:
        printf("Opção inválida!\n");
    }

    return 0;
}