/*
	�ļ�����StudentDormitory.cpp
	�����ļ���StudentDormitory.h
	���ܣ�ʵ��StudentDormitory��
	���ݣ�
*/
#include "StudentDormitory.h"

StudentDormitory::Student::Student(string sex, string faculty, string name, string student_ID)
{
	sex_ = sex;
	faculty_ = faculty;
	name_ = name;
	student_ID_ = student_ID;
}

StudentDormitory::StudentDormitory()
{
}
/*
	StudentDormitory
	���ܣ��вι���StudentDormitory�����
	���ݣ�
*/
StudentDormitory::StudentDormitory(int room_num_, int building_num, int floor_num, int room_num, int area, int repair_status, bool is_deleted, int available_people, int actual_people, Student stu[], int price_per_student, int dormitory_actual_amount)
{
}


StudentDormitory::~StudentDormitory()
{
}

bool StudentDormitory::setDormitory()
{
	return false;
}
