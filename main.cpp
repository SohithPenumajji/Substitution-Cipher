#include <iostream>
#include <string>

using namespace std;

int main()
{
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    string key {"ZYXWVUTSRQPONMLKJIHGFEDCBAzyxwvutsrqponmlkjihgfedcba"};

    string secret_message {};
    cout << "Enter your secret message: ";
    getline(cin, secret_message);

    string encrypted_message {};
    cout << "\nEncrypting Message....." << endl;

    for (char c : secret_message) {
        size_t position = alphabet.find(c);
        if (position != string::npos) {
            char new_char {key.at(position)};
            encrypted_message += new_char;
        } else {
            encrypted_message += c;
        }
    }
    cout << "Encrypted Message: " << encrypted_message << endl;

    string decrypted_message {};
    cout << "\nDecrypting Message....." << endl;

    for (char c: encrypted_message) {
        size_t position = key.find(c);
        if (position != string::npos){
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        }else {
        decrypted_message += c;
        }
    }

    cout << "\nDecrypted Message: " << decrypted_message << endl;

    return 0;
}
