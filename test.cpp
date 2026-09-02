#include <iostream>
#include <numeric>

using namespace std;

int main() {
   for (int i = 1; i < 5; i++) {       // 'i' Externa
    for (int i = 5; i >= 1; i--) {   // 'i' Interna (Redeclarada)
        cout<< i << " ";
     }
    cout<< endl;
     
    }
    cout << std::endl;
    
}