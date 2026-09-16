#include <iostream>
using namespace std;

class Patient {
private:
    int Id;
    string Name;
    static int activePatients;
public:
    Patient(int id,string name) {
        Id = id;
        Name = name;
        activePatients++;
    }
    ~Patient(){
        activePatients--;
    }
    static void showActivePatients() {
        cout<<"Active Patients: "<<activePatients<<endl;
    }
};
int Patient::activePatients = 0;
int main(){
    Patient p1(101, "Mohit");
    Patient p2(102, "Vikas");

    cout << "After creating 2 patients:" << endl;
    Patient::showActivePatients();
    {
        Patient p3(103, "Aman");
        cout << "Inside the block:" << endl;
        Patient::showActivePatients();
    }
    cout << "After the block ends:" << endl;
    Patient::showActivePatients();
    return 0;
}