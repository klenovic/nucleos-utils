/*	tinyhalt 1.0 - small forerunner			Author: Kees J. Bot
 *
 * Disk space on the root file system is a scarce resource.  This little
 * program sits in /sbin.  It normally calls the real halt/reboot, but if
 * that isn't available then it simply calls reboot().  Can't do any logging
 * of the event anyhow.
 */
#include <sys/types.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <signal.h>

int main(int argc, char **argv)
{
	char *prog;

	/* Try to run the real McCoy. */
	execv("/usr/bin/halt", argv);

	if ((prog = strrchr(*argv,'/')) == 0) prog= argv[0]; else prog++;

	sleep(1);	/* Not too fast. */
  	signal(SIGHUP, SIG_IGN);
  	signal(SIGTERM, SIG_IGN);
	kill(1, SIGTERM);
	kill(-1, SIGTERM);
	sleep(1);

	reboot(strcmp(prog, "reboot") == 0 ? RBT_RESET : RBT_HALT);

	write(2, "reboot call failed\n", 19);
	return 1;
}
