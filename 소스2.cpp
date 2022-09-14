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

    cout << "산수 문제를 자동으로 출제합니다." << endl;
    cout << a <<" "<<b << endl;
    cout << "연산자 입력하기(+,-,*,/)" << endl;
    cin >> yeonsan;
    cout << "결과 입력하기" << endl;
    cin >> c;

    if (c == calculator(a, b, yeonsan)) {
        cout << "정답입니다" << endl;
    }
    else {
        cout << "틀렸습니다" << endl;
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