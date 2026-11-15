#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char* argv[]){

  char c='*';
  int h=5;
  int i;
  int j;
  int offset=0;
    
  if(argc>=3){
	if(strncmp(argv[1],"-c",2)==0){
	  c = argv[2][0];
	}
	else if(strncmp(argv[1],"-h",2)==0){
	  h = atoi(argv[2]);
	}
	else if(strncmp(argv[1],"-o",2)==0){
	  offset = atoi(argv[2]);
	}
	else{
	  printf("Unknown argument supply !");
	}
  }  
	  
  if(argc>=5){
	if(strncmp(argv[3],"-c",2)==0){
		c = argv[4][0];
	}
	else if(strncmp(argv[3],"-h",2)==0){
		h = atoi(argv[4]);
	}
	else if(strncmp(argv[3],"-o",2)==0){
		offset = atoi(argv[4]);
	}
	else{
		printf("Unknown argument supply !");
	}
  }

  if(argc>=7){
	if(strncmp(argv[5],"-c",2)==0){
		c = argv[5][0];
	}
	else if(strncmp(argv[5],"-h",2)==0){
		h = atoi(argv[6]);
	}
	else if(strncmp(argv[5],"-o",2)==0){
		offset = atoi(argv[6]);
	}
	else{
		printf("Unknown argument supply !");
	}
  }
  
  if(argc>=8){
		printf("Too many arguments !!!");
  }



  for(i=1;i<=h;i++){
    for(j=1;j<=h-i+offset;j++){
      printf(" ");
    }
    for(j=1;j<=2*i-1;j++){
      printf("%c",c);
    }
    printf("\n");
  }

  return 0;
}