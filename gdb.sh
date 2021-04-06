#!/bin/bash

source path.sh
qemu-system-i386.exe -cdrom boot.iso -S -gdb tcp::1234 &
cd src
gdb --command=../gdbinit.txt
