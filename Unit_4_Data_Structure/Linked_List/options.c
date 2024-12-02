#include<stdio.h>
#include<stdint.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include"options.h"

struct SStudent* gpFirstStudent = NULL;

void fill_record(struct SStudent* NStudent)
{
	char temp_txt[40];
	if(NStudent)
	{
		DPRINTF("Enter student's ID: ");
		fgets(temp_txt,40,stdin);
		NStudent->Student.ID = atoi(temp_txt);
		DPRINTF("Enter student's name: ");
		fgets(NStudent->Student.Name,40,stdin);
		DPRINTF("Enter student's Height: ");
		fgets(temp_txt,40,stdin);
		NStudent->Student.height = atof(temp_txt);
	}
	else
	{
		DPRINTF("There is no space!\n");
	}
}

void add_student()
{
	struct SStudent* pNewStudent;
	struct SStudent* pPrevStudent;
	if(gpFirstStudent == NULL)
	{
		//create the first record
		pNewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
		gpFirstStudent = pNewStudent;
	}
	else
	{
		pPrevStudent = gpFirstStudent;
		while(pPrevStudent->PNextStudent)
		{
			pPrevStudent = pPrevStudent->PNextStudent;
		}
		pNewStudent = (struct SStudent*)malloc(sizeof(struct SStudent));
		pPrevStudent->PNextStudent = pNewStudent;
		pNewStudent->PNextStudent = NULL;
	}
	//fill the record
	fill_record(pNewStudent);
}

int delete_student()
{
	char temp_txt[40];
	uint32_t selected_id;
	DPRINTF("Enter student's ID for the student you want to delete: ");
	fgets(temp_txt,40,stdin);
	selected_id = atoi(temp_txt);
	if(gpFirstStudent)	//check list is empty
	{
		struct SStudent* pPrevStudent = NULL;
		struct SStudent* pSelectedStudent = gpFirstStudent;
		while(pSelectedStudent)
		{
			if(pSelectedStudent->Student.ID==selected_id)
			{
				if(pPrevStudent)
				{
					pPrevStudent->PNextStudent = pSelectedStudent->PNextStudent;
				}
				else
				{
					gpFirstStudent = pSelectedStudent->PNextStudent;
				}
				free(pSelectedStudent);
				return 1;
			}
			pPrevStudent = pSelectedStudent;
			pSelectedStudent = pSelectedStudent->PNextStudent;
		}
		DPRINTF("Cannot find this ID!\n");
		return 0;
	}
	DPRINTF("Empty list!\n");
	return 0;
}
void view_students(struct SStudent* pFirstStudent)
{
	struct SStudent* pCurrentStudent = pFirstStudent;
	uint32_t count = 1;
	if(pFirstStudent == NULL)
	{
		DPRINTF("Empty list\n");
	}
	else
	{	while(pCurrentStudent)
	{
		DPRINTF("record number %d\n",count);
		DPRINTF("\tStudent ID: %d\n",pCurrentStudent->Student.ID);
		DPRINTF("\tStudent Name: %s",pCurrentStudent->Student.Name);
		DPRINTF("\tStudent Height: %0.3f\n",pCurrentStudent->Student.height);
		pCurrentStudent = pCurrentStudent->PNextStudent;
		count++;
	}
	}

}

void delete_all_students()
{
	struct SStudent* pCurrentStudent = gpFirstStudent;
	struct SStudent* ptempStudent = NULL;
	if(gpFirstStudent == NULL)
	{
		DPRINTF("Empty list\n");
	}
	else
	{	while(pCurrentStudent)
	{
		ptempStudent = pCurrentStudent;
		pCurrentStudent = pCurrentStudent->PNextStudent;
		free(ptempStudent);
	}
	gpFirstStudent = NULL;
	}
}

struct SStudent* GetNth(uint32_t ind_ex)
{
	struct SStudent* pCurrentStudent = gpFirstStudent;
	uint32_t count = 0;
	while(pCurrentStudent )
	{
		++count;
		if(count == ind_ex)
			break;
		pCurrentStudent = pCurrentStudent->PNextStudent;
	}
	if(count == 0)
		return (struct SStudent*)NULL;
	else
		return pCurrentStudent;
}

void view_student(struct SStudent* pStudent,uint32_t ind_ex)
{
	if(pStudent == NULL)
		printf("This record is not exist!\n");
	else{
		DPRINTF("record number %d\n",ind_ex);
		DPRINTF("\tStudent ID: %d\n",pStudent->Student.ID);
		DPRINTF("\tStudent Name: %s",pStudent->Student.Name);
		DPRINTF("\tStudent Height: %0.3f\n",pStudent->Student.height);
	}
}

uint32_t GetLen_I(struct SStudent* pCurrentStudent)
{
	uint32_t count = 0;
	while(pCurrentStudent)
	{
		pCurrentStudent = pCurrentStudent->PNextStudent;
		count++;
	}
	return count;
}
uint32_t GetLen_R(struct SStudent* pCurrentStudent)
{
	if(pCurrentStudent==NULL)
		return 0;
	else
		return 1 + GetLen_R(pCurrentStudent->PNextStudent);

}

struct SStudent* GetNth_F_end_m1(uint32_t ind_ex)
{
	uint32_t len;
	struct SStudent* pCurrentStudent = gpFirstStudent;
	len = GetLen_R(pCurrentStudent);
	uint32_t count = 0;
	while(pCurrentStudent )
	{
		++count;
		if(count == (len-ind_ex+1))
			break;
		pCurrentStudent = pCurrentStudent->PNextStudent;
	}
	if(count == 0)
		return (struct SStudent*)NULL;
	else
		return pCurrentStudent;
}

struct SStudent* GetNth_F_end_m2(uint32_t ind_ex)
{
	struct SStudent* main_ptr = gpFirstStudent;
	struct SStudent* ref_ptr = gpFirstStudent;
	uint32_t count = 0;
	//check if the list is empty
	if(!gpFirstStudent){
		return NULL;
	}
	while(count<ind_ex)
	{
		if(!ref_ptr)
		{
			return NULL;
		}
		count++;
		ref_ptr = ref_ptr->PNextStudent;
	}
	while(ref_ptr)
	{
		ref_ptr = ref_ptr->PNextStudent;
		main_ptr = main_ptr->PNextStudent;
	}
	return main_ptr;
}

struct SStudent* GetMid_m1(uint32_t* mid)
{
	// check if the list is empty
	if(!gpFirstStudent)
		return NULL;

	struct SStudent* pCurrentStudent = gpFirstStudent;
	uint32_t len = GetLen_I(pCurrentStudent);
	uint32_t count = 0;
	if(len==1)
	{
		*mid = 1;
		return pCurrentStudent;
	}
	if(len==2)
	{
		*mid = 2;
		return pCurrentStudent->PNextStudent;
	}

	*mid = (len/2)+1;
	for (count = 1; count < *mid; count++)
	{
		pCurrentStudent = pCurrentStudent->PNextStudent;
	}
	return pCurrentStudent;
}
struct SStudent* GetMid_m2(uint32_t* mid)
{
	//check if list is empty
	if(!gpFirstStudent)
		return NULL;

	struct SStudent* Fast_ptr = gpFirstStudent;
	struct SStudent* Slow_ptr = gpFirstStudent;
	uint32_t count = 1;
	while(Fast_ptr && Fast_ptr->PNextStudent)
	{
		Slow_ptr = Slow_ptr->PNextStudent;
		Fast_ptr = Fast_ptr->PNextStudent->PNextStudent;
		count++;
	}
	*mid = count;
	return Slow_ptr;
}

struct SStudent* rev_list(struct SStudent* pFirstStudent)
{
	if(!pFirstStudent || !pFirstStudent->PNextStudent)
	{
		if(!pFirstStudent)
			printf("Empty list!\n");
		return pFirstStudent;
	}
	struct SStudent* pCurrentStudent = pFirstStudent;
	struct SStudent* pNextStudent = NULL;
	struct SStudent* pPrevStudent = NULL;

	while (pCurrentStudent)
	{
		pNextStudent = pCurrentStudent->PNextStudent;
		pCurrentStudent->PNextStudent = pPrevStudent;
		pPrevStudent = pCurrentStudent;
		pCurrentStudent = pNextStudent;
	}
	return pPrevStudent;
}
