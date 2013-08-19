/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#ifndef _AGENDA_H_RPCGEN
#define _AGENDA_H_RPCGEN

#define RPCGEN_VERSION	199506

#include <rpc/rpc.h>


struct data {
	char *name;
	char *addr;
	char *phone;
};
typedef struct data data;
#ifdef __cplusplus
extern "C" bool_t xdr_data(XDR *, data*);
#elif __STDC__
extern  bool_t xdr_data(XDR *, data*);
#else /* Old Style C */
bool_t xdr_data();
#endif /* Old Style C */


struct data_alter {
	char *old_name;
	char *new_name;
	char *new_addr;
	char *new_phone;
};
typedef struct data_alter data_alter;
#ifdef __cplusplus
extern "C" bool_t xdr_data_alter(XDR *, data_alter*);
#elif __STDC__
extern  bool_t xdr_data_alter(XDR *, data_alter*);
#else /* Old Style C */
bool_t xdr_data_alter();
#endif /* Old Style C */


#define PROG ((rpc_uint)100)
#define VERSION ((rpc_uint)10)

#ifdef __cplusplus
#define INITIALIZE ((rpc_uint)1)
extern "C" void * initialize_10(void *, CLIENT *);
extern "C" void * initialize_10_svc(void *, struct svc_req *);
#define INSERT ((rpc_uint)2)
extern "C" void * insert_10(data *, CLIENT *);
extern "C" void * insert_10_svc(data *, struct svc_req *);
#define ALTER ((rpc_uint)3)
extern "C" void * alter_10(data_alter *, CLIENT *);
extern "C" void * alter_10_svc(data_alter *, struct svc_req *);
#define REMOVE ((rpc_uint)4)
extern "C" void * remove_10(data *, CLIENT *);
extern "C" void * remove_10_svc(data *, struct svc_req *);
#define CONSULT ((rpc_uint)5)
extern "C" void * consult_10(data *, CLIENT *);
extern "C" void * consult_10_svc(data *, struct svc_req *);

#elif __STDC__
#define INITIALIZE ((rpc_uint)1)
extern  void * initialize_10(void *, CLIENT *);
extern  void * initialize_10_svc(void *, struct svc_req *);
#define INSERT ((rpc_uint)2)
extern  void * insert_10(data *, CLIENT *);
extern  void * insert_10_svc(data *, struct svc_req *);
#define ALTER ((rpc_uint)3)
extern  void * alter_10(data_alter *, CLIENT *);
extern  void * alter_10_svc(data_alter *, struct svc_req *);
#define REMOVE ((rpc_uint)4)
extern  void * remove_10(data *, CLIENT *);
extern  void * remove_10_svc(data *, struct svc_req *);
#define CONSULT ((rpc_uint)5)
extern  void * consult_10(data *, CLIENT *);
extern  void * consult_10_svc(data *, struct svc_req *);

#else /* Old Style C */
#define INITIALIZE ((rpc_uint)1)
extern  void * initialize_10();
extern  void * initialize_10_svc();
#define INSERT ((rpc_uint)2)
extern  void * insert_10();
extern  void * insert_10_svc();
#define ALTER ((rpc_uint)3)
extern  void * alter_10();
extern  void * alter_10_svc();
#define REMOVE ((rpc_uint)4)
extern  void * remove_10();
extern  void * remove_10_svc();
#define CONSULT ((rpc_uint)5)
extern  void * consult_10();
extern  void * consult_10_svc();
#endif /* Old Style C */

#endif /* !_AGENDA_H_RPCGEN */