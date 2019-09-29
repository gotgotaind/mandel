#include "image.hpp"
#include <iostream>

using namespace std;

int main(void){ 
    int l=640;
    int h=400;
    int max_iter=255;
    complex z_min=(-2.2,-1.7);
    complex z_max=(1.2,1.7);
    const char * fn="madel.ppm";

    image img=image(l,h);
    cout << "Drawing image.\n";
    img.draw(z_min,z_max,max_iter);
    cout << "Saving image.\n";
    img.write(fn);
    //std::cout << img.get_h() << "\n";
}
