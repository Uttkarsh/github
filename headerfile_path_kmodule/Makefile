obj-m += sample_kernel.o

HEADER_LOC=header_location/
EXTRA_CFLAGS := -I$(PWD)/$(HEADER_LOC)

all:
	        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules
clean:
	        make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean
