#include<stdio.h>
#include<stdint.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include"options.h"

int main()
{
	char temp_txt[40];
	char ch = 'y';
	while(1 && !(ch == 'n' || ch == 'N'))
	{
		DPRINTF("______________________________________\n");
		DPRINTF("\tChoose one of the following options\n");
		DPRINTF("1: Add student\n");
		DPRINTF("2: Remove student\n");
		DPRINTF("3: Remove all\n");
		DPRINTF("4: View students\n");
		DPRINTF("5: View student\n");
		DPRINTF("6: To find length of a this linked list\n");
		DPRINTF("7: View student from end\n");
		DPRINTF("8: To find the middle of the list\n");
		DPRINTF("9: To reverse the list\n");
		fgets(temp_txt,40,stdin);
		DPRINTF("______________________________________\n");

		switch(atoi(temp_txt))
		{
		case 1:
			add_student();
			break;
		case 2:
			delete_student();
			break;
		case 3:
			delete_all_students();
			break;
		case 4:
			view_students(gpFirstStudent);
			break;
		case 5:
			DPRINTF("Enter Student's record: ");
			fgets(temp_txt,40,stdin);
			view_student(GetNth(atoi(temp_txt)),atoi(temp_txt));
			break;
		case 6:
			DPRINTF("GetLen_I: %d\n",GetLen_I(gpFirstStudent));
			DPRINTF("GetLen_R: %d\n",GetLen_R(gpFirstStudent));
			break;
		case 7:
			DPRINTF("Enter Student's index from end: ");
			fgets(temp_txt,40,stdin);
			DPRINTF("Method one: ");
			view_student(GetNth_F_end_m1(atoi(temp_txt)),atoi(temp_txt));
			DPRINTF("Method two: ");
			view_student(GetNth_F_end_m2(atoi(temp_txt)),atoi(temp_txt));
			break;
		case 8:
			uint32_t mid = 0;

			// Method 1
			struct SStudent* midStudent1 = GetMid_m1(&mid);
			if (midStudent1){
				DPRINTF("Method One: The middle student is at position %u\n", mid);
				view_student(midStudent1,mid);
			}
			else{
				DPRINTF("Method One: The list is empty.\n");
			}
			// Reset mid for the second method
			mid = 0;

			// Method 2
			struct SStudent* midStudent2 = GetMid_m2(&mid);
			if (midStudent2){
				DPRINTF("Method Two: The middle student is at position %u\n", mid);
				view_student(midStudent1,mid);
			}
			else{
				DPRINTF("Method Two: The list is empty.\n");
			}
			break;
		case 9:
			struct SStudent* pReversedList = rev_list(gpFirstStudent);
			if (pReversedList)
				view_students(pReversedList);
			else
			    printf("List reversal failed.\n");
			break;
		default :
			DPRINTF("Invalid choice!\n");
			break;
		}
		DPRINTF("_________To Exit Enter(n or N)_________\n ");
		scanf("%c",&ch);

	}
	struct SStudent* current = gpFirstStudent;
	struct SStudent* next;

	while (current != NULL) {
		next = current->PNextStudent; // Save the reference to the next node
		free(current);               // Free the current node
		current = next;              // Move to the next node
	}

	// Set the head pointer to NULL after freeing the list
	gpFirstStudent = NULL;
	return 0;
}

