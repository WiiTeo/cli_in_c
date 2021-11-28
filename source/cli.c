#include <stdio.h>
#include <stdlib.h>

int main() {
	printf("CLI IN C (By WiiTeo)\n\n");
	char response[5];
	CLI:
		printf("CLI:>");
    scanf("%s", response);
    if (strcmp(response, "hello")==0){
    			printf("Hey Bro\n");
    			goto CLI;
		}
		if (strcmp(response, "exit")==0){
    			printf("cli: logout.");
    			return 0;
    }
		else {
			goto CLI;
		}
}
