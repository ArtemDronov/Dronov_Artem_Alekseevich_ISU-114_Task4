#include "Ball.h"
#include <limits>
#include <cmath>

#define BALL_STR "Ball"

Ball::Ball(const double r_){
        double epsilon = std::numeric_limits<double>::epsilon();
        if (r_<epsilon)
            throw "Error in radius";
        this->radius = r_;
}

Ball::~Ball(){};

string Ball::type() const {
        return BALL_STR;
}

double Ball::getV() const{
        return 4.0/3.0 * M_PI * radius*radius*radius;
}

double Ball::getS() const{
        return 4 * M_PI * radius*radius;
}
