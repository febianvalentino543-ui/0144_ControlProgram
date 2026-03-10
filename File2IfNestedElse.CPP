#include <iostream>
using namespace std;

float Rata_rata(float a, float b){
    return (a+b)/2;
}

string Status_lulus(float r){
    if (r >= 60)
        return "Lulus";
    else if (r >= 50) 
        return "Lulus dipertimbangkan";
    else if (r >= 40)
        return "Lulus tetapi matrikulasi 1 tahun";
    else
        return "Tidak Lulus";
}

