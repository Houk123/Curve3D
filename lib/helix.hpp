#ifndef HELIX_H
#define HELIX_H

#include "curve.hpp"

namespace clb{
    class Helix: public Curve{
        public:
            Helix(double r, double s);
            double get_radius() const override;
            std::string get_name() const override;
            
            std::shared_ptr<std::map<std::string, double>> compute_point(double t) const override;
            std::shared_ptr<std::map<std::string, double>> compute_derivative(double t) const override;

        private:
            double radius, step;
    };
}

#endif