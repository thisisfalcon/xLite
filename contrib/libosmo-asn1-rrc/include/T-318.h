/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#ifndef	_T_318_H_
#define	_T_318_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum T_318 {
	T_318_ms250	= 0,
	T_318_ms500	= 1,
	T_318_ms750	= 2,
	T_318_ms1000	= 3,
	T_318_ms1250	= 4,
	T_318_ms1500	= 5,
	T_318_ms1750	= 6,
	T_318_ms2000	= 7,
	T_318_ms3000	= 8,
	T_318_ms4000	= 9,
	T_318_ms6000	= 10,
	T_318_ms8000	= 11,
	T_318_ms10000	= 12,
	T_318_ms12000	= 13,
	T_318_ms16000	= 14
} e_T_318;

/* T-318 */
typedef long	 T_318_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_T_318;
asn_struct_free_f T_318_free;
asn_struct_print_f T_318_print;
asn_constr_check_f T_318_constraint;
ber_type_decoder_f T_318_decode_ber;
der_type_encoder_f T_318_encode_der;
xer_type_decoder_f T_318_decode_xer;
xer_type_encoder_f T_318_encode_xer;
per_type_decoder_f T_318_decode_uper;
per_type_encoder_f T_318_encode_uper;

#ifdef __cplusplus
}
#endif

#endif	/* _T_318_H_ */
#include <asn_internal.h>