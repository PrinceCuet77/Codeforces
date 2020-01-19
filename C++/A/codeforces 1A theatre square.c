#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c;

    scanf("%lf %lf %lf",&a, &b, &c);

    double t1, t2;
    t1 = ceil(a/c);
    t2 = ceil(b/c);
    printf("%.0lf\n",t1 * t2);

    return 0;
}
