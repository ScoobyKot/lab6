

#ifndef JMP2_STUDENTREPOSITORY_H
#define JMP2_STUDENTREPOSITORY_H


#include "Student.h"
#include <vector>

class StudentRepository {
private:
    std::vector<Student> all_students;
public:

    Student operator[](int index);

    void add_student(const Student& student);

};


#endif //JMP2_STUDENTREPOSITORY_H
