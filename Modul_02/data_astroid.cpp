#include <cstdio>
#include <cmath>

int main()
{
  const double A = 1.0;
  double t, x, y;

  const double t_start = 0.0;
  const double t_stop = 2*M_PI;
  const int NptsPlot = 200;
  double delta_t = (t_stop - t_start)/(NptsPlot-1);

  for(int i = 0; i < NptsPlot; i++) {
    t = t_start + i*delta_t;
    x = A*pow( cos(t), 3 );
    y = A*pow( sin(t), 3 );
    printf("%18.10f %18.10f\n", x, y);
  }
  
  return 0;
}

