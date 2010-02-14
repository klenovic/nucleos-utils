app-y := basename cdprobe chmod chown chroot \
	 cleantmp cut dd dev2name df dirname du \
	 getty head id intr kill last \
	 loadramdisk login ls mkdir mkfifo mknod \
	 mount newroot nice nohup passwd paste printenv \
	 printroot pwd ramdisk rmdir sleep \
	 split stat stty su sync tail tee \
	 time touch truncate tty umount uname \
	 uniq update wc which whoami who

### At the end all coreutils adopted from minix should get here :)
# fsck mkfs nonamed printf readfs synctree sysenv termcap top xargs
# tr
# sort: The minix `sort' utility failed. Gets into infinite loop.
#       Therefore the busybox one is used. It would be worth
#       the effort to find where is the problem.

# cp: The minix `cp' doesn't work properly. During copy it writes:
#     "cp: can't copy xyz to itself"
###

path_bin += cdprobe
path_bin += chroot
#path_bin += cp
path_bin += dev2name
path_bin += df
path_bin += getty
path_bin += intr
path_bin += loadramdisk
path_bin += ls
path_bin += mount
path_bin += newroot
path_bin += printroot
path_bin += pwd
path_bin += sync
path_bin += umount

path_usr_bin += basename
path_usr_bin += cdprobe
path_usr_bin += chmod
path_usr_bin += chown
path_usr_bin += cleantmp
#path_usr_bin += cp
path_usr_bin += cut
path_usr_bin += dd
path_usr_bin += dev2name
path_usr_bin += dirname
path_usr_bin += du
path_usr_bin += getty
path_usr_bin += head
path_usr_bin += intr
path_usr_bin += id
path_usr_bin += kill
path_usr_bin += loadramdisk
path_usr_bin += login
path_usr_bin += ls
path_usr_bin += mkdir
path_usr_bin += mkfifo
path_usr_bin += mknod
path_usr_bin += mount
path_usr_bin += newroot
path_usr_bin += nice
path_usr_bin += passwd
path_usr_bin += paste
path_usr_bin += printenv
path_usr_bin += printroot
path_usr_bin += pwd
path_usr_bin += ramdisk
path_usr_bin += rmdir
path_usr_bin += sleep
#path_usr_bin += sort
path_usr_bin += split
path_usr_bin += stat
path_usr_bin += stty
path_usr_bin += su
path_usr_bin += sync
path_usr_bin += tail
path_usr_bin += tee
path_usr_bin += time
path_usr_bin += touch
#path_usr_bin += tr
path_usr_bin += truncate
path_usr_bin += tty
path_usr_bin += umount
path_usr_bin += uname
path_usr_bin += uniq
path_usr_bin += update
path_usr_bin += wc
path_usr_bin += which
path_usr_bin += who
path_usr_bin += whoami

all: $(app-y)

INSTALL_DIR=_install

install: $(app-y)
	$(STRIP) $(app-y)
	rm -rf $(INSTALL_DIR)
	mkdir $(INSTALL_DIR)
	mkdir $(INSTALL_DIR)/bin
	mkdir $(INSTALL_DIR)/sbin
	mkdir $(INSTALL_DIR)/usr
	mkdir $(INSTALL_DIR)/usr/bin
	mkdir $(INSTALL_DIR)/usr/sbin
	cp $(path_bin) $(INSTALL_DIR)/bin/
	cp $(path_usr_bin) $(INSTALL_DIR)/usr/bin/

clean:
	rm -rf *.o

distclean: clean
	rm -f $(app-y)
	rm -rf _install

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

basename: basename.o
	$(CC) $(CFLAGS) -o $@ $<

cdprobe: cdprobe.o
	$(CC) $(CFLAGS) -o $@ $<

chmod: chmod.o
	$(CC) $(CFLAGS) -o $@ $<

chown: chown.o
	$(CC) $(CFLAGS) -o $@ $<

chroot: chroot.o
	$(CC) $(CFLAGS) -o $@ $<

cleantmp: cleantmp.o
	$(CC) $(CFLAGS) -o $@ $<

cp: cp.o
	$(CC) $(CFLAGS) -o $@ $<

cut: cut.o
	$(CC) $(CFLAGS) -o $@ $<

dd: dd.o
	$(CC) $(CFLAGS) -o $@ $<

dev2name: dev2name.o
	$(CC) $(CFLAGS) -o $@ $<

df: df.o
	$(CC) $(CFLAGS) -o $@ $<

dirname: dirname.o
	$(CC) $(CFLAGS) -o $@ $<

du: du.o
	$(CC) $(CFLAGS) -o $@ $<

getty: getty.o
	$(CC) $(CFLAGS) -o $@ $<

head: head.o
	$(CC) $(CFLAGS) -o $@ $<

intr: intr.o
	$(CC) $(CFLAGS) -o $@ $<

id: id.o
	$(CC) $(CFLAGS) -o $@ $<

kill: kill.o
	$(CC) $(CFLAGS) -o $@ $<

last: last.o
	$(CC) $(CFLAGS) -o $@ $<

loadramdisk: loadramdisk.o
	$(CC) $(CFLAGS) -o $@ $<

login: login.o
	$(CC) $(CFLAGS) -o $@ $<

ls: ls.o
	$(CC) $(CFLAGS) -o $@ $<

mkdir: mkdir.o
	$(CC) $(CFLAGS) -o $@ $<

mkfifo: mkfifo.o
	$(CC) $(CFLAGS) -o $@ $<

mknod: mknod.o
	$(CC) $(CFLAGS) -o $@ $<

mount: mount.o
	$(CC) $(CFLAGS) -o $@ $<

newroot: newroot.o
	$(CC) $(CFLAGS) -o $@ $<

nice: nice.o
	$(CC) $(CFLAGS) -o $@ $<

nohup: nohup.o
	$(CC) $(CFLAGS) -o $@ $<

passwd: passwd.o
	$(CC) $(CFLAGS) -o $@ $<

paste: paste.o
	$(CC) $(CFLAGS) -o $@ $<

printenv: printenv.o
	$(CC) $(CFLAGS) -o $@ $<

printf: printf.o
	$(CC) $(CFLAGS) -o $@ $<

printroot: printroot.o
	$(CC) $(CFLAGS) -o $@ $<

pwd: pwd.o
	$(CC) $(CFLAGS) -o $@ $<

ramdisk: ramdisk.o
	$(CC) $(CFLAGS) -o $@ $<

readfs: readfs.o
	$(CC) $(CFLAGS) -o $@ $<

rmdir: rmdir.o
	$(CC) $(CFLAGS) -o $@ $<

sleep: sleep.o
	$(CC) $(CFLAGS) -o $@ $<

#sort: sort.o
#	$(CC) $(CFLAGS) -o $@ $<

split: split.o
	$(CC) $(CFLAGS) -o $@ $<

stat: stat.o
	$(CC) $(CFLAGS) -o $@ $<

stty: stty.o
	$(CC) $(CFLAGS) -o $@ $<

su: su.o
	$(CC) $(CFLAGS) -o $@ $<

sync: sync.o
	$(CC) $(CFLAGS) -o $@ $<

synctree: synctree.o
	$(CC) $(CFLAGS) -o $@ $<

sysenv: sysenv.o
	$(CC) $(CFLAGS) -o $@ $<

tail: tail.o
	$(CC) $(CFLAGS) -o $@ $<

tee: tee.o
	$(CC) $(CFLAGS) -o $@ $<

termcap: termcap.o
	$(CC) $(CFLAGS) -o $@ $<

time: time.o
	$(CC) $(CFLAGS) -o $@ $<

top: top.o
	$(CC) $(CFLAGS) -o $@ $<

touch: touch.o
	$(CC) $(CFLAGS) -o $@ $<

#tr: tr.o
#	$(CC) $(CFLAGS) -o $@ $<

truncate: truncate.o
	$(CC) $(CFLAGS) -o $@ $<

tty: tty.o
	$(CC) $(CFLAGS) -o $@ $<

umount: umount.o
	$(CC) $(CFLAGS) -o $@ $<

uname: uname.o
	$(CC) $(CFLAGS) -o $@ $<

uniq: uniq.o
	$(CC) $(CFLAGS) -o $@ $<

update: update.o
	$(CC) $(CFLAGS) -o $@ $<

wc: wc.o
	$(CC) $(CFLAGS) -o $@ $<

which: which.o
	$(CC) $(CFLAGS) -o $@ $<

whoami: whoami.o
	$(CC) $(CFLAGS) -o $@ $<

who: who.o
	$(CC) $(CFLAGS) -o $@ $<

xargs: xargs.o
	$(CC) $(CFLAGS) -o $@ $<

