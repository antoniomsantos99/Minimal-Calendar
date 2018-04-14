#include <stdio.h>

int isBissexto(int year) {
    if (year % 4 != 0) {
        return 0;
    } else if (year % 100 != 0) {
        return 1;
    } else if (year % 400 != 0) {
        return 0;
    } else {return 1;}
}

int meses31(int month) {
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (( month < 8 && month % 2 != 0) || month % 2 == 0){
            return 1;
        }
        return 0;
    }
}

void imprimirDiasSemana() {
    printf("|D|S|T|Q|Q|S|S|\n");
}

void meteDias() {
    char md[50];
    int d;
    int i = 0;
    for(d=0;d < 31;d++) {
            if (i % 8 == 0) {
                md[i]='\n';
                i++;
            }
            else {
                md[i] = d;
                i++;
            }
    }
    md[i] = "\0";
    printf("%s\n",md);
}

void main() {
    int year, month;
    printf("Introduza o ano.\n");
    scanf("%d",&year);
    printf("Introduza o mês\n");
    scanf("%d",&month);
    imprimirDiasSemana();
    meteDias();
}
