#include <iostream>
#include <vector>
#include <string>

// Forward declarations
class Departament;
class Course;
class Professor;
class Person;

// University class
class University {
    private:
        std::string name;
        std::vector<Departament*> departaments;
    public:
        University(const std::string& name) : name(name) {}
        void addDepartament(Departament* departament) {
            departaments.push_back(departament);
        }
};

// Department class
class Department {
private:
    std::string name;
    std::vector<Professor*> professors; // Aggregation
    std::vector<Course*> courses; // Composition
public:
    Department(const std::string& name) : name(name) {}
    ~Department() {
        for (auto course : courses) delete course; // Cleanup
    }
    void addProfessor(Professor* professor) {
        professors.push_back(professor);
    }
    void addCourse(const std::string& courseName) {
        courses.push_back(new Course(courseName));
    }
};

// Course class
class Course {
    private:
        std::string name;
    public:
        Course(const std::string& name) : name(name) {}
};         

// Person class
class Person {
    protected:
        std::string name;
    public:
        Person(const std::string& name) : name(name) {}
        virtual void displayInfo() = 0; // Pure virtual function
};

// Student class
class Student : public Person {
    private:
        int studentId;
    public:
        Student(const std::string& name, int id) : Person(name),
studentId(id) {}
    void displayInfo() override {
        std::cout << "Student Name: " << name << ", ID: " << studentId << std::endl;
    }
};
// Professor class
class Professor {
    private:
        std::string name;
    public:
        Professor(const std::string& name) : name(name) {}
        void teachCourse(Course* course) {
            std::cout << name << " is teaching " << course->name << std::endl;
        }
};

int main() {
    University uni("Tech University");
    Departament csDept("Computer Science");

    Professor prof1("Dr. Smith");
    Course course1("Data Structures");

    csDept.addProfessor(&prof1);
    csDept.addCourse("Algorithms");

    uni.addDepartment(&csDept);

    Student student1("Alice", 101)
    student1.displayInfo();

    prof1.teachCourse(&course1);

    return 0;
}