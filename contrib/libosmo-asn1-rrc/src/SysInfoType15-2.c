/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "SysInfoType15-2.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_5 = {
	sizeof(struct SysInfoType15_2__nonCriticalExtensions),
	offsetof(struct SysInfoType15_2__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_5 = {
	"nonCriticalExtensions",
	"nonCriticalExtensions",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_nonCriticalExtensions_tags_5,
	sizeof(asn_DEF_nonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_5[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_5,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_5)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_5[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_5	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType15_2_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType15_2, transmissionTOW),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_GPS_TOW_1sec,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"transmissionTOW"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType15_2, satID),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SatID,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"satID"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType15_2, ephemerisParameter),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EphemerisParameter,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ephemerisParameter"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType15_2, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_5,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_SysInfoType15_2_oms_1[] = { 3 };
static ber_tlv_tag_t asn_DEF_SysInfoType15_2_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SysInfoType15_2_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* transmissionTOW at 21543 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* satID at 21544 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ephemerisParameter at 21545 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* nonCriticalExtensions at 21547 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType15_2_specs_1 = {
	sizeof(struct SysInfoType15_2),
	offsetof(struct SysInfoType15_2, _asn_ctx),
	asn_MAP_SysInfoType15_2_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_SysInfoType15_2_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType15_2 = {
	"SysInfoType15-2",
	"SysInfoType15-2",
	SEQUENCE_free,
	SEQUENCE_print,
	SEQUENCE_constraint,
	SEQUENCE_decode_ber,
	SEQUENCE_encode_der,
	SEQUENCE_decode_xer,
	SEQUENCE_encode_xer,
	SEQUENCE_decode_uper,
	SEQUENCE_encode_uper,
	0,	/* Use generic outmost tag fetcher */
	asn_DEF_SysInfoType15_2_tags_1,
	sizeof(asn_DEF_SysInfoType15_2_tags_1)
		/sizeof(asn_DEF_SysInfoType15_2_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType15_2_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType15_2_tags_1)
		/sizeof(asn_DEF_SysInfoType15_2_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType15_2_1,
	4,	/* Elements count */
	&asn_SPC_SysInfoType15_2_specs_1	/* Additional specs */
};
