obj-m :=stick_driver.o
KERNEL_DIR= /lib/modules/4.4.0-21-generic/build

PWD =$(shell pwd)

all:
	$(MAKE) -C $(KERNEL_DIR) SUBDIRS=$(PWD) modules

clean:
	rm -rf *.o *.ko *.mod.* *.symvers *.order *-
