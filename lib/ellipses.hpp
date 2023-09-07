#ifndef ELLIPSES_H
#define ELLIPSES_H

#include "curve.hpp"

namespace clb{
    class Ellipses: public Curve{
        public:
            Ellipses(double rx, double ry);

            double get_radius() const override;
            std::string get_name() const override;

            std::shared_ptr<std::map<std::string, double>> compute_point(double t) const override;
            std::shared_ptr<std::map<std::string, double>> compute_derivative(double t) const override;

        private:
            double radiusX, radiusY;
    };
}

#endif