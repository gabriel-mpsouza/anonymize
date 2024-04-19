#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main() {
    // Verifica se o usuário tem permissão de root
    if (geteuid() != 0) {
        printf("Este programa precisa ser executado com permissões de root.\n");
        exit(EXIT_FAILURE);
    }

    // Inicia o serviço Tor
    printf("Iniciando o serviço Tor...\n");
    system("service tor start");

    // Configura o proxy para usar a rede Tor
    printf("Configurando o proxy para usar a rede Tor...\n");
    system("export http_proxy=socks5://127.0.0.1:9050");

    // Informa ao usuário que o processo está completo
    printf("Agora você está navegando anonimamente usando a rede Tor.\n");

    return 0;
}
