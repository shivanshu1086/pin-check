#include<stdio.h>
#include<conio.h>
#include<string.h>
#include <stdlib.h>
#include <dos.h>
#include <time.h>
#include <windows.h>
#include <unistd.h>

main()
{
 int i,b;
 char chr[5];
 printf("Enter the pin number of your ATM\n");
 for(i=0;i<4;i++)
 {
    chr[i]=getch();
    printf("*");
 }
 chr[4]='\0';
 b=strcmp("abcd",chr);
 if(b==0)
 {
    printf("Checking pin......\n");
    Sleep(3000);
    printf("Congo!! your pin is correct\n");
 }
 else
 {
    printf("Checking the pin......\n");
    Sleep(3000);
    printf("oh oh...you have entered wrong pin");
 }
 return 0;
 }
