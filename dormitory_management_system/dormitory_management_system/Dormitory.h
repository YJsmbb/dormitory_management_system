/*
	�ļ�����Dormitory.h
	�����ļ���Dormitory.cpp
	���ܣ�ʵ��Dormitory��
	���ݣ�
*/
#ifndef DORMITORY_H
#define DORMITORY_H
#include<iostream>
using namespace std;
class Dormitory
{
public:
	Dormitory();//Ĭ�Ϲ��캯��
	Dormitory(int room_num_, int building_num, int floor_num, int room_num, int area, int repair_status, bool is_deleted);//�вι��캯��
	virtual ~Dormitory();

protected:
	int building_num_;//¥��
	int floor_num_;//¥���
	int room_num_;//�����
	double area_;//���
	string repair_status_;//�������
	bool is_deleted_ = false;//�߼�ɾ��

};
#endif // !DORMITORY_H