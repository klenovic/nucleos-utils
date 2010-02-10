# Makefile for shutdown / halt / reboot.
app-y := reboot shutdown

path_bin +=

path_usr_bin +=

path_sbin += reboot shutdown

all: $(app-y)

INSTALL_DIR=_install

install: $(app-y)
	$(STRIP) $(app-y)
	rm -rf $(INSTALL_DIR)
	mkdir $(INSTALL_DIR)
	$(if $(strip $(path_bin)),mkdir $(INSTALL_DIR)/bin)
	$(if $(strip $(path_usr_bin)),mkdir $(INSTALL_DIR)/usr)
	$(if $(strip $(path_usr_bin)),mkdir $(INSTALL_DIR)/usr/bin)
	$(if $(strip $(path_sbin)),mkdir $(INSTALL_DIR)/sbin)
	$(if $(strip $(path_bin)),cp $(path_bin) $(INSTALL_DIR)/bin/)
	$(if $(strip $(path_usr_bin)),cp $(path_usr_bin) $(INSTALL_DIR)/usr/bin/)
	$(if $(strip $(path_sbin)),cp $(path_sbin) $(INSTALL_DIR)/sbin/)

clean:
	rm -rf *.o

distclean: clean
	rm -f $(app-y)
	rm -rf _install

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

shutdown: shutdown.o sh_wall.o log.o
	$(CC) $(CFLAGS) -o $@ $^

reboot: halt.o log.o
	$(CC) $(CFLAGS) -o $@ $^
