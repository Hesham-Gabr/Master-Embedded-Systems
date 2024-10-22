/*Write A program Adding Two 
Complex Numbers using Structure 
And Function*/

#include<stdio.h>

struct Scomplex Readcomplex(char num_name[]);
struct Scomplex Addcomplex(struct Scomplex a,struct Scomplex b);
void printComplex(char name[],struct Scomplex z);


struct Scomplex
{
    double r_p;
    double i_p;
};

int main()
{
    struct Scomplex a,b,z;
    a = Readcomplex("A");
    b = Readcomplex("B");
    z = Addcomplex(a,b);
    printComplex("Z",z);
    return 0;
}

struct Scomplex Readcomplex(char num_name[])
{
    struct Scomplex num;
    printf("Enter Real and Emaginary part for %s (Ex: 5,-3): ");
    scanf("%lf,%lf",&num.r_p,&num.i_p);
    return num;
}

struct Scomplex Addcomplex(struct Scomplex a,struct Scomplex b)
{
    struct Scomplex z;
    z.r_p = a.r_p + b.r_p;
    z.i_p = a.i_p + b.i_p;
    return z;
}

void printComplex(char name[],struct Scomplex z)
{
    printf("%s = %lf + %lfj",name,z.r_p,z.i_p);
}