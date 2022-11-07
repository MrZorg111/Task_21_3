#include <iostream>
#include <cmath>


struct math_vector {
    float x = 1;
    float y = 7;
}mv;
struct sec_vector {
    float x = 0;
    float y = 0;
}sv;
void add(float& a, float& b, float& c, float& d){
    a += c;
    b += d;
}
void subtract(float& a, float& b, float& c, float& d) {
    a -= c;
    b -= d;
}
void scale(float& a, float& b, float s) {
    a *= s;
    b *= s;
}

void normalize(float& a, float& b) {
    float tempo;
    tempo = hypotf(a, b);
    a = a / tempo;
    b = b / tempo;
}
int main() {
    math_vector vector;
    sec_vector s_vector;
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
        scale(mv.x, mv.y, (float)scalar);
        std::cout << "The result of multiplying a vector by a scalar: " << mv.x << "and" << mv.y << "\n";
    }
    else if (command == "length") {
        std::cout << "Enter the coordinates of the vector whose length you want to find out:";
        std::cin >> sv.x >> sv.y;
        std::cout << "Vector length " << hypotf(sv.x, sv.y);
    }
    else if (command == "normalize") {
        std::cout << "Enter the coordinates of the vector to normalize:";
        std::cin >> sv.x >> sv.y;
        normalize(sv.x, sv.y);
        std::cout << "Coordinates of the normalized vector: " << sv.x << " " << sv.y;
    }
    else {
        std::cout << "invalid command!";
        return 0;
    }

    return 0;
}
