#include <iostream>

int main() {
    std::cout << "Trios Pitagoricos hasta 500:" << std::endl;

    for (int p = 1; p <= 500; ++p) {
        for (int q = p; q <= 500; ++q) {
            for (int r = q; r<= 500; ++r) {
                if (p*p+q*q == r*r) {
                    std::cout <<("es un triple de pitagoras")<< std::endl;
                }
                else{
                    std::cout<<"supera la suma de 500 pero si es un triple de pitagoras"<<std::endl;

                    }
                  }
             }
    }
     return 0;
}