#include <stdio.h>
#include <stdlib.h>
#include <math.h>


void value_of_T(float a, float b, float n, int c, int d);

int main()
{
    float a,b,n;
    int c,d;

    printf("Enter value of a:\n");
    scanf("%f",&a);

    printf("Enter value of b:\n");
    scanf("%f",&b);

    printf("Enter value of n:\n");
    scanf("%f",&n);

    printf("Enter value of c:\n");
    scanf("%d",&c);

    printf("Enter value of d:\n");
    scanf("%d",&d);

    value_of_T(a,b,n,c,d);


    return 0;
}


void value_of_T(float a, float b, float n, int c, int d){


float h = (b-a)/n;

float sum = 0;




    for(int i = 1 ; i<n ; i++){

        float Xi = a + i * h;
        sum += (pow(Xi,c))+(2*d);



}
float Fa = (pow(a,c))+(2*d);
float Fb = (pow(b,c))+(2*d);


float T = (h/2)*(Fa+Fb+2*sum);

printf("T: %.2f",T);



}
