#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int escolhaJogador, escolhaComputador;
    int vitoriasJogador = 0, vitoriasComputador = 0;

    srand(time(NULL)); // Inicializa o gerador de números aleatórios

    printf("=== Jogo: Pedra, Papel ou Tesoura ===\n");
    printf("Primeiro a ganhar 3 vezes vence o jogo!\n\n");

    while (vitoriasJogador < 3 && vitoriasComputador < 3) {
        printf("Escolhe uma opcao:\n");
        printf("1 - Pedra\n");
        printf("2 - Papel\n");
        printf("3 - Tesoura\n");
        printf("Tua escolha: ");
        scanf("%d", &escolhaJogador);

        if (escolhaJogador < 1 || escolhaJogador > 3) {
            printf("Escolha inválida! Tenta novamente.\n\n");
            continue;
        }

        escolhaComputador = rand() % 3 + 1;

        // Mostrar escolha do computador
        printf("O nigga escolheu: ");
        switch (escolhaComputador) {
        case 1: printf("Pedra\n"); break;
        case 2: printf("Papel\n"); break;
        case 3: printf("Tesoura\n"); break;
        }

        // Determinar o vencedor da ronda
        if (escolhaJogador == escolhaComputador) {
            printf("Empate!\n");
        }
        else if ((escolhaJogador == 1 && escolhaComputador == 3) ||
            (escolhaJogador == 2 && escolhaComputador == 1) ||
            (escolhaJogador == 3 && escolhaComputador == 2)) {
            printf("Ganhaste esta ronda!\n");
            vitoriasJogador++;
        }
        else {
            printf("O nigga ganhou esta ronda!\n");
            vitoriasComputador++;
        }

        printf("Pontuacao -> Tu: %d | Nigga: %d\n\n", vitoriasJogador, vitoriasComputador);
    }

    // Resultado final
    if (vitoriasJogador == 3) {
        printf("Parabéns! Venceste o jogo!\n");
    }
    else {
        printf("O nigga venceu o jogo. Boa sorte na proxima!\n");
    }

    return 0;
}
