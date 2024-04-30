set terminal pngcairo enhanced font 'arial,10'
set output 'grafica_tiempoStandar.png'
set title 'Tiempo de Procesamiento vs Cantidad de Elementos'
set xlabel 'Cantidad de Elementos'
set ylabel 'Tiempo de Procesamiento (segundos)'
plot 'tiempos' with linespoints title 'Tiempo de Procesamiento'

