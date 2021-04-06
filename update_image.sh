#!/bin/bash

#sudo losetup /dev/loop0 floppy.img
#sudo mount /dev/loop0 /mnt
#sudo cp src/kernel /mnt/kernel
#sudo umount /dev/loop0
#sudo losetup -d /dev/loop0

cp src/kernel.elf iso/boot
grub-mkrescue iso -o boot.iso

