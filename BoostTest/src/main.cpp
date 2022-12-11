#include <boost/chrono.hpp>
#include <iostream>

void BoostTest();

int main(void) 
{
    BoostTest();

    return 0;
}

void BoostTest()
{
      boost::chrono::system_clock::time_point start = boost::chrono::system_clock::now();

      for (long i = 0; i < 10000000; ++i)
        std::sqrt(123.456L); // burn some time

      boost::chrono::duration<double> sec = boost::chrono::system_clock::now() - start;
      std::cout << "took " << sec.count() << " seconds\n";
}