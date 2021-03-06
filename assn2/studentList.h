#ifndef __STUDENT_LIST_H
#define __STUDENT_LIST_H

typedef struct
{
        char sub_code[8];
        char grade[3];
}TAKING_SUBJECTS;

typedef struct student
{
       int id;
       char name[11];
       char dept[7];
       int level;
       int sub_num;
       TAKING_SUBJECTS subjects[8];
       struct student *next;
}STUDENT;

typedef struct
{
	STUDENT* head;
}SLIST;


void init_list_student(SLIST *pList);
void insert_list_student(SLIST* List, STUDENT data);


#endif
