set terminal pdf font "Times New Roman, 14"
set output "TEMP_sawtooth.pdf"

set nokey

plot "sawtooth.dat" using 1:2 with lines


