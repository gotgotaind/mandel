#include <image.hpp>


void image::draw(complex <double> z_min,complex <double> z_max){
    for(int x_img=0;x_img<l;x_img++){
        for(int y_img=0;y_img<h;y_img++){
            complex z=(x_img/l*(real(z_max)-real(z_min))+real(z_min),y_img/h*(imag(z_max)-imag(z_min))+imag(z_min));
            
        } 
    } 
} 