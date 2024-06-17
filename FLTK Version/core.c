// C program for the above approach
#include <stdio.h>
#include <string.h>

// Driver Code
int main()
{
	// Substitute the full file path
	// for the string file_path
	FILE* fp = fopen("Passwords.csv", "r");

	if (!fp)
		printf("Can't open file\n");

	else {
		// Here we have taken size of
		// array 1024 you can modify it
		char buffer[1024];
        char categories[1024];
		int row = 0;
		int column = 0;
        int end_of_categories;
		while (fgets(buffer,1024, fp)) {
			column = 0;
            if(row==0){
                for (int i = 0; buffer[i] != '\0'; i++) {
                    categories[i]=buffer[i];
                    end_of_categories=i;


                
            }
            categories[end_of_categories]='\0';
            printf("%s \n",categories);
            }
			row++;

			// To avoid printing of column
			// names in file can be changed
			// according to need
			if (row == 1)
				continue;
            
			// Splitting the data
            printf("Title: ");
			for (int i = 0; buffer[i] != '\0'; i++) {
                printf("%c",buffer[i]);




            }
			printf("\n");
		}

		// Close the file
		fclose(fp);
	}
	return 0;
}
