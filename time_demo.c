



/*This program is time.h tinkering
*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <sys/time.h>


int main(){

/*	struct timeval{
		time_t tc_sec;
		suseconds_t tv_usec;
	};
*/
	int tm_result = 0;

	struct timeval *mytime = malloc(sizeof(struct timeval));
	if(mytime == NULL)
		printf("malloc fail\n");

	


	printf("*** Time Demo ***\n");

	tm_result = gettimeofday(mytime, NULL);
	printf(" gettimeofday returned: %ld secs, %ld microseconds\n",
		 (long)mytime->tv_sec, (long)mytime->tv_usec);
	
	if(tm_result == -1)
		printf("gettimeofday failed\n");
	free(mytime);
	return 0;
}

