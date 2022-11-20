#include <iostream>

float A; float B; float C; float D;
void Minmax(float X, float Y) {
    float k;
    if (Y < X) {
        k = Y;
        Y = X;
        X = k;
    }
}

void data_input() {
    std::cout << "enter the values A B C D" << endl;
    std::cout << "A - ";
    std::cin >> A;
    std::cout << "B - ";
    std::cin >> B;
    std::cout << "C - ";
    std::cin >> C;
    std::cout << "D - ";
    std::cin >> D;
}


int main() {
    data_input();
    Minmax(A, B);
    Minmax(A, C);
    Minmax(A, D);
    Minmax(B, C);
    Minmax(C, D);
    return 0;
}
