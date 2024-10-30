#include <iostream>
#include <string>

using namespace std;

size_t ProcessString(const string& s, string& result) {
    size_t start = 0;
    size_t pos = s.find(' '); // Знайти перший пробіл

    // Якщо пробіл не знайдено, обробляємо весь рядок
    if (pos == string::npos) {
        pos = s.length();
    }

    // Обробка символів до першого пробілу
    while (start < pos) {
        char ch = s[start];

        // Додаємо тільки літери та цифри
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            // Перетворюємо велику літеру на малу
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A');
            }
            result += ch;
        }
        start++;
    }

    return result.length(); // Повертаємо довжину результатного рядка
}

int main() {
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    string processedStr;
    size_t processedLength = ProcessString(str, processedStr);

    cout << "Processed string: " << processedStr << endl;
    cout << "Processed string length: " << processedLength << endl;

    return 0;
}
