int sum(int a, int b);

#define TRACE_LEVEL_DEBUG         0x10

#define TRACE_GROUP "FSST"



// void mbed_tracef(uint8_t dlevel, const char *grp, const char *fmt, ...)
// {
//     va_list ap;
//     va_start(ap, fmt);
//     mbed_vtracef(dlevel, grp, fmt, ap);
//     va_end(ap);
// }

// #define tr_debug(...)           mbed_tracef(TRACE_LEVEL_DEBUG,   TRACE_GROUP, __VA_ARGS__)   //!< Print debug message
// tr_debug("thread management set commissioning timestamp %"PRIu64, time);