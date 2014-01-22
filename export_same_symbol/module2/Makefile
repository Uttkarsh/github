obj-m += sample_kernel.o

EXTRA_CFLAGS += -DMACRO=$(CMD1)
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
	@echo $(CMD1)
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
