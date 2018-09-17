#include <cstdio>
#include <cmath>

int main()
{
  const double a = 1.0;
  const double b = 0.3*a; // nephroid, a==b -> cardioid
  double t, x, y;

  const double t_start = 0.0;
  const double t_stop = 8*M_PI;
  const int NptsPlot = 500;
  double delta_t = (t_stop - t_start)/(NptsPlot-1);

  for(int i = 0; i < NptsPlot; i++) {
    t = t_start + i*delta_t;
    x = (a + b)*cos(t) - b*cos((a/b+1)*t);
    y = (a + b)*sin(t) - b*sin((a/b+1)*t);
    printf("%18.10f %18.10f\n", x, y);
  }
  
  return 0;
}

