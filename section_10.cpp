#include <iostream>
#include <string>
#include <chrono>
#include <thread>
#include <cctype>
using namespace std;

int main() {
        // The actual alphabet:
        string alphabet {"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVXWYZ0123456789"};
        // The key to encrypt and decrypt:
        string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr3210987645"};
        // Checks I don't need anymore
        //cout << "Length of alphabet: " << alphabet.length() << endl;
        //cout << "Length of key: " << key.length() << endl;
        
        // Taking user input:
        string user_input;
        cout << "Enter your secret message (press enter when done): ";
        getline(cin, user_input);
        cout << endl;
        //Check I dont need anymore
        //cout << user_input << endl;

        // Encryption magic:
        string encrypted_message;
        for (size_t i {0}; i < user_input.length(); i++) {
                if (isspace(user_input.at(i))) {
                        encrypted_message +=' ';
                } else {
                        int current_letter = alphabet.find(user_input.at(i));
                        encrypted_message += key.at(current_letter);

                }
        }
        // Return the encrypted message:
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\nEncrypting message...\n" << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << "Encrypted message: " << encrypted_message << "\n" << endl;

        // Decryption magic:
        string decrypted_message;
        for (size_t i {0}; i < encrypted_message.length(); i++) {
                if (isspace(encrypted_message.at(i))) {
                        decrypted_message += ' ';
                } else {
                        int current_letter = key.find(encrypted_message.at(i));
                        decrypted_message += alphabet.at(current_letter);
                }
        }
        this_thread::sleep_for(chrono::seconds(1));
        cout << "\nDecrypting message...\n" << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << "Decrypted message: " << decrypted_message << "\n" << endl;
        return 0;
}
