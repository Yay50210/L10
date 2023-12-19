#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
using namespace std;

int main()
{

    ifstream source;
    source.open("score.txt");
    int i = 0;
    string num;
    string devi;
    float sum = 0;
    float sta = 0;
    float m = 0;
    while (getline(source, num))
    {
        sum += atof(num.c_str());
        sta += pow(atof(num.c_str()), 2);
        i++;
    }

    cout << "Number of data = " << i << endl;
    cout << setprecision(3);
    m = sum / i;
    cout << "Mean = " << m << endl;
    

    cout << "Standard deviation = " << sqrt((sta/i) - pow(m, 2));
    return 0;
}