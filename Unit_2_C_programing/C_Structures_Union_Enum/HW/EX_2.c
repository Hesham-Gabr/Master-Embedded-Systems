#include<stdio.h>
#include<math.h>

struct SFeet_Inch 
{
    double Feet;
    double Inch;
};

int main()
{
    struct SFeet_Inch x,y,z;
    printf("Enter information for the first distance:\r\n");
    printf("Enter feet: ");
    scanf("%lf",&x.Feet);
    printf("Enter inch: ");
    scanf("%lf",&x.Inch);
    printf("Enter information for the second distance:\r\n");
    printf("Enter feet: ");
    scanf("%lf",&y.Feet);
    printf("Enter inch: ");
    scanf("%lf",&y.Inch); 
    if((x.Inch + y.Inch)>=12)
    {
        z.Feet = (x.Feet + y.Feet) + floor((x.Inch + y.Inch)/12);
        z.Inch = fmod(x.Inch+y.Inch,12);
    }else
    {
        z.Feet = (x.Feet + y.Feet);
        z.Inch =(x.Feet + y.Feet);
    }
 
    printf("Sum of distance = %lf\' %lf\"",z.Feet,z.Inch);
    return 0;
}