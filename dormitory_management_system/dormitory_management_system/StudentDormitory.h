/*
	�ļ�����StudentDormitory.h
	�����ļ���StudentDormitory.cpp
	���ܣ�����StudentDormitory��
	���ݣ�
*/
#ifndef STUDENTDORMITORY_H
#define STUDENTDORMITORY_H
#include<vector>
#include "Dormitory.h"
class StudentDormitory :
	public Dormitory
{
public:
	class Student;
	StudentDormitory();//Ĭ�Ϲ��캯��
	StudentDormitory(int room_num_, int building_num, int floor_num, int room_num, int area, int repair_status, bool is_deleted,
		int available_people, int actual_people, Student stu[], int price_per_student, int dormitory_actual_amount);//�вι��캯��
	~StudentDormitory();
	bool setDormitory();//����ֵ����Table���update������ʹ��
	/*
		ѧ����
	*/
	class Student {
		Student();
		Student(string sex, string faculty, string name, string student_ID);
		string sex_;//�Ա�
		string faculty_;//ѧԺ
		string name_;//ѧ������
		string student_ID_;//ѧ��
	};
private:
	/*
		�Ӹ���Dortory�̳���������
			int room_num_;//�����
			int building_num_;//¥��
			int floor_num_;//¥���
			int room_num_;//�����
			int area_;//���
			int repair_status_;//�������
			bool is_deleted_ = false;//�߼�ɾ��
	*/
	int available_people_;//��ס����
	int actual_people_;//ʵס����
	vector<Student> student_;//��¼ÿ��ѧ������Ϣ
	int price_per_student_;//ÿѧ���۸�
	int dormitory_actual_amount_;
	/*
		����ʵ�����ս��=ÿѧ���۸�*ʵס����
	*/

};
#endif	// !STUDENTDORMITORY_H