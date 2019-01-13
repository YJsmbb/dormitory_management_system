/*
	�ļ�����TeacherDormitory.h
	�����ļ���TeacherDormitory.cpp
	���ܣ�����TeacherDormitory��
	���ݣ�
*/
#ifndef TEACHERDORMITORY_H
#define TEACHERDORMITORY_H
#include "Dormitory.h"
class TeacherDormitory :
	public Dormitory
{
public:
	TeacherDormitory();//Ĭ�Ϲ��캯��
	TeacherDormitory(int room_num_, int building_num, int floor_num, int room_num, int area, int repair_status, bool is_deleted,
		string teacher_ID, int move_in_year, int living_duration, int rent_per_month, int utility_bills, int total_amount);//�вι��캯��
	~TeacherDormitory();

	bool setTeacherDormitory();//����ֵ����Table���update������ʹ��
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
	string teacher_ID_;//��ס��ʦ����
	int move_in_year_;//�������
	int living_duration_;//��סʱ��
	int rent_per_month_;//�����
	/*
		����� = ��1/2 *(��ǰ���-��ס���) + 1) * 5 * ���
	*/
	int utility_bills_;//ˮ���
	int total_amount_;//�ܷ���

};

#endif  // !TEACHERDORMITORY_H