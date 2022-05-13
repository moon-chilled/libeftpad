libeftpad.so: eftpad.c
	$(CC) -shared -fPIC -Ofast -o libeftpad.so eftpad.c
test: test.c libeftpad.so
	$(CC) -L. -Wl,-rpath,. -o test test.c -leftpad
