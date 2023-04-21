    string major;
    double gpa;

    Student(string aName, string aMajor, double aGpa) {
        name = aName;
        major = aMajor;
        gpa = aGpa;

    }

    bool hasHonors() {
        if (gpa >= 3.5) {
            return true;
        }
        return false;
    }

};

int main() {

    Student student1("Jim", "Business", 2.8);
    Student student2("Pam", "Art", 3.6);

    cout << student1.hasHonors()<<endl;
    cout << student2.hasHonors();
    
    return 0;
}
