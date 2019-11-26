// Student Name : Yordan Radev
// Student ID   : 260 744 314

#include "definitions.h"


void parse(char record[], int *acct, float *amnt) {
	char accountNumber[20];
	char ammount[20];
	
	// user inputs a record (line)
	sscanf(record,"%s %s", accountNumber, ammount);
	
	// cast the char accountNumber[] to an int type
	*acct = atoi(accountNumber);
	// cast the char ammount[] to a float type
	char *pEnd2;
	*amnt = strtof(ammount,&pEnd2);
	
}
