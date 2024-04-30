#include "estadisticas.h"
double Stats::average(vector<double> numbers)
{
  double sum = 0;
  for(double i : numbers)
  {
    sum += i;
  }
  return sum / numbers.size();
}
double Stats::stdeviation(double media, vector<double> numbers)
{
  double sum = 0;
  for(double i : numbers)
  {
    sum += i * i;
  }
  return std::pow(sum - media * media, 1/2);
}
