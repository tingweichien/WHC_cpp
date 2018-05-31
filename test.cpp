#include <stdio.h>
#include <iostream>
#include <string.h>
#include <cstdio>
using namespace std;

class CTest
{
  public:
    int m_ix;
    float m_fy; //DWORD m_nx;
    int m_nx;
};

int main(void)
{

    int b = 1;
    double a = b;
    printf("a=%lf\n", a);
    printf("&a=%p\n", &a);
    printf("b=%d\n", b);

    int c = 1;
    float *d = (float *)&c;
    printf("d=%p\n", d);
    printf("&c=%p\n", &c);
    printf("c=%d\n", c);
    printf("*d=%d\n", *d);

    c = 5;
    float e = *d;
    printf("e=%f\n", e);

    float f = *(int *)d; //d is the pointer that changes the int pointer type and allocate the value to f
    printf("f=%f\n", f);

    char *g = (char *)&f;
    printf("g=%s\n", *g);
    printf("g=%p\n", g);
    double gf = *(float *)g;
    printf("gf=%lf\n", gf);

    strncpy(g, "1234", 4); //g="1234";
    printf("g=%s\n", g);
    printf("g[0]=%c\n", g[0]);
    printf("g[1]=%c\n", g[1]);
    printf("g[2]=%c\n", g[2]);
    printf("g[3]=%c\n", g[3]);

    float cc = 3;
    int dd = 55;
    CTest *p = NULL; //DWORD cc = 3;
    float bb = 2;
    int aa = 1;
    p = (CTest *)&aa;
    printf("p=%p\n", p);
    printf("&aa=%p\n", &aa);
    printf("&bb=%p\n", &bb);
    printf("&cc=%p\n", &cc);
    printf("&cc=%p\n", &dd);

    //p->m_nx = 101;
    printf("p->m_ix=%d\n", p->m_ix);
    printf("p->m_fy=%f\n", p->m_fy);
    printf("p->m_nx=%d\n", p->m_nx);

    int z = 0;

    return 0;
}
