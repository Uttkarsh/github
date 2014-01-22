obj-m += $(MODULE_INSTANCE)kernel_module.o

EXTRA_CFLAGS += -DMACRO=$(MODULE_INSTANCE)
EXTRA_CFLAGS+=-DMODULE_INSTANCE=$(MODULE_INSTANCE)
$(MODULE_INSTANCE)kernel_module-objs := sample_kernel.o

#CMD1=$(notdir $(PWD))
all:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
