set terminal pngcairo enhanced font 'arial,10'
set output 'graficasSorting.png'
set title 'Tiempo de Procesamiento vs Cantidad de Elementos'
set xlabel 'Cantidad de Elementos'
set ylabel 'Tiempo de Procesamiento (segundos)'

plot 'tiempoSelection' with lines title 'Selection', \
     'tiempoBubble' with lines title 'Bubble Sort', \
     'tiempoQuick' with lines title 'Bubble Sort', \
     'tiempoMerge' with lines title 'Merge Sort'

