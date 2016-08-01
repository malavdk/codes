#include<stdio.h>
sound();
delay();
nosound();
int main()
{
	int i;
    printf(“Making sound………………”);
    for(i=0;i<100;i++)
      {
          sound(250*i);
          delay(250);
          nosound();
      }
	  getch();
}


