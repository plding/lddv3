KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD 	  := $(shell pwd)

obj-m := scull.o
scull-objs := main.o

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

clean:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) clean
