set terminal epslatex color standalone
set output "TEMP_normal_gaussian.tex"

set xlabel "$x$"
set ylabel "$y$"
set title "Gaussian"

plot "normal.dat" using 1:2 with lines title "$\\mu_{1}=1.0,\\sigma_{1}=1.5$", \
              ""  using 1:3 with lines title "$\\mu_{2}=-2.0,\\sigma_{2}=1.0$"


