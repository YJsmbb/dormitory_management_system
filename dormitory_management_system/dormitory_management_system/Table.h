/*
	�ļ�����Table.h
	���ܣ�����Table��
	�����ļ���Table.cpp
	���ݣ�����Table�࣬���ָ����������������ӣ��Լ�����ɾ���顢�ĵĲ���
*/
#ifndef TABLE_H
#define TABLE_H
#include "StudentDormitory.h"
#include "TeacherDormitory.h"
#include <vector>

class Table
{
public:
	Table();
	~Table();

	bool create();//�������ļ��������ļ����в���
	bool open();//���ļ���ͬʱ���ж�ȡ��������ʼ��ָ������
	bool save();//�����ļ�

	bool insert();//�����¼
	/*
		����
		ѧ������ֻ���з������򣻶Խ�ʦ������б�š���������
		������Ҫ������ѧ�����ǽ�ʦ���ᣬ���з�֧
		*������Ҷ���is_deleted_ = true�ļ�¼�Խ�������
	*/
	bool search();//�����û���ʾ���������������Լ����Һ���

	void sortIDTeacher();//�Խ�ʦ���ᰴID��������
	void sortNameTeacher();//�Խ�ʦ���ᰴ������������
	void sortRoomNum();//�����Ž�������

	bool searchIDStudent();//��ѧ���������ID��˳�����
	bool searchIDTeacher();//�Խ�ʦ�������ID��˳�����
	void searchNameStudent();//��ѧ���������������˳�����
	void searchNameTeacher();//�Խ�ʦ������������Ķ��ֲ���
	bool searchRoomNum();//�����������Ķ��ֲ���
	bool update();//��
	bool remove();//ɾ
private:
	const static int student = 0;
	const static int teacher = 1;
	int flag = student;//flag��ǣ�student��ʾ��ǰtable��ѧ��������д���teacher��ʾ�Խ�ʦ������д���
	vector<StudentDormitory*> point_array_student_;//ѧ������ָ������
	vector<TeacherDormitory*> point_array_teacher_;//��ʦ����ָ������
	/*
		����Ϊͳ�����ԣ��������᷿����room_num_
	*/
	int room_num_ = 0;//���᷿����
	int total_amount_;//���з����ܼ�
	int price_per_building_;//	ѧ��/��ʦ���� ÿ��¥ƽ���۸�
	int price_per_room_;//����ƽ�������
	int price_per_meter_;//ƽ��ÿƽ�׼۸�

};
#endif // !TABLE_H