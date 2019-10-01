#pragma once
#include <memory>
#include <complex>
#include <iostream>
using namespace std;

struct pixel{
    int r;
    int g;
    int b;
};

class image{
    private:
        int l;
        int h;
        unique_ptr<pixel[]> pixels;
    public:       
        image(int _l, int _h){
            l=_l;
            h=_h;
            pixels=make_unique<pixel[]>(h*l);
        } 
        int get_h(){ return h; };
        int get_l(){ return l; };
        pixel get_p(int x,int y) { return pixels[x+y*l]; };
        void set_p(int x,int y,pixel p) { pixels[x+y*l]=p; };
        void draw(complex <double> z_min,complex <double> z_max,int max_iter);
        void write(const char * f);
};