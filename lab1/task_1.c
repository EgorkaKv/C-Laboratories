#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int main() {
    puts("My first program"); //виведення повідомлення
    puts("Kvasenko");
    char s='E'; //визначення символу
    printf("Symbol %c = (%d)10S = (%#o)8S ",s,s,s);
    printf("= (%#x)16S size char=%d bait\n",s,sizeof(s));

    int a=78; //визначення цілої змінної
    printf("a=%d size int=%d bait\n",a,sizeof(a));

    float b=56.23; //визначення дійсної змінної
    printf("b=%f=%e size float=%d bait\n",b,b,sizeof(b));

    short c=-15;
    printf("c=%d size short=%d bait\n",c,sizeof(c));

    long d=29384;
    printf("d=%1d size long=%d bait\n",d,sizeof(d));

    double e=-76.4302;
    printf("e=%lf=%le size double=%d bait\n",e,e,sizeof(e));
    puts("\nPress any key and Enter...\n");
    getchar();
    return 0;
    }
