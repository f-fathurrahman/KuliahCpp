#include <cstdio>
#include <cmath>

int main()
{
  int i;
  double x, y1, y2;
  
  int Npoints = 10;
  
  const double xi = 0.0;
  const double xf = 1.0;
  const double L = xf - xi;
  double delta_x = L/(Npoints-1);

  for(i = 0; i < Npoints; i++) {
    x = xi + i*delta_x;
    y1 = sin(2.0*M_PI*x/L);
    y2 = cos(2.0*M_PI*x/L);
    printf("%18.10f %18.10f %18.10f\n", x, y1, y2);
  }

  return 0;
}

