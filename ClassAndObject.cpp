#include <bits/stdc++.h>
using namespace std;

class Employee {
private:
    int salary;

public:
    string employeeName;

    void setName(string s) {
        employeeName = s;
    }

    void setSalary(int val) {
        salary = val;
    }

    int getSalary() {
        return salary;
    }
};
