#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void max_min(int min,int max,int a, int b, int c);

int main(void)
{
    float a,b,c;
    int x_min,x_max;

    printf("Enter value of a:\n");
    scanf("%f",&a);

    printf("Enter value of b:\n");
    scanf("%f",&b);

    printf("Enter value of c:\n");
    scanf("%f",&c);

    printf("Enter minimum value of x_n:\n");
    scanf("%d",&x_min);

    printf("Enter maximum value of x_n:\n");
    scanf("%d",&x_max);

    max_min(x_min,x_max,a,b,c);

    return 0;



}

void max_min(int min, int max, int a, int b, int c){
    float Xn = 10;
    float Xnow;
    int start;

    if(max == 0){
            printf("x_0: %.2f",Xn );
    }

    for(start = 1;start<=max;start++){
        Xnow = (Xn*b) + ((-b) +sqrt(pow(b,2)-4*a*c))/(2*a) ;
        Xn = Xnow;
        if(start >= min){

        printf("x_%d: %.2f\n",start, Xn);

        }


    }



}





