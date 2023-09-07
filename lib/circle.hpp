#ifndef CIRCLE_H
#define CIRCLE_H

#include "curve.hpp"

namespace clb{
    class Circle: public Curve{
        public:
            Circle(double r);

            double get_radius() const override;
            std::string get_name() const override;
            
            std::shared_ptr<std::map<std::string, double>> compute_point(double t) const override;
            std::shared_ptr<std::map<std::string, double>> compute_derivative(double t) const override;

        private:
            double radius;
    };
}

#endif