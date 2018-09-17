set terminal pdf font "Times New Roman, 14"
set output "TEMP_sinc.pdf"

set xlabel "x"
set ylabel "y"
set title "sinc(x)"

set nokey

plot "sinc.dat" using 1:2 with lines

