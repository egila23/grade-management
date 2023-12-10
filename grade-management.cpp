#include <iostream>
#include <vector>
#include <string>

class Student {
public:
    std::string name;
    std::vector<int> grades;

    double calculateAverageGrade() const {
        if (grades.empty()) return 0.0;
        int sum = 0;
        for (int grade : grades) {
            sum += grade;
        }
        return static_cast<double>(sum) / grades.size();
    }
};

int main() {
    std::vector<Student> students;

    Student student1{"Alice", {90, 85, 88}};
    Student student2{"Bob", {78, 92, 87}};

    students.push_back(student1);
    students.push_back(student2);

    for (const auto& student : students) {
        std::cout << "Student: " << student.name << ", Average Grade: " << student.calculateAverageGrade() << std::endl;
    }

    return 0;
}
