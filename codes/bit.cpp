#include <iostream>
#include <string>
using namespace std;

// Permission masks (bit flags)
const int READ    = 1 << 0;  // 0001 = 1
const int WRITE   = 1 << 1;  // 0010 = 2
const int EXECUTE = 1 << 2;  // 0100 = 4
const int DELETE  = 1 << 3;  // 1000 = 8

// Function to check if a user has a specific permission
bool hasPermission(int userPermissions, int permission) {
    return (userPermissions & permission) != 0;
}

// Function to grant a permission
void grantPermission(int &userPermissions, int permission) {
    userPermissions |= permission;
}

// Function to revoke a permission
void revokePermission(int &userPermissions, int permission) {
    userPermissions &= ~permission;
}

// XOR-based encryption/decryption (symmetric)
string xorEncryptDecrypt(const string &data, char key) {
    string result = data;
    for (size_t i = 0; i < result.length(); ++i) {
        result[i] ^= key; // XOR each character with key
    }
    return result;
}

int main() {
    // -------------------------------
    // Access Control Example
    // -------------------------------
    int userPermissions = 0;

    // Grant READ and WRITE permissions
    grantPermission(userPermissions, READ);
    grantPermission(userPermissions, WRITE);

    cout << "User Permissions: " << userPermissions << endl;

    cout << "Can READ? " << (hasPermission(userPermissions, READ) ? "Yes" : "No") << endl;
    cout << "Can EXECUTE? " << (hasPermission(userPermissions, EXECUTE) ? "Yes" : "No") << endl;

    // Revoke WRITE permission
    revokePermission(userPermissions, WRITE);
    cout << "After revoking WRITE, Can WRITE? " << (hasPermission(userPermissions, WRITE) ? "Yes" : "No") << endl;

    // -------------------------------
    // Encryption Example
    // -------------------------------
    string original = "TopSecret123";
    char key = 'K'; // Simple XOR key

    string encrypted = xorEncryptDecrypt(original, key);
    string decrypted = xorEncryptDecrypt(encrypted, key); // XOR again with same key

    cout << "\nOriginal:  " << original << endl;
    cout << "Encrypted: " << encrypted << endl;
    cout << "Decrypted: " << decrypted << endl;

    return 0;
}
