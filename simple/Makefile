app-y := basename cat cdprobe cgrep chmem chmod chown chroot \
	 cleantmp cp cut dd dev2name devsize df dirname du \
	 find fsck1 fsck getty grep head intr kill last \
	 loadramdisk login ls mkdir mkfifo mkfs mknod \
	 mount newroot nice nohup nonamed passwd paste printenv \
	 printf printroot pwd ramdisk readfs rmdir sleep sort \
	 split stat stty su sync synctree sysenv tail tee \
	 termcap time top touch tr truncate tty umount uname \
	 uniq update wc which whoami who xargs

all: $(app-y)

clean:
	rm -rf *.o

distclean: clean
	rm $(app-y)
