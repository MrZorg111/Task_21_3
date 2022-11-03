#include <iostream>


struct math_vector {
    int x = 1;
    int y = 7;
}mv;
struct sec_vector {
    int x;
    int y;
}sv;
void add(int a, int b, int c, int d){
    a += c;
    b += d;
}
void subtract(int a, int b, int c, int d) {
    a -= c;
    b -= d;
}
void scale(int a, int b, int s) {
    a *= s;
    b *= s;
}
void length() {

}
void normalize() {

}
int main() {
    math_vector vector;
    std::string command;
    std::cout << "Enter command:(add, subtract, scale, length, normalize)";
    std::cin >> command;
    if (command == "add") {
        std::cout << "Enter the coordinates of the vector to be added to the existing one:\n";
        std::cin >> sv.x >> sv.y;
        add (mv.x, mv.y, sv.x, sv.y);
        std::cout << "The result of adding two vectors: " << mv.x << "and" << mv.y << "\n";
    }
    else if (command == "subtract") {
        std::cout << "Enter the coordinates of the vector to be added to the existing one:\n";
        std::cin >> sv.x >> sv.y;
        subtract(mv.x, mv.y, sv.x, sv.y);
        std::cout << "The result of subtracting two vectors: " << mv.x << "and" << mv.y << "\n";
    }
    else if (command == "scale") {
        int scalar;
        std::cout << "Enter a scalar number:";
        std::cin >> scalar;
        scale(mv.x, mv.y, scalar);
        std::cout << "The result of multiplying a vector by a scalar: " << mv.x << "and" << mv.y << "\n";
    }
    else if (command == "length") {

    }
    else if (command == "normalize") {

    }
    else {
        std::cout << "invalid command!";
        return 0;
    }

    return 0;
}
