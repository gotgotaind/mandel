#include "image.hpp"
#include <fstream>
#include <iostream>

void image::draw(complex <double> z_min,complex <double> z_max, int max_iter){
    complex <double> z;
    for(int x_img=0;x_img<l;x_img++){
        for(int y_img=0;y_img<h;y_img++){
            cout << "Computing pixel " << x_img << "," << y_img << endl;
            z=(0,0);
            complex c=(x_img/l*(real(z_max)-real(z_min))+real(z_min),y_img/h*(imag(z_max)-imag(z_min))+imag(z_min));
            int iter=0;
            while(iter<max_iter && abs(z)<2 ) {
                z=z*z+c;
                iter++;
            }
            set_p(x_img,y_img,pixel{iter,iter,iter});
        } 
    } 
}

void image::write(const char * f) {
    ofstream fs (f); 
    if (fs.is_open ()) {
        fs << "P3\n" << l << " " << h << " 255\n";
        for (int i = 0; i < l; i++) {
             for (int j = 0; j < h; j++)  {   
                pixel p = get_p(i,j); 
                fs << p.r << ' ' << p.g << ' ' << p.b << "\n";
            }
        }
        fs.close();
    }
}