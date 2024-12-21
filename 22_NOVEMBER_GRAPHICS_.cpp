#include<stdio.h>
#include<graphics.h>
void main()
{
    int gd=DETECT,gm;
    initgraph(&gd,&gm,"");
    rectangle(200,200,400,300);
    getch();
}