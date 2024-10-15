#include <stdio.h>
#include <conio.h>

int main()
{
  int caso,num1,num2,res;
  char opc;
  do{


  printf("Cual de las Opciones deseas: \n 1-Suma \n 2-Resta \n 3-Multiplicacion \n 4-Division \n");
  scanf("%d",&caso);
  switch(caso)
  {
  case 1:
  printf("Dame el primer numero a sumar: ");
  scanf("%d",&num1);
  printf("Dame el segundo numero a sumar: ");
  scanf("%d",&num2);
  res=num1+num2;
  printf("El resultado es: %d",res);
  break;

 case 2:
  printf("Dame el primer numero a restar: ");
  scanf("%d",&num1);
  printf("Dame el segundo numero a restar: ");
  scanf("%d",&num2);
  res=num1-num2;
  printf("El resultado es: %d",res);
  break;
  case 3:
  printf("Dame el primer numero a multiplicar: ");
  scanf("%d",&num1);
  printf("Dame el segundo numero a multiplicar: ");
  scanf("%d",&num2);
  res=num1*num2;
  printf("El resultado es: %d",res);
  break;
  case 4:
  printf("Dame el primer numero a dividir: ");
  scanf("%d",&num1);
  printf("Dame el segundo numero a dividir: ");
  scanf("%d",&num2);
  res=num1/num2;
  printf("El resultado es: %d",res);
  break;
}
printf("\n""Quieres volver a repetir?");
  scanf("%s",&opc);
  }while (opc=='s'||opc=='S');
return 0;
}
