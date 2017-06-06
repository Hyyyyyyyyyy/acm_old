#include <stdio.h>
int main()
{
    int c, n, i;
    while (scanf("%d", &c) != EOF)
    {
        for (i = 1; i <= c; i++)
        {
            scanf("%d", &n);
            printf("%d\n", 2*n*n-n+1);
        }
    }
    return 0;
}
/*当第N次添加时，前面已经有2N-2条直线了，所以第N次添加时，第2N-1条直线和第2N条直线都各能增加2*（n-1）+1 个平面。
所以第N次添加增加的面数是2[2(n-1) + 1] = 4n - 2 个。因此，总面数应该是
1 + 4n(n+1)/2 - 2n = 2n2 + 1 

当添加第N条只显示，为了使平面最多， 则第N条直线要与前面的N-1条直线都相交，且没有任何三条直线教育一个点。
则第N条直线有N-1个交点。由于每增加N个交点，就增加N+1个平面，所以用N条直线来分隔平面，最多的数是
1+1+2+3+…+n=1+n*(n+1)/2;

１。递推递推，先分析下直线分割平面的情况，增加第n条直线的时候，跟之前的直线最多有n-1个交点，此时分出的部分多出了
（n-1）+1；

２。折线也是同理，f(1)=2,f(2)=7,先画好前面n-1条折线，当增加第n条拆线时，此时与图形新的交点最多有2*2（n-1）个，
所以分出的部分多出了２*２（n-1）+1　　　所以推出f(n)=f(n-1)+4*(n-1)+1,n>=3
*/ 
