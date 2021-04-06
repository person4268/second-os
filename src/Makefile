 # Makefile for JamesM's kernel tutorials.
# The C and C++ rules are already setup by default.
# The only one that needs changing is the assembler
# rule, as we use nasm instead of GNU as.

SOURCES=boot.o main.o common.o framebuffer.o string.o descriptor_tables.o isr.o gdtidt.o interrupt.o timer.o

CFLAGS=-m32 -nostdlib -fno-stack-protector -c -gdwarf -fno-builtin -nostdinc -Wall -Wextra
LDFLAGS=-melf_i386 -Tlink.ld -g
ASFLAGS=-felf -g -F dwarf

all: $(SOURCES) link

clean:
	-rm *.o kernel.elf

link:
	ld $(LDFLAGS) -o kernel.elf $(SOURCES)

.s.o:
	nasm $(ASFLAGS) $<
