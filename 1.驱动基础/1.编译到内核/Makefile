obj-m += helloworld.o

KDIR := /home/xbj/Linux_driver/0.linux-6.15.4

PWD ?= $(shell pwd)

all:
	make -C $(KDIR) M=$(PWD) modules
clean:
	rm -f *.ko *.o *.mod *.mod.c *.symvers *.order