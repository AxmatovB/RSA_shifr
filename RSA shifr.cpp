#include <iostream>
#include <string>
using namespace std;

int main() {
    long long p = 61;      
    long long q = 53;     
    long long n = p * q;   
    long long phi = (p - 1) * (q - 1); 
    long long e = 17;      
    long long d = 2753;    

    int mode;
    cout << "Enter 0 or 1 :";
    cin >> mode;

    if (mode == 0) {
        string message;
        cout << "Add text: ";
        cin.ignore();
        getline(cin, message);

        cout << "Secret text: ";
        for (int j = 0; j < message.length(); j++) {
            long long m = static_cast<long long>(message[j]);
            long long result = 1;
            for (long long i = 0; i < e; i++) {
                result = (result * m) % n;
            }
            cout << result << " ";
        }
        cout << endl;

    } else if (mode == 1) {
        cout << "Add secret text: ";
        long long cipher;
        while (cin >> cipher) {
            long long result = 1;
            for (long long i = 0; i < d; i++) {
                result = (result * cipher) % n;
            }
            char ch = static_cast<char>(result); 
            cout << ch;
        }
        cout << endl;

    } else {
        cout << "no choice like your!" << endl;
    }

}
