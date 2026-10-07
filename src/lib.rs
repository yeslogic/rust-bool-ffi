#[unsafe(no_mangle)]
pub unsafe extern "C" fn rust_fn_returning_bool(flags: u8) -> bool {
    (flags & 0x1) == 0x1
}
