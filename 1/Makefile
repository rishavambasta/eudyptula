obj-m += hello.o

all:
ifdef K_SRC
	make -C $(K_SRC) M=$(PWD) modules
else
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) modules 
endif

clean:	
	make -C /lib/modules/$(shell uname -r)/build M=$(PWD) clean 
