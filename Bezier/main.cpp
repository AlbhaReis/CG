#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

using namespace std;

int main()
{
    cout << "\n Bem vindo ao programa de calculo de Cuvas de Bezier\n"
         << endl;

    float T;
    float B0;
    float B1;
    float B2;
    float B3;

    cout << "\n Digite o valor do tempo: \n"<< endl;
    cin >> T;

    cout << "\n Digite o valor do B0: \n" << endl;
    cin >> B0;
    cout << "\n Digite o valor do B1: \n" << endl;
    cin >> B1;
    cout << "\n Digite o valor do B2: \n" << endl;
    cin >> B2;
    cout << "\n Digite o valor do B3: \n" << endl;
    cin >> B3;



    float calcBezier = (pow((1-T),3)*B0) + ((3*T)*(pow((1-T),2)*B1)) + (pow((3*T),2)*((1-T)*B2))+ (pow(T,3)* B3);
    float calcb0 = (pow((1-T),3)*B0);
    float calcb1 = ((3*T)*(pow((1-T),2)*B1));
    float calcb2 = (pow((3*T),2)*((1-T)*B2));
    float calcb3 = (pow(T,3)* B3);
    float total = calcb0 + calcb1 + calcb2 + calcb3;

    cout << "\n Resultado do calculo bloco 0: \n" << endl;
    cout << calcb0 << endl;
    cout << "\n Resultado do calculo bloco 1: \n" << endl;
    cout << calcb1 << endl;
    cout << "\n Resultado do calculo bloco 2: \n" << endl;
    cout << calcb2 << endl;
    cout << "\n Resultado do calculo bloco 3: \n" << endl;
    cout << calcb3 << endl;
    cout << "\n Resultado do calculo Geral: \n" << endl;
    cout << calcBezier << endl;
    return 0;
}
