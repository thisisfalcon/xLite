/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_CompressedModeMeasCapabFDDList3_H_
#define	_CompressedModeMeasCapabFDDList3_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct CompressedModeMeasCapabFDD3;

/* CompressedModeMeasCapabFDDList3 */
typedef struct CompressedModeMeasCapabFDDList3 {
	A_SEQUENCE_OF(struct CompressedModeMeasCapabFDD3) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} CompressedModeMeasCapabFDDList3_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_CompressedModeMeasCapabFDDList3;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "CompressedModeMeasCapabFDD3.h"

#endif	/* _CompressedModeMeasCapabFDDList3_H_ */
#include <asn_internal.h>