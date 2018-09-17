set terminal pdf font "Times New Roman, 14"
set output "TEMP_triangle.pdf"

set nokey

plot "triangle.dat" using 1:2 with lines


