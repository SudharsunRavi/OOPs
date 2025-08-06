class Employee {
public:
    string name;

protected:
    int employeeId;

private:
    double salary;

public:
    Employee(string name, int employeeId, double salary) {
        this->name = name;
        this->employeeId = employeeId;
        if (salary >= 0) {
            this->salary = salary;
        } else {
            this->salary = 0.0;
            cout << "Invalid salary" << endl;
        }
    }

    void setSalary(double salary) {
        if (salary < 0) {
            cout << "Invalid salary" << endl;
            this->salary = 0.0;
            return;
        }
        this->salary = salary;
    }

    double getSalary() {
        return salary;
    }

    void displayEmployeeDetails() {
        cout << "Name : " << name << endl;
        cout << "Employee Id : " << employeeId << endl;
        printf("Salary : %.2f\n", salary);
    }
};
