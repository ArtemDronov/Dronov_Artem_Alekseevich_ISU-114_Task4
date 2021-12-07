#include "Pyramid.h"
#include <limits>
#include <cmath>

#define PYRAMID_STR "Pyramid"

Pyramid::Pyramid(const double s_,const  double h_,const  double p_,const  double a_){
        double epsilon = std::numeric_limits<double>::epsilon();
        if (s_<epsilon)
            throw "Error in square";
        if (h_<epsilon)
            throw "Error in height";
        if (p_<epsilon)
            throw "Error in perimetr";
        if (a_<epsilon)
            throw "Error in length";

        this->square = s_;
        this->height = h_;
        this->perimetr = p_;
        this->apofem = a_;
}

Pyramid::~Pyramid(){};

string Pyramid::type() const{
        return PYRAMID_STR;
}

double Pyramid::getV() const{
        return 1.0/3.0 * square * height;
}

double Pyramid::getS() const{
        return 1.0/2.0 * perimetr *apofem;
}

