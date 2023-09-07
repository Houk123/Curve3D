#include "ellipses.hpp"

clb::Ellipses::Ellipses(double rx, double ry) : radiusX(rx), radiusY(ry){
    if(rx < 0 || ry < 0) throw std::invalid_argument("Value must be non-negative");
}

double clb::Ellipses::get_radius() const {
    return (radiusX + radiusY) / 2.0;
}

std::string clb::Ellipses::get_name() const{
    return "Ellipses;";
}

std::shared_ptr<std::map<std::string, double>> clb::Ellipses::compute_point(double t) const{
    std::shared_ptr<std::map<std::string, double>> point = std::make_shared<std::map<std::string, double>>();
    (*point)["x"] = radiusX * cos(t);
    (*point)["y"] = radiusY * sin(t);
    (*point)["z"] = 0;
    return point;
}

std::shared_ptr<std::map<std::string, double>> clb::Ellipses::compute_derivative(double t) const {
    std::shared_ptr<std::map<std::string, double>> derictive = std::make_shared<std::map<std::string, double>>();
    (*derictive)["dx"] = -radiusX * sin(t);
    (*derictive)["dy"] = radiusY * cos(t);
    (*derictive)["dz"] = 0.0;
    return derictive;
}