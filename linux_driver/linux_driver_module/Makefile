ifeq ($(KERNELRELEASE), )
KERNELDIR := /lib/modules/$(shell uname -r)/build
PWD :=$(shell pwd)
default:
	$(MAKE) -C $(KERNELDIR)  M=$(PWD)  modules
clean:
	rm -rf *.mk .tmp_versions Module.symvers *.mod.c *.o *.mod *.ko .*.cmd Module.markers modules.order
# load:
# 	insmod hello.ko
# unload:
# 	rmmod hello
# install: default
# 	mkdir -p /lib/modules/$(shell uname -r)/kernel/drivers/usb/serial/
# 	cp -f ./hello.ko /lib/modules/$(shell uname -r)/kernel/drivers/usb/serial/
# 	depmod -a
# uninstall:
# 	rm -rf /lib/modules/$(shell uname -r)/kernel/drivers/usb/serial/hello.ko
# 	depmod -a
else
	obj-m := hello.o
endif
CONFIG_MODULE_SIG = n