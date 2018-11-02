// -----------------------------------------------------------------------------
//  low_fs_misc.h
// -----------------------------------------------------------------------------

#ifndef __LOW_FS_MISC_H__
#define __LOW_FS_MISC_H__

#include "duktape.h"

duk_ret_t low_fs_rename(duk_context *ctx);
duk_ret_t low_fs_unlink(duk_context *ctx);
duk_ret_t low_fs_stat(duk_context *ctx);

duk_ret_t low_fs_rename_sync(duk_context *ctx);
duk_ret_t low_fs_unlink_sync(duk_context *ctx);
duk_ret_t low_fs_stat_sync(duk_context *ctx);

#endif /* __LOW_FS_MISC_H__ */
