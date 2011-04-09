hostprogs-y := mkfs.minix3
#edparams installboot mkinitrd partition
ifneq ($(KERNELDIR),)
HOST_CFLAGS += -idirafter $(KERNELDIR)/usr/include -I$(KERNELDIR)/usr/include
else
$(warning Kernel directory not specified!)
$(warning Don't forget to run `make headers_check' in kernel directory)
$(error Fatal fault)
endif

all: $(hostprogs-y)

%.o: %.c
	$(HOSTCC) $(HOST_CFLAGS) -c $<

mkfs.minix3: mkfs.minix3.o
	$(HOSTCC) $(HOST_CFLAGS) -o $@ $<

INSTALL_DIR=_install

install: $(hostprogs-y)
	rm -rf $(INSTALL_DIR)
	mkdir $(INSTALL_DIR)
	cp $(hostprogs-y) $(INSTALL_DIR)

clean:
	rm -rf *.o

distclean: clean
	rm -rf $(hostprogs-y) $(INSTALL_DIR)
