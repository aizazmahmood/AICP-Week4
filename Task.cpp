#include <iostream>
using namespace std;

class Hexagon {
private:
    double side;

public:
    Hexagon(double s) : side(s) {}

    double calcArea() {
        return 1.5 * 1.732 * side * side;
    }

    double calcPeri() {
        return 6 * side;
    }

    double calcAngleSum() {
        return 6 * 120;
    }

    void display() {
        cout << "Area of Hexagon: " << calcArea() << endl << "Perimeter of Hexagon: " << calcPeri() << endl << "Sum of Angles of Hexagon: " << calcAngleSum() << endl;
    }
};

class Square {
private:
    double side;

public:
    Square(double s) : side(s) {}

    double calcAreaSquare() {
        return side * side;
    }

    double calcPeriSquare() {
        return 4 * side;
    }

    void display() {
        cout << "Area of Square: " << calcAreaSquare() << endl << "Perimeter of Square: " << calcPeriSquare() << endl;
    }
};

int main() {
    Hexagon hexagon(9); //Last digit of cnic is 9
    Square square(10); // Last digit of cnic + 1

    char choice;

    do {
        cout << "Menu:\n";
        cout << "Enter 1 to calculate area, perimeter, and sum of the angles of hexagon\n";
        cout << "Enter 2 to calculate area and perimeter of square\n";
        cout << "Press any other key to exit\n";
        cin >> choice;

        switch (choice) {
            case '1':
                hexagon.display();
                break;

            case '2':
                square.display();
                break;

            default:
                cout << "Exiting program.\n";
                break;
        }
    } while (choice == '1' || choice == '2');

    return 0;
}
