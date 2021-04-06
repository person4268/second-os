#include "framebuffer.h"
#include "string.h"
#include "descriptor_tables.h"
#include "timer.h"
int main() {

	fb_clear();
	fb_write("Hola!!\n");

	init_descriptor_tables();
	init_timer(50);

	char outBuf[64] = "";
	numtostr(0x00B8000, 16, ' ', outBuf);
	fb_write(outBuf);
	fb_write("\n");

	char outBuf2[64] = "";
	numtostr(strlen("Hello!"), 10, ' ', outBuf2);
	fb_write(outBuf2);
	fb_write("\n");

	asm volatile ("int $0x3");
	asm volatile ("int $0x4"); 


	return 0xDEADBEEF; // eax
}
