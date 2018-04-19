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

int primeiroDiaDaSemana (int m, int y) {
  int n,d;
  n = 1 + 2*m + (3*(m+1)/5) + y + (y/4) - (y/100) + (y/400) + 2;
  d = n % 7;

  return d;

}

void imprimirDiasSemana() {
  printf("|D|S|T|Q|Q|S|S|\n");
}

void meteDias() {
  int l,c;
  for(l=0;l<5;l++){
    for(c=0;c<7;c++){
      printf("%i\n",m[l][c]);
    }
  }

  int pDiaDoMes () {
    int d;
    int day;
    int month;
    int year;
    int p;
    d = (day + 2*(month) + (3*(month+1)/5) + year + (year/4) - (year/100) + (year/400) + 2) % 7;

    printf("D = %d\n",d);

    if (d==5) { printf("O dia e Quinta\n");p=4;}
    if (d==4) { printf("O dia e Quarta\n");p=3;}
    if (d==3) { printf("O dia e terça\n");p=2;}
    if (d==2) { printf("O dia e segunda\n");p=1;}
    if (d==1) { printf("O dia e Domingo\n");p=0;}
    if (d==0) { printf("O dia e sabado\n");p=6;}
    if (d==6) { printf("O dia e sexta\n");p=5;}
    if (d>6 || d<0) {printf("Shit went wrong!");}

    printf("Returned D,success\n");
    return p;
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
