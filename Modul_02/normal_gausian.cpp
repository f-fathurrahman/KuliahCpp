#include <cstdio>
#include <cmath>

int main()
{

  double x, y1, y2;
  double mu1, mu2;
  double sigma1, sigma2;

  double NptsPlot = 200;
  const double Xmin = -10.0;
  const double Xmax =  10.0;
  double delta_x = (Xmax-Xmin)/(NptsPlot-1);

  mu1 = 1.0;
  mu2 = -2.0;
  sigma1 = 1.5;
  sigma2 = 1.0;

  for(int i = 0; i < NptsPlot; i++) {
    x = Xmin + delta_x*i;
    y1 = exp(-0.5*(x-mu1)*(x-mu1)/sigma1/sigma1 )/sigma1/sqrt(2*M_PI);
    y2 = exp(-0.5*(x-mu2)*(x-mu2)/sigma2/sigma2 )/sigma2/sqrt(2*M_PI);
    printf("%18.10f %18.10f %18.10f\n", x, y1, y2);

  }

  return 0;
  
}

