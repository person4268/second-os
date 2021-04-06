#include "string.h"

void numtostr(unsigned long num, int base, char sign, char *outbuf)
{

    int i = 12;
    int j = 0;

    do{
        outbuf[i] = "0123456789ABCDEF"[num % base];
        i--;
        num = num/base;
    }while( num > 0);

    if(sign != ' '){
        outbuf[0] = sign;
        ++j;
    }

    while( ++i < 13){
       outbuf[j++] = outbuf[i];
    }

    outbuf[j] = 0;

}

unsigned int strlen(char* str) {
	unsigned int len = 0;
	while(str[len]) len++;
	return len;
}

