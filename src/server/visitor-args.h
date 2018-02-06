#ifndef __SERVER_VISITOR_ARGS_H
#define __SERVER_VISITOR_ARGS_H

#include <margo.h>
#include "libmobject-store.h"
#include "src/server/core/key-types.h"
#include "src/server/mobject-server-context.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct {
	const char*                    object_name;
    oid_t                          oid;
	const char*                    pool_name;
    struct mobject_server_context* srv_ctx;
    const char*                    client_addr_str;
    hg_addr_t                      client_addr;
	hg_bulk_t                      bulk_handle;
} server_visitor_args;

typedef server_visitor_args* server_visitor_args_t;

#ifdef __cplusplus
}
#endif

#endif
