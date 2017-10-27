
KERNELDIR ?= /lib/modules/$(shell uname -r)/build
PWD := $(shell pwd)

scull-objs := main.o

obj-m := scull.o

modules:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules

modules_install:
	$(MAKE) -C $(KERNELDIR) M=$(PWD) modules_install

clean:
	rm -rf *.o *~ core .depend .*.cmd *.ko *.mod.c .tmp_versions modules.order Module.symvers

.PHONY: moduels modules_install clean
