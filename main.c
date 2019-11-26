// Student Name : Yordan Radev
// Student ID   : 260 744 314

#include "parse.h"
#include "findUpdate.h"
#include "prettyPrint.h"
#include "definitions.h"

int main() {

	// open file student.ssv
	
	FILE *p = fopen("students.ssv","r");
	
	if(p == NULL) return 1;

	char record[1000];
	
	// fgets the contents of the file (ended by \n or eof) into buffer
	fgets(record,999,p);

	while(feof(p) == 0){
		
		int accountNumber = 0;
		float accountBallance = 0;
		
		// call parse on current line
		parse(record,&accountNumber,&accountBallance);
		
		// call findUpdate on the parsed values of the current line
		findUpdate(accountNumber, accountBallance);
		
		// read the next line from the file to the buffer
		fgets(record,999,p);

	}

	fclose(p);

	// call prettyPrint after all the records have been processed
	prettyPrint();

	return 0;

}
