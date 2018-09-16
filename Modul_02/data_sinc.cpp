#include <cstdio>
#include <cmath>

int main()
{

  double x, y;

  double NptsPlot = 201;
  const double Xmin = -10.0;
  const double Xmax =  10.0;
  double delta_x = (Xmax-Xmin)/(NptsPlot-1);
  const double SMALL = 1e-10;

  for(int i = 0; i < NptsPlot; i++) {
    x = Xmin + delta_x*i;
    if( fabs(x) <= SMALL ) {
      printf("This is passed\n");
      y = 1.0;
    } else {
      y = sin(M_PI*x)/(M_PI*x);
    }
    //printf("%18.10f %18.10f\n", x, y);

  }

  return 0;
  
}

