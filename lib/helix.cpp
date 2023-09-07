#include "helix.hpp"

clb::Helix::Helix(double r, double s): radius(r), step(s){
    if(r < 0 || s < 0) throw std::invalid_argument("Value must be non-negative");
}

double clb::Helix::get_radius() const{
    return radius;
}

std::string clb::Helix::get_name() const{
    return "Helix;";
}

std::shared_ptr<std::map<std::string, double>> clb::Helix::compute_point(double t) const {
    std::shared_ptr<std::map<std::string, double>> point = std::make_shared<std::map<std::string, double>>();
    (*point)["x"] = radius * cos(t);
    (*point)["y"] = radius * sin(t);
    (*point)["z"] = (t * step) / (2 * M_PI);
    return point;
}

std::shared_ptr<std::map<std::string, double>> clb::Helix::compute_derivative(double t) const {
    std::shared_ptr<std::map<std::string, double>> derictive = std::make_shared<std::map<std::string, double>>();
    (*derictive)["dx"] = -radius * sin(t);
    (*derictive)["dy"] = radius * cos(t);
    (*derictive)["dz"] = step / (2 * M_PI);
    return derictive;
}
