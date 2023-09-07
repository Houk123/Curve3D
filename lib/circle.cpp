#include "circle.hpp"

clb::Circle::Circle(double r) : radius(r){
    if(r < 0) throw std::invalid_argument("Value must be non-negative");
}

double clb::Circle::get_radius() const{
    return radius;
}

std::string clb::Circle::get_name() const{
    return "Circle;";
}

std::shared_ptr<std::map<std::string, double>> clb::Circle::compute_point(double t) const {
    std::shared_ptr<std::map<std::string, double>> point = std::make_shared<std::map<std::string, double>>();
    (*point)["x"] = radius * cos(t);
    (*point)["y"] = radius * sin(t);
    (*point)["z"] = 0;
    return point;
}

std::shared_ptr<std::map<std::string, double>> clb::Circle::compute_derivative(double t) const {
    std::shared_ptr<std::map<std::string, double>> derictive = std::make_shared<std::map<std::string, double>>();
    (*derictive)["dx"] = -radius * sin(t);
    (*derictive)["dy"] = radius * cos(t);
    (*derictive)["dz"] = 0;
    return derictive;
}