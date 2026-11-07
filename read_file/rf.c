#include <stdio.h>
#include <stdlib.h>



	int main(void) {
	    FILE *in = fopen("input.txt", "r");
       		 if (!in) {
            		perror("fopen");
        		return 1;
    		}

    		char buffer[1024];

    		while (fgets(buffer, sizeof buffer, in)) {
        // Do something with each line
	        	 printf("Line: %s", buffer);
	             }
	
	  fclose(in);
	  return 0;    
	


}
