#include "image.hpp"
#include <iostream>

using namespace std;




int main(void){ 
    int l=640;
    int h=400;
    complex z_min=(-2.2,-1.7);
    complex z_max=(1.2,1.7);
    char * fn="madel.bpm";
    image img=image(l,h);
    img.draw(z_min,z_max);
    img.write(fn);
    std::cout << img.get_h() << "\n";
}
