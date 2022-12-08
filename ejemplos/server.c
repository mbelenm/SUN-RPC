#include "calcular.h"

int *sumar_1_svc(int a, int b, struct svc_req *rqstp)
{
    static int r;
    r = a + b;
    return (&r);
}

int *restar_1_svc(int a, int b, struct svc_req *rqstp)
{
    static int r;
    r = a - b;
    return (&r);
}
