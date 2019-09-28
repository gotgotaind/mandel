#pragma once
#include <memory>
#include <complex>
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
        pixel pixels[];
    public: 
    image(int _l, int _h){
        l=_l;
        h=_h;
        pixel* pixels=new pixel[l*h];
    } 
    int get_h(){ return h; };
    int get_l(){ return l; };
    pixel get_p(int x,int y) { return pixels[x+y*l]; };
    void set_p(int x,int y,pixel p) { pixels[x+y*l]=p;};
    void draw(complex <double> z_min,complex <double> z_max);
    void write(char * f);
};