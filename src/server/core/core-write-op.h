#ifndef __CORE_WRITE_OP_H
#define __CORE_WRITE_OP_H

#include <margo.h>
#include "libmobject-store.h"
#include "src/server/visitor-args.h"

#ifdef __cplusplus
extern "C" {
#endif

void core_write_op(mobject_store_write_op_t write_op, server_visitor_args_t vargs);

#ifdef __cplusplus
}
#endif

#endif