#include <stdio.h>

void iniciohtml() {
    printf("<html>\n");
    printf("  <head>\n");
    printf("    <meta charset=\"UTF-8\">\n");
}

void meiohtml() {
    printf("  </head>\n");
    printf("  <body>\n");
}


void fimhtml() {
    printf("  </body>\n");
    printf("</html>\n");
}

void aba(char texto[]) {
    printf("    <title>%s</title>\n", texto);
}

void titulo(char t[]) {
    printf("    <h1>%s</h1>\n", t);
}

int main() {
    printf("Content-type: text/html\n\n");
    printf("<!DOCTYPE html>\n");
    printf("<html lang=\"pt-BR\">\n");

    iniciohtml();                    
    aba("Segunda página");
    meiohtml();
    titulo("Usando argumentos");
    fimhtml();

    return 0;
}
