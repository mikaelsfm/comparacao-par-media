/* Fazer um programa que recebe 3 valores inteiros do usuário e mostra o maior deles, o
menor deles, os valores pares e a média. */

#include <stdio.h>

int compararnumeros (int a, int b, int c);
int par (int a, int b, int c);
int media (int a, int b, int c);

int main () {
    int v1, v2, v3;

    printf("Digite um numero inteiro: ");
    scanf("%d", &v1);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &v2);

    printf("Digite outro numero inteiro: ");
    scanf("%d", &v3);

    compararnumeros(v1, v2, v3);
    par (v1, v2, v3);
    media (v1, v2, v3);

    return 0;

}
int compararnumeros (int a, int b, int c) {
    if(a > b && a > c && b > c) {
        printf("%d eh o maior numero\n", a);
        printf("%d eh o menor numero\n", c);
    }
    else if(a > b && a > c && c > b) {
        printf("%d eh o maior numero\n", a);
        printf("%d eh o menor numero\n", b);
    }
    else if (b > a && b > c && a > c) {
        printf("%d eh o maior numero\n", b);
        printf("%d eh o menor numero\n", c);
    }
    else if (b > a && b > c && c > a) {
        printf("%d eh o maior numero\n", b);
        printf("%d eh o menor numero\n", a);
    }
    else if (c > a && c > b && a > b) {
        printf("%d eh o maior numero\n",c);
        printf("%d eh o menor numero\n", b);
    }
    else {
        printf("%d eh o maior numero\n",c);
        printf("%d eh o menor numero\n", a);
    }
}
int par (int a, int b, int c) {
    if (a % 2 == 0) {
        printf("%d eh par\n", a);
    }
    else if (b % 2 == 0) {
        printf("%d eh par\n", b);
    }
    else if (c % 2 == 0) {
        printf("%d eh par\n", c);
    }
}
int media (int a, int b, int c) {
    float m = (a + b + c)/3 ;
    printf("%.1f eh a media\n", m);
}