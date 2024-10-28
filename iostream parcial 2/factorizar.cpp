#include <conio.h>
#include <stdio.h>


int main()
{
    int num=0,res;
    printf("Calcula la Factorial de: ");
    scanf("%d", &num);
    for (int num2;num2<=10;num2++){
            res=num2*num;
         printf("%d"" * ""%d"" = ""%d""\n",num,num2,res);
    }



    return 0;
}
