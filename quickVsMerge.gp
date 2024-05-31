set terminal pngcairo enhanced font 'arial,10'
set output 'quickVsMerge.png'
set title 'Tiempo de Procesamiento vs Cantidad de Elementos'
set xlabel 'Cantidad de Elementos'
set ylabel 'Tiempo de Procesamiento (segundos)'

plot 'tiempoMerge' with lines title 'Merge', \
     'tiempoQuick' with lines title 'Quick'

