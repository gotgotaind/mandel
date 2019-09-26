#pragma once
#include <vector> 
#include <memory>


class image{
    private:
        int l;
        int h;
        std::unique_ptr<std::vector<std::vector<int>>> pixels;
    public: 
    image(int _l, int _h){
        l=_l;
        h=_h;
    } 
    int get_h(){ return h; };
    int get_l(){ return l; };
    void draw(int x_min,int x_max,int y_min,int y_max);
};