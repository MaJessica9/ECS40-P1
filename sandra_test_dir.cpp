// Author: Sandra

#include <stdio.h>
#include <stdlib.h>

#define SUBDIR 3

typedef struct Dir
{
	char *d_name[];
	int time;
	int exist_subdir;

	int *array[SUBDIR];
	struct Dir *subdir, *parent, *root;
	//struct Permission *perm;
			
}Directory;

void createDirectory(Directory *Dire, const char *name[]);

int main (void){
	Directory *D = (Directory*)malloc(sizeof(Directory));
	const char *n[1] = {"3"};
	createDirectory(D, n);	
	return 0;
}
void createDirectory(Directory *Dire, const char *name[]) {
	if(name[0] == "/"){
		Dire-> d_name = name;
		Dire-> time;
		Dire-> exist_subdir; 	 
		
	}
	//CHECK IF 3 DIR
  	if(Dire->exist_subdir == 3){
		printf("mkdir: %s already contains the maximum number of directories\n", Dire->d_name); 
		Directory *subdirectory = (Directory *) malloc (sizeof(Directory));
	} 

	else {
		Directory *subdirectory = (Directory *) malloc (sizeof(Directory));
		Dire-> exist_subdir ++;
	}
}//createDirectory
