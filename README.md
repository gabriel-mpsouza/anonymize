# Anonymize

Este é um script em C que automatiza o procedimento de tornar-se anônimo usando a rede Tor no sistema operacional Linux. O script inicia o serviço Tor e configura o proxy para redirecionar o tráfego pela rede Tor.

## Pré-requisitos

- Sistema operacional Linux
- Serviço Tor instalado e configurado

## Como Usar

1. Compile o script usando um compilador C compatível. Por exemplo:

    ```bash
    gcc -o anonymize ANONYMIZE.c
    ```

2. Execute o script com permissões de root:

    ```bash
    sudo ./anonymize
    ```

3. O script iniciará o serviço Tor e configurará o proxy para redirecionar o tráfego pela rede Tor.

## Observações

- Certifique-se de ter permissões de root para executar o script, pois é necessário para iniciar o serviço Tor.
- Este script é um exemplo básico e pode precisar de ajustes dependendo da sua configuração específica.

## Autor

Criado por gabriel.mpsouza@outlook.com.br

## Licença

Este projeto está licenciado sob a Licença MIT. Consulte o arquivo LICENSE para obter mais detalhes.
