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

int meses(int month, int year) {
  if (month == 2) {if (isBissexto(year) == 1) {return 29;} else {return 28;}}
  
  if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
    return 31;}
    
    return 30;}
    
    int primeiroDiaMes (int month, int year) {
      int n,p;
      n = (1 + 2*(month) + (3*(month+1)/5) + year + (year/4) - (year/100) + (year/400) + 2) % 7;
      
      if (n==5) {p=4;}
      if (n==4) {p=3;}
      if (n==3) {p=2;}
      if (n==2) {p=1;}
      if (n==1) {p=0;}
      if (n==0) {p=6;}
      if (n==6) {p=5;}
      if (n>6 || n<0) {printf("Shit went wrong!");}
      return p;
      
    }
    
    void imprimirDiasSemana() {
      printf("| D | S | T | Q | Q | S | S |\n");
    }
    
    void meteDias (int month, int year) {
      int dia = 1;
      int l,c;
      int d = primeiroDiaMes(month, year);
      int h = meses(month, year);
      
      
      
      for (l = 0; l < 6; l++) {
        for (c = 0; c < 7; c++) {
          if ((l == 0 && c < d) || dia > h) { printf("    ");} else {
            if (dia < 10) { printf("  %d ", dia);}
            else {printf(" %d ", dia);}
            dia++;
          }
        }
        printf("\n");
      }
      
    }
    
    
    void main() {
      int year, month;
      printf("Input the year.\n");
      scanf("%d",&year);
      printf("Input the month.\n");
      scanf("%d",&month);
      imprimirDiasSemana();
      meteDias(month,year);
    }
