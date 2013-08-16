/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _CALCULA_H_RPCGEN
#define _CALCULA_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>


struct operandos {
	int x;
	int y;
};
typedef struct operandos operandos;
#ifdef __cplusplus
extern "C" bool_t xdr_operandos(XDR *, operandos*);
#elif __STDC__
extern  bool_t xdr_operandos(XDR *, operandos*);
#else /* Old Style C */
bool_t xdr_operandos();
#endif /* Old Style C */


#define PROG ((rpc_uint)55555555)
#define VERSAO ((rpc_uint)100)

#ifdef __cplusplus
#define ADD ((rpc_uint)1)
extern "C" int * add_100(operandos *, CLIENT *);
extern "C" int * add_100_svc(operandos *, struct svc_req *);
#define SUB ((rpc_uint)2)
extern "C" int * sub_100(operandos *, CLIENT *);
extern "C" int * sub_100_svc(operandos *, struct svc_req *);

#elif __STDC__
#define ADD ((rpc_uint)1)
extern  int * add_100(operandos *, CLIENT *);
extern  int * add_100_svc(operandos *, struct svc_req *);
#define SUB ((rpc_uint)2)
extern  int * sub_100(operandos *, CLIENT *);
extern  int * sub_100_svc(operandos *, struct svc_req *);

#else /* Old Style C */
#define ADD ((rpc_uint)1)
extern  int * add_100();
extern  int * add_100_svc();
#define SUB ((rpc_uint)2)
extern  int * sub_100();
extern  int * sub_100_svc();
#endif /* Old Style C */

#endif /* !_CALCULA_H_RPCGEN */
