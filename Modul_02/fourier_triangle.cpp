#include <cstdio>
#include <cmath>

int main()
{
  const double L = 2.0;
  const int MaxN = 5;

  double x, y;
  double NptsPlot = 200;
  const double X0 = 0.0;
  double const XplotMax = 2*L;
  double delta_x = XplotMax/(NptsPlot-1);

  for(int i = 0; i < NptsPlot; i++) {
    x = X0 + delta_x*i;
    y = 0.0;
    for(int n = 1; n <= MaxN; n = n + 2) {
      y = y + pow(-1,0.5*(n-1))*sin(n*M_PI*x/L)/n/n;
    }
    y = 8.0/M_PI/M_PI*y;
    printf("%18.10f %18.10f\n", x, y);

  }

  return 0;
  
}

