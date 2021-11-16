#include <iostream>
#include <cmath>
using namespace std;

class Figure {
public:
    virtual string type();
    virtual double getS() = 0;
    virtual double getV() = 0;
};

class Cone : public Figure {
private:
    double R;
    double H;
public:

    Cone(double R_, double H_) {
        R = R_;
        H = H_;
    }

    string type() {
        return "Cone";
    }

    double getV() {
        return 1.0 / 3.0 * 3.14 * R * R * H;
    }

    double getS() {
        return 3.14 * R * (R + sqrt(R * R + H * H));
    }
};

class Ball : public Figure {
private:
    double R;
public:

    Ball(double R_) {
        R = R_;
    }

    string type() {
        return "Ball";
    }

    double getV() {
        return 4.0 / 3.0 * 3.14 * R * R * R;
    }

    double getS() {
        return 4 * 3.14 * R * R;
    }
};

class Pyramid : public Figure {
private:
    double S;
    double H;
    double P;
    double l;
public:

    Pyramid(double S_, double H_, double P_, double l_) {
        S = S_;
        H = H_;
        P = P_;
        l = l_;
    }

    string type() {
        return "Pyramid";
    }

    double getV() {
        return 1.0 / 3.0 * S * H;
    }

    double getS() {
        return 1.0 / 2.0 * P * l;
    }
};

int main() {

    int n;
    cout << "n = ";
    cin >> n;
    int type;
    for (int i = 0; i < n; i++) {
        do {
            cout << "1 - Cone" << endl;
            cout << "2 - Ball" << endl;
            cout << "2 - Pyramid" << endl;
        } while (type < 1 && type > 3);
        if (type == 1) {
            double R, H;
            cout << "R = ";
            cin >> R;
            cout << "H = ";
            cin >> H;
            Cone f(R, H);
            cout << f.type() << endl;
            cout << "V = " << f.getV() << endl;
            cout << "S = " << f.getS() << endl;
            cout << endl;
        }
        else if (type == 2) {
            double R;
            cout << "R = ";
            cin >> R;
            Ball f(R);
            cout << f.type() << endl;
            cout << "V = " << f.getV() << endl;
            cout << "S = " << f.getS() << endl;
            cout << endl;
        }
        else if (type == 3) {
            double S, H, P, l;
            cout << "S = ";
            cin >> S;
            cout << "H = ";
            cin >> H;
            cout << "P = ";
            cin >> P;
            cout << "l = ";
            cin >> l;
            Pyramid f(S, H, P, l);
            cout << f.type() << endl;
            cout << "V = " << f.getV() << endl;
            cout << "S = " << f.getS() << endl;
            cout << endl;
        }
    }
    return 0;
}