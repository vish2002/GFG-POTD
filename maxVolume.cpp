// Find maximum volume of a cuboid
// GFG : Easy 19-06-2024

// Topic Tags: Mathematical,Geometric,Algorithms
double maxVolume(double perimeter, double area) {
        // code here
    double l=(perimeter-sqrt(pow(perimeter,2)-(24*area)))/12;
    double h=((perimeter/4)-2*l);
    return l*l*h;
    }
