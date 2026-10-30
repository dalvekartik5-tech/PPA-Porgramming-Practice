#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()

{
    int ret=0;

unlink("demo.text");
if(ret == 1)
      {
        printf("Unable to delete the file \n");
        return -1;
      }

else
      {
          printf("File gets successfully deleted");
      }

    return 0;

}