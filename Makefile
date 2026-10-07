ffi: target/release/libffibool.a ffi.c Makefile
	$(CC) -O1 -o ffi ffi.c target/release/libffibool.a

target/release/libffibool.a: src/lib.rs
	cargo build --release
