// Student Name : Yordan Radev
// Student ID   : 260 744 314

#include "Account.h"
#include "definitions.h"

// Declare the list head as a private global variable
struct ACCOUNT *head = NULL;

void findUpdate(int account, int ammount) {

	// Create a copy of the linked-list head
	struct ACCOUNT *copy = head;

	// Temporary ACCOUNT
	struct ACCOUNT *temp = (struct ACCOUNT *)malloc(sizeof(struct ACCOUNT));
	if(temp == 0) exit(1);

	temp->accountNumber = account;
	temp->balance = ammount;
	
	int boolean = 0;

	while(copy != 0) {
		if(copy->accountNumber == account) {
			boolean = 1;
			break;
		}
		copy = copy->next;
	}
	// If there is no match, append the new account at the beginning of the list
	if(boolean==0) {
		temp->next = head;
		head = temp;
	}
	// If there is a match, the variabble boolean =1 so add the ammount to the ACCOUNT.balance
	if(boolean == 1){
		copy->balance += ammount;
	}

}

void prettyPrint() {
	// Create a copy of the linked-list head
	struct ACCOUNT *temp = head;
	
	// Print line by line in the style required
	while(temp != 0) {

		printf("ACCOUNT ID: %d \t BALANCE: $ %9.2f \n",temp->accountNumber,temp->balance);
		temp = temp->next;
	}

}
