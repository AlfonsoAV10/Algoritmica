#include <stdio.h>
#include <conio.h>

int main()
{
  int caso;


  printf("Puntaje 0-10 ");
  printf("Dame el puntaje: ");
  scanf("%d",& caso);
  switch(caso)
  {
  case 10:
  printf("Tienes una A");
  break;

  case 9:
  printf("Tienes una A");
  break;
  case 8:
  printf("Tienes una B");
  break;
   case 7:
  printf("Tienes una C");
  break;
   case 6:
  printf("Tienes una D");
  break;
   default:printf("Tienes una F");
   break;
}
return 0;
}
