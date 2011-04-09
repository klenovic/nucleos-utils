CC=$(CROSS_COMPILE)gcc
HOSTCC=gcc
STRIP=$(CROSS_COMPILE)strip

CFLAGS:=-imacros $(CURDIR)/macros.h -D__nucleos__
HOST_CFLAGS:=-imacros $(CURDIR)/macros.h -D__nucleos__

export CC STRIP CFLAGS HOSTCC HOST_CFLAGS KERNDELDIR

subdir-y := scripts simple reboot
#cron reboot syslogd

all: $(subdir-y)

clean: $(subdir-y)

distclean: clean

install: $(subdir-y)

$(subdir-y):
	make -C $@ $(MAKECMDGOALS)

.PHONY: $(subdir-y)
