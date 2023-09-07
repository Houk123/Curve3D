#ifndef CURVE_H
#define CURVE_H

#include <iostream>
#include <vector>
#include <cmath>
#include <string>
#include <stdexcept>
#include <memory>
#include <map>
#include <cmath>

class Curve{
    public:
        virtual double get_radius() const = 0;
        virtual std::string get_name() const = 0;
        
        virtual std::shared_ptr<std::map<std::string, double>> compute_point(double t) const = 0; 
        virtual std::shared_ptr<std::map<std::string, double>> compute_derivative(double t) const = 0;
};

#endif