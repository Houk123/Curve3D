#include <ctime>
#include <cstdlib>
#include <algorithm>
#include "../lib/curv_lb.hpp"

std::vector<std::shared_ptr<Curve>> generate_random_curves(int numers_curves){
    std::vector<std::shared_ptr<Curve>> curves;

    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    for(int i = 0; i < numers_curves; i++){
        double radius = static_cast<double>(std::rand()) / RAND_MAX * 10.0;
        double step = static_cast<double>(std::rand()) / RAND_MAX * 10.0;
        int type = std::rand() % 3;

        std::shared_ptr<Curve> curve;
        switch(type){
            case 0:
                curve = std::make_shared<clb::Circle>(radius);
                break;
            case 1:
                curve = std::make_shared<clb::Ellipses>(radius, radius/2);
                break;
            case 2:
                curve = std::make_shared<clb::Helix>(radius, step);
                break;
        }
        curves.push_back(curve);
    }

    return curves;
}

std::vector<std::shared_ptr<clb::Circle>> circle_outpute(std::vector<std::shared_ptr<Curve>> curves){
    std::vector<std::shared_ptr<clb::Circle>> circle_container;
    
    for(const auto& curve : curves){
        std::shared_ptr<clb::Circle> circle = std::dynamic_pointer_cast<clb::Circle>(curve);
        if(circle){
            circle_container.push_back(circle);
        }
    }

    return circle_container;
}

void print_parametr_point(double t, std::vector<std::shared_ptr<Curve>> curves){
    for(const auto& curve : curves){
        std::shared_ptr<std::map<std::string, double>> point = (*curve).compute_point(t);
        std::shared_ptr<std::map<std::string, double>> derivative = (*curve).compute_derivative(t);

        std::cout << "Type:" << (*curve).get_name() << std::endl;
        std::cout << "Radius:" << (*curve).get_radius() << std::endl;
        std::cout << "Point: (" << (*point)["x"] << ", "<< (*point)["y"] << ", " << (*point)["z"]  << ")" << std::endl;
        std::cout << "Deivate: (" << (*derivative)["dx"] << ", "<< (*derivative)["dy"] << ", " << (*derivative)["dz"]  << ")" << std::endl; 
    
        std::cout << std::endl;
    } 
}

double compute_total_radius(std::vector<std::shared_ptr<clb::Circle>> circle_container){
    double total_sum_radius = 0.0;

    #pragma omp parallel for reduction(+ : total_sum_radius)
    for(const auto& circle : circle_container){
        total_sum_radius += (*circle).get_radius();
    } 

    return total_sum_radius;
}

int main(int argc, char* argv[]){
    try{
        std::vector<std::shared_ptr<Curve>> curves = generate_random_curves(10);
        double t = M_PI / 4;

        print_parametr_point(t, curves);

        std::vector<std::shared_ptr<clb::Circle>> circle_container = circle_outpute(curves); 
    
        std::sort(circle_container.begin(), circle_container.end(), [](const std::shared_ptr<clb::Circle>& a, const std::shared_ptr<clb::Circle>& b){
            return a->get_radius() < b->get_radius();
        });

        for(const auto& circle : circle_container){
            std::cout << (*circle).get_name() << std::endl;
            std::cout << "Radius:" << (*circle).get_radius() << std::endl;
        
            std::cout << std::endl;
        }        

        double total_radius = compute_total_radius(circle_container);

        std::cout << "Total radius:" << total_radius << std::endl;

    }catch(const std::exception& ex){
        std::cerr << "Error:" << ex.what() << std::endl;
    }
}