set terminal pdf font "Times New Roman, 14"
set output "TEMP_square.pdf"

set nokey

plot "square.dat" using 1:2 with lines


