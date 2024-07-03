//Write a program containing function which, whenever called, draws a horizontal line at the cursor point.

#include <stdio.h>

void draw_horizontal_line(int length);

int main() {
    int length=30,n;
    printf("Enter 1 to Drawing horizontal lines at current cursor positions:\n");
    scanf("%d",&n);
    if(n)
        draw_horizontal_line(length);
    return 0;
}

void draw_horizontal_line(int length)
{
    for(int i=0;i<length;i++)
        printf("-");
}