#include "image.hpp"
#include <iostream>






int main(void){ 
    int l=640;
    int h=400;

    image img=image(l,h);
    img.draw(-2.2,1.2,-1.7,1.7);
    std::cout << img.get_h() << "\n";
}
