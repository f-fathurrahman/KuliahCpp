set terminal pdf font "Times New Roman, 14"
set output "TEMP_astroid.pdf"

set xlabel "x"
set ylabel "y"
set title "Astroid"
set size square
set nokey

plot "astroid.dat" using 1:2 with linespoints pointtype 7 pointsize 0.5


