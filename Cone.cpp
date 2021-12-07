#include "Cone.h"
#include <limits>
#include <cmath>

#define CONE_STR "Cone"

Cone::Cone(const double r_, const double h_){
        double epsilon = std::numeric_limits<double>::epsilon();
        if (r_<epsilon)
            throw "Error in radius";
        if (h_<epsilon)
            throw "Error in height";
        this->radius = r_;
        this->height = h_;
}

Cone::~Cone(){};

string Cone::type() const{
        return CONE_STR;
}

double Cone::getV() const {
        return 1.0/3.0 *M_PI *radius*radius*height;
}

double Cone::getS() const {
        return M_PI * radius * (radius + sqrt(radius*radius+height*height));
}
