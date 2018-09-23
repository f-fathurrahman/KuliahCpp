#include <cstdio>
#include <cmath>

using namespace std;

void calc_lissajous(
  double A, double B, double a, double b,
  double PHI,
  double t, double &x, double &y)
{
  x = A*sin(a*t + PHI);
  y = B*sin(b*t);
}

int main()
{
  const double A = 1.0;
  const double B = 1.0;
  const double a = 3.0;
  const double b = 5.0;
  const double PHI = 0.25*M_PI;

  const double t_start = 0.0;
  const double t_stop = 2*M_PI;
  const int NptsPlot = 500;
  double delta_t = (t_stop - t_start)/(NptsPlot-1);

  double x, y, t;
  for(int i = 0; i < NptsPlot; i++) {
    t = t_start + i*delta_t;
    calc_lissajous(A, B, a, b, PHI, t, x, y);
    printf("%18.10f %18.10f %18.10f\n", t, x, y);
  }
}
