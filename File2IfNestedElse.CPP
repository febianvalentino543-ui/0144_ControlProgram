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

int main(){
    float nilBI, nilMT, rerata;
    string status;

    cout << "Masukkan nilai Bahasa Inggris : ";
    cin >> nilBI;
    cout << "Masukkan nilai Matematika : ";
    cin >> nilMT;

    //rerata = Rata_rata(nilBI, nilMT);
    //if (rerata >= 60)
    //    status = "Lulus";
    //else 
        //status = "Gagal";
    rerata = Rata_rata(nilBI, nilMT);
    status = Status_lulus(rerata);

    cout << "Status kelulusan = "<<Status_lulus(rerata)<<" ,dengan nilai rerata = "<<rerata<<endl;
}