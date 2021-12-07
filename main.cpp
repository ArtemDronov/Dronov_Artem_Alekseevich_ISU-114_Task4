#include <iostream>

#include "Pyramid.h"
#include "Ball.h"
#include "Cone.h"
using namespace std;


int main(){

    int n;
    cout << "n = ";
    cin >> n;
    int type;
    for(int i = 0; i < n; i++){
        do{
            cout << "1 - Cone" << endl;
            cout << "2 - Ball" << endl;
            cout << "2 - Pyramid" << endl;
        }while(type < 1 && type > 3);
        if(type == 1){
            double R,H;
            cout << "R = ";
            cin >> R;
            cout << "H = ";
            cin >> H;
            Cone f(R,H);
            cout << f.type() << endl;
            cout << "V = " << f.getV() << endl;
            cout << "S = " << f.getS() << endl;
            cout << endl;
        }else if(type == 2){
            double R;
            cout << "R = ";
            cin >> R;
            Ball f(R);
            cout << f.type() << endl;
            cout << "V = " << f.getV() << endl;
            cout << "S = " << f.getS() << endl;
            cout << endl;
        }else if(type == 3){
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
