CC=$(CROSS_COMPILE)gcc

export CC

subdir-y := simple
#cron ps reboot syslogd

all: $(subdir-y)

$(subdir-y):
	make -C $@

.PHONY: $(subdir-y)
