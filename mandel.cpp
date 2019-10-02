#include "image.hpp"
#include <iostream>

using namespace std;

int main(void){ 
    int l=640;
    int h=400;
    int max_iter=255;
    complex <double> z_min=complex(-2.2,-1.7);
    complex <double> z_max=complex(1.2,1.7);
    const char * fn="mandel.ppm";

    image img=image(l,h);
    cout << "Drawing image.\n";
    img.draw(z_min,z_max,max_iter);
    cout << "Saving image.\n";
    img.write(fn);
    //std::cout << img.get_h() << "\n";
}
