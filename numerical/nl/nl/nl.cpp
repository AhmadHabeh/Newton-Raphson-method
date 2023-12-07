
#include <iostream>
#include <cmath>
using namespace std;



    float funx(float  x) {
        x = pow(x, 3) + (4 * x) - 5;   //x^3 + x^2
        return x;
        
    }
    float funx1(float x) {
        x = 3 * pow(x, 2) + 4;  //3x^2 + 2x
        return x;
    }
    

    void main()
    {
        int iteration = 100;
        int accurcey = 3;
        float x0;
        float x1;
        float TV = 0.001;
        float fx;
        float fx1;
        cout << "enter the x0 =  ";
        cin >> x0;
        bool flag = true;
        int i = 0;
        int j = 0;

        while (flag) {
            fx = funx(x0);
            fx1 = funx1(x0);
            cout << "x0 = " << x0 << endl;
            cout << "x1 = " << x0 << " f(x)= " << fx << " fx'(x) = " << fx1 << endl;
            cout << "**************************************************************" << endl;
            j++;
            cout << "it no." << j << endl;
            x1 = x0 - fx / fx1;
            x1 = x1 * pow(10, accurcey);
            x1 = round(x1);
            x1 = x1 / pow(10, accurcey);





            if (abs(fx) < TV || fx == 0) {
                flag = false;
                cout << "root found at x =  " << x1 << endl;;
            }
            else {
                x0 = x1;
            }
            i++;
            if (i >= iteration) {
                flag = false;
                cout << " no iteration found at max value" << endl;

            }
            
        }
        
    }
    
    





// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
