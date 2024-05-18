/*Write a program to read co-ordinates of two points from user and calculate 
  the distance between them and slope of straight line joining them.*/
#include<stdio.h>
#include<math.h>

int main()
{
    int x1,y1;
    printf("\nEnter first coordinate: ");
    scanf("%d%d",&x1,&y1);
    int x2,y2;
    printf("\nEnter second coordinate: ");
    scanf("%d%d",&x2,&y2);

    float distance=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    float slope=(y2-y1)/(x2-x1);

    printf("\nDistance: %f",distance);
    printf("\nSlope: %f",slope);
    return 0;
}