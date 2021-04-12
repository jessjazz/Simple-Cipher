#include <iostream>
#include <string>

using namespace std;

int main() {
    cout << "Enter secret message: ";
    string message {};
    string encrypted_message {};
    string decrypted_message {};
    getline(cin, message);
    
    string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ *"};
    string key {"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr* "};
    
    for (char c: message)
    {
        size_t position = alphabet.find(c);
        
        if (position != string::npos)
        {
            char new_char {key.at(position)};
            encrypted_message += new_char;
        }
        else 
        {
            encrypted_message += c;
        }
    }
    
    cout << "Your encrypted message: " << encrypted_message << endl;
    
    for (char c: encrypted_message)
    {
        size_t position = key.find(c);
        
        if (position != string::npos)
        {
            char new_char {alphabet.at(position)};
            decrypted_message += new_char;
        }
        else 
        {
            decrypted_message += c;
        }
    }
    
    cout << "Your decrypted message: " << decrypted_message << endl;
    
    return 0;
}