#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Content-type: text/html\n\n");

    char *dadosRecebidos = getenv("QUERY_STRING");

    printf("<!DOCTYPE html>\n");
    printf("<html lang=\"pt-BR\">\n");
    printf("<head>\n");
    printf("<meta charset=\"UTF-8\">\n");
    printf("<title>Dados Recebidos</title>\n");
    printf("</head>\n");
    printf("<body>\n");
    printf("<h1>Resultado do Envio</h1>\n");
    
    if (dadosRecebidos != NULL) {
        printf("<p>Recebido: %s</p>\n", dadosRecebidos);
    } else {
        printf("<p>Nenhum dado recebido.</p>\n");
    }

    printf("</body>\n");
    printf("</html>\n");

    return 0;
}
