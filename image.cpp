#include "image.hpp"
#include <fstream>
#include <iostream>

 pixel color(int n, int iter_max) {

    
    double t = n/(double)iter_max;
 
    
    int r = (int)(t*255);
    int g = (int)((1-t)*255);
    int b =  (int)(0.5*255);
    return pixel{r, g, b};
}


void image::draw(complex <double> z_min,complex <double> z_max, int max_iter){
    complex <double> z;
    for(int x_img=0;x_img<l;x_img++){
        for(int y_img=0;y_img<h;y_img++){
            
            z=complex <double>(0,0);
            complex <double> c=complex <double>(x_img/(double)l*(real(z_max)-real(z_min))+real(z_min),y_img/(double)h*(imag(z_max)-imag(z_min))+imag(z_min));
            //c=complex <double>(1,3);
            //cout << "real c " << x_img/(double)l*(real(z_max)-real(z_min))+real(z_min) << endl;
            //cout << "real c " << real(c) << endl;
            int iter=0;
            while(iter<max_iter && abs(z)<2 ) {
                z=z*z+c;
                iter++;
            }
            if ( x_img%100==0 && y_img%100==0 ) {
                cout << "setting pixel x,y " << x_img << "," << y_img << " c "  << real(c) << "," << imag(c) << " color " << iter << endl;
            }
            set_p(x_img,y_img,color(iter,max_iter));
        } 
    } 
}

void image::write(const char * f) {
    ofstream fs (f); 
    if (fs.is_open ()) {
        fs << "P3\n" << l << " " << h << " 255\n";
        for (int j = 0; j < h; j++)  { 
        for (int i = 0; i < l; i++) {
               
                pixel p = get_p(i,j); 
                fs << p.r << ' ' << p.g << ' ' << p.b << "\n";
            }
        }
        fs.close();
    }
}