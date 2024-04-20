#include <iostream>
#include <string>

using namespace std;


string arrayMSSV[5] = {"", "2301CT1234", "2302CT3456", "2305CT3999", "2304CT0002"};


void nhapMSSV() {
    cout << "Nhap MSSV cua ban: ";
    getline(cin, arrayMSSV[0]);
}


void inMSSV() {
    cout << "MSSV truoc khi sap xep:\n";
    for (int i = 0; i < 5; ++i) {
        cout << "Index " << i << ": " << arrayMSSV[i] << endl;
    }
}


void sapXepMSSV() {
   
    for (int i = 0; i < 4; ++i) {
        for (int j = 0; j < 4 - i; ++j) {
         
            if (arrayMSSV[j] > arrayMSSV[j + 1]) {
               
                string temp = arrayMSSV[j];
                arrayMSSV[j] = arrayMSSV[j + 1];
                arrayMSSV[j + 1] = temp;
            }
        }
    }
}


void timDiaChiMaxMSSV() {
    string maxMSSV = "2305CT3999"; 
    string *ptrMaxMSSV;

    
    for (int i = 0; i < 5; ++i) {
        if (arrayMSSV[i] == maxMSSV) {
            ptrMaxMSSV = &arrayMSSV[i];
            break;
        }
    }

  
    cout << "Dia chi cua phan tu chua MSSV lon nhat: " << ptrMaxMSSV << endl;
    cout << "Gia tri cua phan tu: " << *ptrMaxMSSV << endl;
}

int main() {
 
    nhapMSSV();

    
    inMSSV();

    
    sapXepMSSV();

  
    cout << "\nMSSV sau khi sap xep:\n";
    inMSSV();

   
    timDiaChiMaxMSSV();

    return 0;
}