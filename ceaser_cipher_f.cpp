#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char txt[50], enc_txt[50], dec_txt[50];
    int key, i;
    char ch;

    cout << "Enter the text:\n";
    cin >> txt;
    cout << "Enter the key:\n";
    cin >> key;

    for (i = 0; i < strlen(txt); i++) {
        if (isupper(txt[i])) {
            ch = (txt[i] + key - 65) % 26 + 65;
            enc_txt[i] = ch;
        } else {
            ch = (txt[i] + key - 97) % 26 + 97;
            enc_txt[i] = ch;
        }
    }
    enc_txt[i] = '\0';

    cout << "Encrypted Text: " << enc_txt << endl;

    char final1[50];

    for (i = 0; i < strlen(enc_txt); i++) {
        if (isupper(enc_txt[i])) {
            ch = (enc_txt[i] - key - 65) % 26 + 65;
            final1[i] = ch;
        } else {
            ch = (enc_txt[i] - key - 97) % 26 + 97;
            final1[i] = ch;
        }
    }
    final1[i] = '\0';

    cout << "Decrypted Text: " << final1 << endl;

    return 0;
}
