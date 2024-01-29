#include <stdio.h>
#include <stdlib.h>
#include <math.h>
// creating a function
int func(int a,int b,int c){
    int d=((b*b)-(4*a*c));
    return d;
}

int main()
{
    int a,b,c;
    printf("type a,b,and c \n");
    scanf("%d , %d, %d", &a,&b,&c );

    if(a!= 0){



    int discriminant = func(a,b,c);


    if (discriminant>0) {
        float x1, x2;
        x1=((-b + sqrt(discriminant))/(2*a));
        x2= ((-b - sqrt(discriminant))/(2*a));

        printf("x1= %.2f \n x2= %.2f", x1,x2);
    }

    else if (discriminant==0){
        float x= ((-b)/(2*a));
        printf("the root is %f",x);

    }
    else{
        printf("the root is complex");
    }
    }
    return 0;
}
