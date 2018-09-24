set terminal pdf font "Times New Roman, 14"
set output "TEMP_lissajous.pdf"

set xlabel "x"
set ylabel "y"
set title "Kurva Lissajous"
set size square
set nokey

plot "TEMP_lissajous.dat" using 2:3 with linespoints pointtype 7 pointsize 0.5


