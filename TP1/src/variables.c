#include <stdio.h>

int main() {
    char c = 'A';
    signed char sc = -5;
    unsigned char uc = 250;

    short s = -123;
    signed short ss = -456;
    unsigned short us = 50000;

    int i = -1000;
    signed int si = -2000;
    unsigned int ui = 4000;

    long int li = -123456L;
    signed long int sli = -789012L;
    unsigned long int uli = 123456UL;

    long long int lli = -9876543210LL;
    signed long long int slli = -123456789LL;
    unsigned long long int ulli = 9876543210ULL;

    float f = 3.14f;
    double d = 2.718281828;
    long double ld = 1.23456789012345L;

    printf("char : %c\n", c);
    printf("signed char : %d\n", sc);
    printf("unsigned char : %u\n\n", uc);

    printf("short : %d\n", s);
    printf("signed short : %d\n", ss);
    printf("unsigned short : %u\n\n", us);

    printf("int : %d\n", i);
    printf("signed int : %d\n", si);
    printf("unsigned int : %u\n\n", ui);

    printf("long int : %ld\n", li);
    printf("signed long int : %ld\n", sli);
    printf("unsigned long int : %lu\n\n", uli);

    printf("long long int : %lld\n", lli);
    printf("signed long long int : %lld\n", slli);
    printf("unsigned long long int : %llu\n\n", ulli);

    printf("float : %f\n", f);
    printf("double : %lf\n", d);
    printf("long double : %Lf\n", ld);

    return 0;
}
