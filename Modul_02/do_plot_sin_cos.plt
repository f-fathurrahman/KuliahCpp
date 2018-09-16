set terminal pdf font "Times New Roman, 14"
set output "sin_cos.pdf"

set xlabel "x"
set ylabel "y"
set title "sin(x) dan cos(x)"

# Posisi legenda
set key at 0.6,1.0

set xrange [-0.1 : 1.1]
set yrange [-1.1 : 1.1]

plot "sin_cos.dat" using 1:2 with linespoints title "sin(x)"\
                   pointtype 7 pointsize 0.5,\
                "" using 1:3 with linespoints title "cos(x)"\
                   pointtype 7 pointsize 0.5,


