# binaryTree
developer:
1. ./bootstrap.sh, it will generate configure script and other required files
2. ./configure
3. make
4. sudo make install, this will install binaries and libs into /usr/local prefix, you can change it with ./configure
5. to uninstall the program, manually delete files under /usr/local/bin and /usr/local/lib
6. to locally execute uninstallled program:
    after make install, there will be two files created:
    src/main/binaryTree
    src/main/.libs/binaryTree

the first one is a wrapper biinary, the second one is the target that make install uses, and second one is a dynamic binary, ldd will show it depends on the shared lib, while the first one is not dynamic:

[ec2-user@ip-172-31-93-147 binaryTree]$ ldd src/main/binaryTree
	not a dynamic executable
[ec2-user@ip-172-31-93-147 binaryTree]$ ldd src/main/.libs/binaryTree
	linux-vdso.so.1 (0x00007ffc029c9000)
	libmytree.so.0 => not found
	libc.so.6 => /lib64/libc.so.6 (0x00007ff673e3e000)
	/lib64/ld-linux-x86-64.so.2 (0x00007ff6741e9000)

execute the wrapper binary will generate a wrapper script for the second one:

src/main/binaryTree
this is f
node3
node1
node4
node0
node2


[ec2-user@ip-172-31-93-147 binaryTree]$ ls src/main/.libs/
binaryTree  lt-binaryTree

that lt-binaryTree is the wrapper binary that depends on the local uninstalled lib, while binaryTree is the one depends on the system lib:

[ec2-user@ip-172-31-93-147 binaryTree]$ ldd src/main/.libs/binaryTree
	linux-vdso.so.1 (0x00007ffea2d97000)
	libmytree.so.0 => not found
	libc.so.6 => /lib64/libc.so.6 (0x00007fbe4c7bd000)
	/lib64/ld-linux-x86-64.so.2 (0x00007fbe4cb68000)
[ec2-user@ip-172-31-93-147 binaryTree]$ ldd src/main/.libs/lt-binaryTree
	linux-vdso.so.1 (0x00007ffe705a6000)
	libmytree.so.0 => /home/ec2-user/binaryTree/src/lib/.libs/libmytree.so.0 (0x00007f78bada6000)
	libc.so.6 => /lib64/libc.so.6 (0x00007f78ba9fb000)
	/lib64/ld-linux-x86-64.so.2 (0x00007f78bafa8000)

[ec2-user@ip-172-31-93-147 binaryTree]$ src/main/.libs/binaryTree
src/main/.libs/binaryTree: error while loading shared libraries: libmytree.so.0: cannot open shared object file: No such file or directory
[ec2-user@ip-172-31-93-147 binaryTree]$ src/main/.libs/lt-binaryTree
this is f
node3
node1
node4
node0
node2

7. make dist
8. the dist package can be distributed.

user:
1. ./configure
2. make
3. sudo make install

