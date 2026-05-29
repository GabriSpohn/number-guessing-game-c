#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    printf("\n\n");
    printf("         __                                        \n");
    printf(" _(\\    |@@|                                      \n");
    printf("(__/\\__ \\--/ __                                  \n");
    printf("   \___|----|  |   __         Bem vindo ao         \n");
    printf("       \\ }{ /\\ )_ / _\\  Jogo de Adivinhação!    \n");
    printf("       /\\__/\\ \\__O (__                          \n");
    printf("      (--/\\--)    \\__/                           \n");
    printf("      _)(  )(_                                     \n");
    printf("     `---''---`                                    \n");
    printf("\n\n");

    int segundos = time(0);
    srand(segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande % 100;

    int nivel;
    printf("Qual nível de dificuldade?\n");
    printf("(1) Fácil (2) Médio (3) Difícil\n\n");
    printf("Escolha: ");
    scanf("%d", &nivel);

    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int acertou = 0;

    int numerodetentativas;

    switch(nivel){
        case 1:
            numerodetentativas = 20;
            break;

        case 2:
            numerodetentativas = 15;
            break;

        default:
            numerodetentativas = 6;
            break;
    }

    for(int i = 1; i <= numerodetentativas; i++){
        printf("Tentativa %d\n", tentativas);
        printf("Qual é o seu chute?\n");
        scanf("%d",&chute);

        if(chute < 0){
            printf("Você não pode chutar números negativos!\n");
            continue;
        }

        acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if(acertou)
        {
            break;
        }
        else if(maior)
        {
            printf("Seu chute foi maior que o número secreto!\n");
        }
        else
        {
            printf("Seu chute foi menor que o número secreto!\n");
        }
        tentativas++;

        double pontosperdidos = (abs)(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;

    }

    if(acertou) {
        printf("\n\n");
        printf("                   __ooooooooo__                         \n");
        printf("              oOOOOOOOOOOOOOOOOOOOOOo                    \n");
        printf("          oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo                \n");
        printf("       oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo             \n");
        printf("     oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo           \n");
        printf("   oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo         \n");
        printf("  oOOOOOOOOOOO*  *OOOOOOOOOOOOOO*  *OOOOOOOOOOOOo        \n");
        printf(" oOOOOOOOOOOO      OOOOOOOOOOOO      OOOOOOOOOOOOo       \n");
        printf(" oOOOOOOOOOOOOo  oOOOOOOOOOOOOOOo  oOOOOOOOOOOOOOo       \n");
        printf("oOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOo      \n");
        printf("oOOOO     OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO     OOOOo      \n");
        printf("oOOOOOO OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO OOOOOOo      \n");
        printf(" *OOOOO  OOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOOO  OOOOO*       \n");
        printf(" *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*       \n");
        printf("  *OOOOOO  *OOOOOOOOOOOOOOOOOOOOOOOOOOO*  OOOOOO*        \n");
        printf("   *OOOOOOo  *OOOOOOOOOOOOOOOOOOOOOOO*  oOOOOOO*         \n");
        printf("     *OOOOOOOo  *OOOOOOOOOOOOOOOOO*  oOOOOOOO*           \n");
        printf("       *OOOOOOOOo  *OOOOOOOOOOO*  oOOOOOOOO*             \n");
        printf("          *OOOOOOOOo           oOOOOOOOO*                \n");
        printf("              *OOOOOOOOOOOOOOOOOOOOO*                    \n");
        printf("                     *ooooooooo*                         \n");
        printf("\n\n");
        printf("Fim de Jogo!\n");
        printf("Você acertou em %d tentativas!\n", tentativas-1);
        printf("Total de pontos: %.2f", pontos);
    }
    else {
        printf("Você perdeu! Tente de novo!\n");
        printf("\n\n");
        printf("                                                          ..               \n");
        printf("                               ,,,                         MM .M           \n");
        printf("                           ,!MMMMMMM!,                     MM MM  ,.       \n");
        printf("   ., .M                .MMMMMMMMMMMMMMMM.,          'MM.  MM MM .M'       \n");
        printf(" . M: M;  M          .MMMMMMMMMMMMMMMMMMMMMM,          'MM,:M M'!M'        \n");
        printf(";M MM M: .M        .MMMMMMMMMMMMMMMMMMMMMMMMMM,         'MM'...'M          \n");
        printf(" M;MM;M :MM      .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.       .MMMMMMMM          \n");
        printf(" 'M;M'M MM      MMMMMM  MMMMMMMMMMMMMMMMM  MMMMMM.    ,,M.M.'MMM'          \n");
        printf("  MM'MMMM      MMMMMM @@ MMMMMMMMMMMMMMM @@ MMMMMMM.'M''MMMM;MM'           \n");
        printf(" MM., ,MM     MMMMMMMM  MMMMMMMMMMMMMMMMM  MMMMMMMMM      '.MMM            \n");
        printf(" 'MM;MMMMMMMM.MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMM            \n");
        printf("  ''.'MMM'  .MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM       MMMM           \n");
        printf("   MMC      MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM.      'MMMM          \n");
        printf("  .MM      :MMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMMM''MMM       MMMMM         \n");
        printf("  MMM      :M  'MMMMMMMMMMMMM.MMMMM.MMMMMMMMMM'.MM  MM:M.    'MMMMM        \n");
        printf(" .MMM   ...:M: :M.'MMMMMMMMMMMMMMMMMMMMMMMMM'.M''   MM:MMMMMMMMMMMM'       \n");
        printf("AMMM..MMMMM:M.    :M.'MMMMMMMMMMMMMMMMMMMM'.MM'     MM''''''''''''         \n");
        printf("MMMMMMMMMMM:MM     'M'.M'MMMMMMMMMMMMMM'.MC'M'     .MM                     \n");
        printf(" '''''''''':MM.       'MM!M.'M-M-M-M'M.'MM'        MMM                     \n");
        printf("            MMM.            'MMMM!MMMM'            .MM                     \n");
        printf("             MMM.             '''   ''            .MM'                     \n");
        printf("              MMM.                               MMM'                      \n");
        printf("               MMMM            ,.J.JJJJ.       .MMM'                       \n");
        printf("                MMMM.       'JJJJJJJ'JJJM   CMMMMM                         \n");
        printf("                  MMMMM.    'JJJJJJJJ'JJJ .MMMMM'                          \n");
        printf("                    MMMMMMMM.'  'JJJJJ'JJMMMMM'                            \n");
        printf("                      'MMMMMMMMM'JJJJJ JJJJJ'                              \n");
        printf("                         ''MMMMMMJJJJJJJJJJ'                               \n");
        printf("                                 'JJJJJJJJ'                                \n");
        printf("\n\n");
    }
}
