obj-m=char_driver.o


all:
	make -C/lib/modules/$(shell uname -r)/build M=$(shell pwd) modules
	
	
clean:
	rm -f *.ko *.mod.c *.o	
