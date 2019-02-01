#include<stdio.h>
#include<sys/time.h>
#include<sys/types.h>
#include<unistd.h>
#include<sys/stat.h>
#include<fcntl.h>
#include <linux/input.h>

int main()
{
	int i,rd,fd1,retfd;
	char buf[100];
	int val;
	char name[256] = "keyboard";
	struct input_event ev;
	fd1=open("/dev/input/event4",O_RDONLY);
	if(fd1<0)
		printf("error while open the file event4\n");
      
        printf("Input device name: \"%s\"\n", name);

while(1)
{
	rd=read(fd1, &ev, sizeof(struct input_event));
        if (rd < (int) sizeof(struct input_event)) {
                       


                        perror("\nevtest: error reading\n");
                        return 1;
         }

        for (i = 0; i < rd / sizeof(struct input_event); i++)
	printf("Eventtime%ld\n:",ev.time.tv_sec);

}
	return 0;
}


