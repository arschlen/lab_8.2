#include <iostream>
#include <string>

using namespace std;

size_t ProcessString(const string& s, string& result) {
    size_t start = 0;
    size_t pos = s.find(' '); // ������ ������ �����

    // ���� ����� �� ��������, ���������� ���� �����
    if (pos == string::npos) {
        pos = s.length();
    }

    // ������� ������� �� ������� ������
    while (start < pos) {
        char ch = s[start];

        // ������ ����� ����� �� �����
        if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            // ������������ ������ ����� �� ����
            if (ch >= 'A' && ch <= 'Z') {
                ch = ch + ('a' - 'A');
            }
            result += ch;
        }
        start++;
    }

    return result.length(); // ��������� ������� ������������� �����
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
