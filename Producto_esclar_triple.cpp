#include <iostream>
using namespace std;

int main()
{
    float vectora[3];
    float vectorb[3];
    float vectorc[3];
    double p_escalar, i, j, k;
    int ix;
    //LLenar vectores
    cout << "Introduce X, Y y Z del primer vector \n";
    for (ix = 0; ix < 3; ix++)
    {
        cin >> vectora[ix];
    }
    cout << "Introduce X, Y y Z del segundo vector \n";
    for (ix = 0; ix < 3; ix++)
    {
        cin >> vectorb[ix];
    }
    cout << "Introduce X, Y y Z del tercer vector \n";
    for (ix = 0; ix < 3; ix++)
    {
        cin >> vectorc[ix];
    }    
    
    i=(vectorb[1]*vectorc[2])-(vectorc[1]*vectorb[2]);
    j=(vectorb[0]*vectorc[2])-(vectorc[0]*vectorb[2]);
    k=(vectorb[0]*vectorc[1])-(vectorc[0]*vectorb[1]);  
	p_escalar=(vectora[0]*i)-(vectora[1]*j)+(vectora[2]*k);
        
    cout<<"El producto escalar es "<<p_escalar;

    return 0;
}

