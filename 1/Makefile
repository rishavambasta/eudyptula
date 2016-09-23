obj-m += hello.o

all:
ifndef K_SRC
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules 
else
	make -C $(K_SRC) M=$(PWD) modules
endif

clean:	
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean 
