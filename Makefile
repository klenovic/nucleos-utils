CC=$(CROSS_COMPILE)gcc -imacros $(CURDIR)/macros.h -D__nucleos__
STRIP=$(CROSS_COMPILE)strip

export CC STRIP

subdir-y := simple
#cron reboot syslogd

all: $(subdir-y)

clean: $(subdir-y)

distclean: clean

install: $(subdir-y)

$(subdir-y):
	make -C $@ $(MAKECMDGOALS)

.PHONY: $(subdir-y)
