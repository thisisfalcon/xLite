/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_SysInfoType5_v680ext_IEs_H_
#define	_SysInfoType5_v680ext_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum SysInfoType5_v680ext_IEs__hsdpa_CellIndicator {
	SysInfoType5_v680ext_IEs__hsdpa_CellIndicator_hsdpa_CapableCell	= 0
} e_SysInfoType5_v680ext_IEs__hsdpa_CellIndicator;

/* SysInfoType5-v680ext-IEs */
typedef struct SysInfoType5_v680ext_IEs {
	long	*hsdpa_CellIndicator	/* OPTIONAL */;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} SysInfoType5_v680ext_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_hsdpa_CellIndicator_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_SysInfoType5_v680ext_IEs;

#ifdef __cplusplus
}
#endif

#endif	/* _SysInfoType5_v680ext_IEs_H_ */
#include <asn_internal.h>