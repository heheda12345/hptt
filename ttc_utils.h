#ifndef TTC_UTILS_H
#define TTC_UTILS_H

namespace ttc {

template<typename t>
int hasItem(const std::vector<t> &vec, t value)
{
   return ( std::find(vec.begin(), vec.end(), value) != vec.end() );
}

template<typename t>
void printVector(const std::vector<t> &vec, const char* label){
#ifdef DEBUG
   std::cout << label <<": ";
   for( auto a : vec )
      std::cout << a << ", ";
   std::cout << "\n";
#endif
}

void getPrimeFactors( int n, std::vector<int> &primeFactors );

template<typename t>
int findPos(t value, const std::vector<t> &array)
{
   for(int i=0;i < array.size() ; ++i)
      if( array[i] == value )
         return i;
   return -1;
}

int findPos(int value, const int *array, int n);

}

#endif

