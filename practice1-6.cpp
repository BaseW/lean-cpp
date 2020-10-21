#include <iostream>

using namespace std;

int main() {
    string familyName, name;
    cout << "姓を入力してください: ";
    cin >> familyName;
    cout << "名前を入力してください: ";
    cin >> name;
    cout << "名前は「" << familyName + name << "」です。" << endl;
    return 0;
}