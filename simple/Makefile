app-y := basename cdprobe chmod chown chroot \
	 cleantmp cp cut dd dev2name df dirname du \
	 getty head intr kill last \
	 loadramdisk login ls mkdir mkfifo mkfs mknod \
	 mount newroot nice nohup nonamed passwd paste printenv \
	 printf printroot pwd ramdisk readfs rmdir sleep sort \
	 split stat stty su sync synctree sysenv tail tee \
	 termcap time top touch tr truncate tty umount uname \
	 uniq update wc which whoami who xargs
# fsck

all: $(app-y)

install: $(app-y)
	$(STRIP) $(app-y)

clean:
	rm -rf *.o

distclean: clean
	rm -f $(app-y)
