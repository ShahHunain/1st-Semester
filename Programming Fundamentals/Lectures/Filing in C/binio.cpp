#include <stdio.h>

struct record
{ 
  int a,b,c;
};

int main()
{ 
  int count;
  FILE *ptr;
  struct record myRecord;
  ptr=fopen("test.bin","wb");
  if (!ptr)
  { 
   printf("Unable to open file!");
   return 1;
  }
   
  
   myRecord.a= 10;
   myRecord.b= 20;
   myRecord.c= 30;
  for(i=0;i<3;i++){
   // input in array
}
   fwrite(&myRecord+3, sizeof(struct record),1,  ptr);
  fclose(ptr);
 */
  //ptr=fopen("test.bin","rb");
  
  myRecord.a= 1;
   myRecord.b= 1;
   myRecord.c= 1;
 
 //fwrite(&myRecord, sizeof(struct record), 3, ptr);
 fread(&myRecord, sizeof(struct record), 1, ptr);
 
 
 printf("%d %d %d\n",myRecord.a,myRecord.b,myRecord.c);
 
 return 0;
}


