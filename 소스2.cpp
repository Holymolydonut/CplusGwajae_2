#include <random>
#include <ctime>
#include <iostream>
#include <functional>

using namespace std;
double calculator(int a, int b, char yeonsan);

int main()
{
    mt19937 engine((unsigned int)time(NULL));
    uniform_int_distribution<int> distribution(1, 9);   
    auto generator = bind(distribution, engine);

    int a, b;
    char yeonsan;
    double c;

        a = generator();
        b = generator();

    cout << "��� ������ �ڵ����� �����մϴ�." << endl;
    cout << a <<" "<<b << endl;
    cout << "������ �Է��ϱ�(+,-,*,/)" << endl;
    cin >> yeonsan;
    cout << "��� �Է��ϱ�" << endl;
    cin >> c;

    if (c == calculator(a, b, yeonsan)) {
        cout << "�����Դϴ�" << endl;
    }
    else {
        cout << "Ʋ�Ƚ��ϴ�" << endl;
    }
    return 0;
}

double calculator(int a, int b, char yeonsan) {
    double dap = 0;

    if(yeonsan == '+'){
        dap = a + b;
    }
     else if (yeonsan == '-'){
        dap = a - b;
    }
     else if (yeonsan == '*'){
        dap = a * b;
    }
     else if (yeonsan == '/'){
        dap = a / b;
    }

    return dap;
}