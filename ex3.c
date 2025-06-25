#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    printf("Content-type: text/html\n\n");

    char *query = getenv("QUERY_STRING");

    printf("<!DOCTYPE html>\n");
    printf("<html lang=\"pt-BR\">\n");
    printf("<head>\n");
    printf("<meta charset=\"UTF-8\">\n");
    printf("<title>Resultado do Cálculo</title>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("<h1>Calculando o tempo passado desde o ano informado</h1>\n");

    if (query != NULL) {
        char *posicao = strchr(query, '=');
        if (posicao != NULL) {
            char *valor_ano = posicao + 1;
            int ano = atoi(valor_ano);
            int ano_atual = 2025;

            if (ano > 0 && ano <= ano_atual) {
                int diferenca = ano_atual - ano;
                printf("<p>O ano informado foi: %d</p>\n", ano);
                printf("<p>Tempo passado até %d: %d anos</p>\n", ano_atual, diferenca);
            } else {
                printf("<p>Ano inválido ou futuro!</p>\n");
            }
        } else {
            printf("<p>Formato inválido da QUERY_STRING.</p>\n");
        }
    } else {
        printf("<p>Nenhum dado recebido.</p>\n");
    }

    printf("</body>\n");
    printf("</html>\n");

    return 0;
}
