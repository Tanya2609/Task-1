#include<stdio.h>
#include<math.h>
int main()
{
    float C,F, temp;
    printf("Temperature in C:");
    scanf("%f", &C);
    F=(C-32)*5/9;
    printf("Temperature in F:%f", F);
    return 0;


    
}
