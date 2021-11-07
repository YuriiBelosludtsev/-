#include <iostream>
#include <math.h>
using namespace std;
#define PI 3.14159265
double d;
float summan, summae, x, y, a=(PI/5), b=(9*PI/5), c, k=10.0, e, step=(a+b)/k, n=40.0, f=1;
int main ()
{
 for (x=a; x<=b; x+=step)
{
      summan=0;// обнуляем суммы рядов для того, чтобы они каждый раз считались заново
      summae=0;
      f=1;

       for (c=1; c<=n; c++)
      {
            summan += (cos(c*x))/c;//вычисляем сумму ряда Маклорена
            
      }
      do
      {
            e=0.0001;
            d = ((cos(f*x))/f);// вычисляем сумму снисходящего ряда
            f++;
            summae +=d;
      }
      while (d<e);
        y= (-1)*log(abs(2*sin(0.5*x)));// вычисляем значение функции в точке
        printf("X=%.2f SN=%f SE=%f Y=%f\n",x,summan,summae,y);//вывод
 }
    return 0;
}