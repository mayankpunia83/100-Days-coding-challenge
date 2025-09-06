#include<stdio.h>

int main(){
int length;
int breadth;
printf("enter the length");
scanf("%d" , &length);
printf("enter the breadth");
scanf ("%d" , &breadth);
printf("the area of the reactangle is %d\n", length*breadth);
printf("the perimeter of the reactangle is %d\n", 2*(length+breadth));
    return 0;
}
