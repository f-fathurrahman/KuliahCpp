#include <cstdio>
#include <cmath>

int main()
{

  double x, y1, y2;
  double NptsPlot = 200;
  const double Xmin = -10.0;
  const double Xmax =  10.0;
  double delta_x = (Xmax-Xmin)/(NptsPlot-1);

  for(int i = 0; i < NptsPlot; i++) {
    x = Xmin + delta_x*i;
    y1 = exp(-0.5*x*x);
    y2 = exp(-0.1*x*x);
    printf("%18.10f %18.10f %18.10f\n", x, y1, y2);

  }

  return 0;
  
}

