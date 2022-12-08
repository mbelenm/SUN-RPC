#include "calcular.h"

void main(int argc, char **argv)
{
    char *host;
    CLIENT *sv;
    int res;
    host = argv[1];
    sv = clnt_create(host, calcular, UNO, "tcp");
    if (sv == NULL)
    {
        clnt_pcreateerror(host);
        exit(0);
    }
    res = *sumar_1(5, 2, sv);
    if (res == NULL)
    {
        clnt_perror(sv, "call failed");
        exit(0);
    }
    printf("5 + 2 = %d\n", res);
    clnt_destroy(sv);
    exit(0);
}
