/* Author: Ashley K. Smith
 * Solution for "C Programming A Modern Approach" chapter 8, programming project 15
 *
 * One of the oldest known encryption techniques is the Caesar cipher, attribued to Julius Caesar.
 * It involces replacing each letter in a message with another letter that is a fixed number of positions
 * later in the alphabet. If the replacement would go past the letter Z, the cipher "wraps around" to the
 * beginning of the alphabet. For example, if each lettr is replaced by the letter two positions
 * after it then Y would replaced by A, and Z would be replaced by B.
 *
 * Write a program that encrypts a message using a Caesar cipher. the user will enter
 * the message to be encrypted and the shift amount. You may assume the message does not exceed
 * 80 characters. Characters other than letter should be left unchanged. Lower-case letters remain
 * lower-case when encrypted, and upper case replain upper-case.
*/

#include <stdio.h>

int main(){
	char message[80] = {0};
	int i = 0, message_len = 0, shift_amount = 0, n = 0, x = 0;

	printf("Enter message to be encrypted: ");
	for(i = 0; i < 80 && (message[i] = getchar()) != '\n' ; i++){
		message_len++;
	}

	printf("Enter shift amount (1-25): ");
	scanf("%d", &shift_amount);

	for(i = 0; i < message_len; i++){
		message[i]++;
		x = message[i] + shift_amount;
		for(n = message[i]; n < x; n++){
			if(message[i] >= 'z')
				message[i] = 'a';
			if(message[i] >= 'Z' && message[i] < 'a')
				message[i] = 'A';
		}
	}



	printf("Encrypted message: ");
	for(i = 0; i < message_len; i++){
		printf("%c", message[i]);
	}
	printf("\n");
	return 0;
}
