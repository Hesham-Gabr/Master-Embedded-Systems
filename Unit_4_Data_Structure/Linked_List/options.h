#ifndef OPTIONS_H_
#define OPTIONS_H_

#include<stdio.h>
#include<stdint.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>


#define DPRINTF(...);	{fflush(stdin);\
						fflush(stdout);\
						printf(__VA_ARGS__);\
						fflush(stdin);\
						fflush(stdout);}
struct SData
{
	uint32_t ID;
	char Name[40];
	float height;
};

struct SStudent
{
	struct SData Student;
	struct SStudent* PNextStudent;
};


extern struct SStudent* gpFirstStudent;



void fill_record(struct SStudent* NStudent);
void add_student();
int delete_student();
void view_students(struct SStudent *pFirstStudent);
void delete_all_students();
struct SStudent* GetNth(uint32_t ind_ex);
void view_student(struct SStudent* pStudent,uint32_t ind_ex);
uint32_t GetLen_I(struct SStudent* pCurrentStudent);
uint32_t GetLen_R(struct SStudent* pCurrentStudent);
struct SStudent* GetNth_F_end_m1(uint32_t ind_ex);
struct SStudent* GetNth_F_end_m2(uint32_t ind_ex);
struct SStudent* GetMid_m1(uint32_t* mid);
struct SStudent* GetMid_m2(uint32_t* mid);
struct SStudent* rev_list(struct SStudent* pFirstStudent);
#endif /* OPTIONS_H_ */
