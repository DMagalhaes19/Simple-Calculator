#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

#define PI 3.14159265

using namespace std;

void sin_func();
void cos_func();
void tan_func();
void cot_func();
void sec_func();
void cosec_func();
void log_func();
void log10_func();
void log2_func();
void exp_func();
void pow_func();
void sqrt_func();
void fact_func();
void mod_func();
void abs_func();
void ceil_func();
void floor_func();
void round_func();
void rand_func();
void max_func();
void min_func();
void avg_func();
void sum_func();
void diff_func();
void mul_func();
void div_func();
void median_func();
void mode_func();
void range_func();
void sd_func();
void var_func();
void clear_func();
void exit_func();

int main() {
    while (true) {
        cout << "Select an operation:" << endl;
        cout << "1. Sine\n2. Cosine\n3. Tangent\n4. Cotangent\n5. Secant\n6. Cosecant\n7. Logarithm (base e)\n8. Logarithm (base 10)\n9. Logarithm (base 2)\n10. Exponential\n11. Power\n12. Square Root\n13. Factorial\n14. Modulus\n15. Absolute Value\n16. Ceil\n17. Floor\n18. Round\n19. Random\n20. Max\n21. Min\n22. Average\n23. Sum\n24. Difference\n25. Multiplication\n26. Division\n27. Median\n28. Mode\n29. Range\n30. Standard Deviation\n31. Variance\n32. Clear Screen\n33. Exit" << endl;

        int choice;
        cin >> choice;

        switch (choice) {
            case 1: sin_func(); break;
            case 2: cos_func(); break;
            case 3: tan_func(); break;
            case 4: cot_func(); break;
            case 5: sec_func(); break;
            case 6: cosec_func(); break;
            case 7: log_func(); break;
            case 8: log10_func(); break;
            case 9: log2_func(); break;
            case 10: exp_func(); break;
            case 11: pow_func(); break;
            case 12: sqrt_func(); break;
            case 13: fact_func(); break;
            case 14: mod_func(); break;
            case 15: abs_func(); break;
            case 16: ceil_func(); break;
            case 17: floor_func(); break;
            case 18: round_func(); break;
            case 19: rand_func(); break;
            case 20: max_func(); break;
            case 21: min_func(); break;
            case 22: avg_func(); break;
            case 23: sum_func(); break;
            case 24: diff_func(); break;
            case 25: mul_func(); break;
            case 26: div_func(); break;
            case 27: median_func(); break;
            case 28: mode_func(); break;
            case 29: range_func(); break;
            case 30: sd_func(); break;
            case 31: var_func(); break;
            case 32: clear_func(); break;
            case 33: exit_func(); break;
            default: cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}

// Define the functions for various operations (similar to your original code)

void sin_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "sin(" << x << ") = " << sin(x * PI / 180) << endl;
}

// Define other functions in a similar manner
void cos_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "cos(" << x << ") = " << cos(x * PI / 180) << endl;
}

void tan_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "tan(" << x << ") = " << tan(x * PI / 180) << endl;
}

void cot_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "cot(" << x << ") = " << 1 / tan(x * PI / 180) << endl;
}

void sec_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "sec(" << x << ") = " << 1 / cos(x * PI / 180) << endl;
}

void cosec_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "cosec(" << x << ") = " << 1 / sin(x * PI / 180) << endl;
}

void log_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "log(" << x << ") = " << log(x) << endl;
}

void log10_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "log10(" << x << ") = " << log10(x) << endl;
}

void log2_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "log2(" << x << ") = " << log2(x) << endl;
}

void exp_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "exp(" << x << ") = " << exp(x) << endl;
}

void pow_func() {
    double x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "pow(" << x << ", " << y << ") = " << pow(x, y) << endl;
}

void sqrt_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "sqrt(" << x << ") = " << sqrt(x) << endl;
}

void fact_func() {
    int x;
    cout << "Enter the value of x: ";
    cin >> x;
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact *= i;
    }
    cout << "fact(" << x << ") = " << fact << endl;
}

void mod_func() {
    int x, y;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "Enter the value of y: ";
    cin >> y;
    cout << "mod(" << x << ", " << y << ") = " << x % y << endl;
}

void abs_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "abs(" << x << ") = " << abs(x) << endl;
}

void ceil_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "ceil(" << x << ") = " << ceil(x) << endl;
}

void floor_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "floor(" << x << ") = " << floor(x) << endl;
}

void round_func() {
    double x;
    cout << "Enter the value of x: ";
    cin >> x;
    cout << "round(" << x << ") = " << round(x) << endl;
}

void rand_func() {
    cout << "rand() = " << rand() << endl;
}

void max_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "max = " << *max_element(v.begin(), v.end()) << endl;
}

void min_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    cout << "min = " << *min_element(v.begin(), v.end()) << endl;
}

void avg_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    cout << "avg = " << sum / n << endl;
}

void sum_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    cout << "sum = " << sum << endl;
}

void diff_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int diff = v[0];
    for (int i = 1; i < n; i++) {
        diff -= v[i];
    }
    cout << "diff = " << diff << endl;
}

void mul_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int mul = 1;
    for (int i = 0; i < n; i++) {
        mul *= v[i];
    }
    cout << "mul = " << mul << endl;
}

void div_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    int div = v[0];
    for (int i = 1; i < n; i++) {
        div /= v[i];
    }
    cout << "div = " << div << endl;
}

void median_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }
    sort(v.begin(), v.end());
    if (n % 2 == 0) {
        cout << "median = " << (v[n / 2] + v[n / 2 - 1]) / 2 << endl;
    } else {
        cout << "median = " << v[n / 2] << endl;
    }
}

void mode_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    int max_count = 1, curr_count = 1, res = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] == v[i - 1]) {
            curr_count++;
        } else {
            if (curr_count > max_count) {
                max_count = curr_count;
                res = v[i - 1];
            }
            curr_count = 1;
        }
    }
    if (curr_count > max_count) {
        max_count = curr_count;
        res = v[n - 1];
    }
    cout << "mode = " << res << endl;
}

void range_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<int> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    cout << "range = " << v[n - 1] - v[0] << endl;
}

void sd_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<double> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    double mean = sum / n;

    double sq_diff_sum = 0;
    for (int i = 0; i < n; i++) {
        sq_diff_sum += (v[i] - mean) * (v[i] - mean);
    }
    double sd = sqrt(sq_diff_sum / n);
    cout << "sd = " << sd << endl;
}

void var_func() {
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    vector<double> v(n);
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    double sum = 0;
    for (int i = 0; i < n; i++) {
        sum += v[i];
    }
    double mean = sum / n;

    double sq_diff_sum = 0;
    for (int i = 0; i < n; i++) {
        sq_diff_sum += (v[i] - mean) * (v[i] - mean);
    }
    double var = sq_diff_sum / n;
    cout << "var = " << var << endl;
}

void clear_func() {
    system("clear");
}

void exit_func() {
    exit(0);
}