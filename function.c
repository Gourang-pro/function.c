#include<stdio.h>
#include<conio.h>

void add() 
{
    int a=10,b=20,c;
    c=a+b;
    printf("\naddition %d\n",c);    
}
void sub()
{
    int a=20,b=10,c;
    c=a-b;
    printf("substraction %d\n",c);
}
int main()
{
    add();     
    sub();

return 0;
}