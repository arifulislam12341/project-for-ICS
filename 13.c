#include "stdio.h"
#include "conio.h"

void main()
{
  int w,h;
  int area;
  printf("\nEnter the width of the rectangle ");
  scanf("%d",&w);
  printf("\nEnter the height of the rectangle ");
  scanf("%d",&h);
  area=w*h;
  printf("\nThe area of a rectangle is %d",area);
getch();
}
