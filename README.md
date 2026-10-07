Reproduction for an issue encountered in Rust >= 1.99.0.

The FFI function returning bool returns values other than 0 or 1 to the C calller.

## Run

Build with:

    make

Run:

    ./ffi

It should print 0 or 1, but I get 16.
