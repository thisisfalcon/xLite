/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "SysInfoType12.h"

static ber_tlv_tag_t asn_DEF_nonCriticalExtensions_tags_16[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_nonCriticalExtensions_specs_16 = {
	sizeof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions__va80NonCriticalExtensions__nonCriticalExtensions),
	offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions__va80NonCriticalExtensions__nonCriticalExtensions, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_nonCriticalExtensions_16 = {
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
	asn_DEF_nonCriticalExtensions_tags_16,
	sizeof(asn_DEF_nonCriticalExtensions_tags_16)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_16[0]) - 1, /* 1 */
	asn_DEF_nonCriticalExtensions_tags_16,	/* Same as above */
	sizeof(asn_DEF_nonCriticalExtensions_tags_16)
		/sizeof(asn_DEF_nonCriticalExtensions_tags_16[0]), /* 2 */
	0,	/* No PER visible constraints */
	0, 0,	/* No members */
	&asn_SPC_nonCriticalExtensions_specs_16	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_va80NonCriticalExtensions_14[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions__va80NonCriticalExtensions, sysInfoType12_va80ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType12_va80ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType12-va80ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions__va80NonCriticalExtensions, nonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_nonCriticalExtensions_16,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"nonCriticalExtensions"
		},
};
static int asn_MAP_va80NonCriticalExtensions_oms_14[] = { 1 };
static ber_tlv_tag_t asn_DEF_va80NonCriticalExtensions_tags_14[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_va80NonCriticalExtensions_tag2el_14[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType12-va80ext at 21330 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nonCriticalExtensions at 21331 */
};
static asn_SEQUENCE_specifics_t asn_SPC_va80NonCriticalExtensions_specs_14 = {
	sizeof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions__va80NonCriticalExtensions),
	offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions__va80NonCriticalExtensions, _asn_ctx),
	asn_MAP_va80NonCriticalExtensions_tag2el_14,
	2,	/* Count of tags in the map */
	asn_MAP_va80NonCriticalExtensions_oms_14,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_va80NonCriticalExtensions_14 = {
	"va80NonCriticalExtensions",
	"va80NonCriticalExtensions",
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
	asn_DEF_va80NonCriticalExtensions_tags_14,
	sizeof(asn_DEF_va80NonCriticalExtensions_tags_14)
		/sizeof(asn_DEF_va80NonCriticalExtensions_tags_14[0]) - 1, /* 1 */
	asn_DEF_va80NonCriticalExtensions_tags_14,	/* Same as above */
	sizeof(asn_DEF_va80NonCriticalExtensions_tags_14)
		/sizeof(asn_DEF_va80NonCriticalExtensions_tags_14[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_va80NonCriticalExtensions_14,
	2,	/* Elements count */
	&asn_SPC_va80NonCriticalExtensions_specs_14	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v7b0NonCriticalExtensions_12[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions, sysInfoType12_v7b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType12_v7b0ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType12-v7b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions, va80NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_va80NonCriticalExtensions_14,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"va80NonCriticalExtensions"
		},
};
static int asn_MAP_v7b0NonCriticalExtensions_oms_12[] = { 1 };
static ber_tlv_tag_t asn_DEF_v7b0NonCriticalExtensions_tags_12[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v7b0NonCriticalExtensions_tag2el_12[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType12-v7b0ext at 21328 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* va80NonCriticalExtensions at 21330 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v7b0NonCriticalExtensions_specs_12 = {
	sizeof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions),
	offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions__v7b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v7b0NonCriticalExtensions_tag2el_12,
	2,	/* Count of tags in the map */
	asn_MAP_v7b0NonCriticalExtensions_oms_12,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v7b0NonCriticalExtensions_12 = {
	"v7b0NonCriticalExtensions",
	"v7b0NonCriticalExtensions",
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
	asn_DEF_v7b0NonCriticalExtensions_tags_12,
	sizeof(asn_DEF_v7b0NonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_v7b0NonCriticalExtensions_tags_12[0]) - 1, /* 1 */
	asn_DEF_v7b0NonCriticalExtensions_tags_12,	/* Same as above */
	sizeof(asn_DEF_v7b0NonCriticalExtensions_tags_12)
		/sizeof(asn_DEF_v7b0NonCriticalExtensions_tags_12[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v7b0NonCriticalExtensions_12,
	2,	/* Elements count */
	&asn_SPC_v7b0NonCriticalExtensions_specs_12	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v6b0NonCriticalExtensions_10[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions, sysInfoType12_v6b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType12_v6b0ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType12-v6b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions, v7b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v7b0NonCriticalExtensions_12,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v7b0NonCriticalExtensions"
		},
};
static int asn_MAP_v6b0NonCriticalExtensions_oms_10[] = { 1 };
static ber_tlv_tag_t asn_DEF_v6b0NonCriticalExtensions_tags_10[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v6b0NonCriticalExtensions_tag2el_10[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType12-v6b0ext at 21326 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v7b0NonCriticalExtensions at 21328 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v6b0NonCriticalExtensions_specs_10 = {
	sizeof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions),
	offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions__v6b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v6b0NonCriticalExtensions_tag2el_10,
	2,	/* Count of tags in the map */
	asn_MAP_v6b0NonCriticalExtensions_oms_10,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v6b0NonCriticalExtensions_10 = {
	"v6b0NonCriticalExtensions",
	"v6b0NonCriticalExtensions",
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
	asn_DEF_v6b0NonCriticalExtensions_tags_10,
	sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_10[0]) - 1, /* 1 */
	asn_DEF_v6b0NonCriticalExtensions_tags_10,	/* Same as above */
	sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_10)
		/sizeof(asn_DEF_v6b0NonCriticalExtensions_tags_10[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v6b0NonCriticalExtensions_10,
	2,	/* Elements count */
	&asn_SPC_v6b0NonCriticalExtensions_specs_10	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v690NonCriticalExtensions_8[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions, sysInfoType12_v690ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType12_v690ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType12-v690ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions, v6b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v6b0NonCriticalExtensions_10,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v6b0NonCriticalExtensions"
		},
};
static int asn_MAP_v690NonCriticalExtensions_oms_8[] = { 1 };
static ber_tlv_tag_t asn_DEF_v690NonCriticalExtensions_tags_8[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v690NonCriticalExtensions_tag2el_8[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType12-v690ext at 21324 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v6b0NonCriticalExtensions at 21326 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v690NonCriticalExtensions_specs_8 = {
	sizeof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions),
	offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension__v690NonCriticalExtensions, _asn_ctx),
	asn_MAP_v690NonCriticalExtensions_tag2el_8,
	2,	/* Count of tags in the map */
	asn_MAP_v690NonCriticalExtensions_oms_8,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v690NonCriticalExtensions_8 = {
	"v690NonCriticalExtensions",
	"v690NonCriticalExtensions",
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
	asn_DEF_v690NonCriticalExtensions_tags_8,
	sizeof(asn_DEF_v690NonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_v690NonCriticalExtensions_tags_8[0]) - 1, /* 1 */
	asn_DEF_v690NonCriticalExtensions_tags_8,	/* Same as above */
	sizeof(asn_DEF_v690NonCriticalExtensions_tags_8)
		/sizeof(asn_DEF_v690NonCriticalExtensions_tags_8[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v690NonCriticalExtensions_8,
	2,	/* Elements count */
	&asn_SPC_v690NonCriticalExtensions_specs_8	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v590NonCriticalExtension_6[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension, sysInfoType12_v590ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType12_v590ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType12-v590ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension, v690NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v690NonCriticalExtensions_8,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v690NonCriticalExtensions"
		},
};
static int asn_MAP_v590NonCriticalExtension_oms_6[] = { 1 };
static ber_tlv_tag_t asn_DEF_v590NonCriticalExtension_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v590NonCriticalExtension_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType12-v590ext at 21322 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v690NonCriticalExtensions at 21324 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v590NonCriticalExtension_specs_6 = {
	sizeof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension),
	offsetof(struct SysInfoType12__v4b0NonCriticalExtensions__v590NonCriticalExtension, _asn_ctx),
	asn_MAP_v590NonCriticalExtension_tag2el_6,
	2,	/* Count of tags in the map */
	asn_MAP_v590NonCriticalExtension_oms_6,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v590NonCriticalExtension_6 = {
	"v590NonCriticalExtension",
	"v590NonCriticalExtension",
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
	asn_DEF_v590NonCriticalExtension_tags_6,
	sizeof(asn_DEF_v590NonCriticalExtension_tags_6)
		/sizeof(asn_DEF_v590NonCriticalExtension_tags_6[0]) - 1, /* 1 */
	asn_DEF_v590NonCriticalExtension_tags_6,	/* Same as above */
	sizeof(asn_DEF_v590NonCriticalExtension_tags_6)
		/sizeof(asn_DEF_v590NonCriticalExtension_tags_6[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v590NonCriticalExtension_6,
	2,	/* Elements count */
	&asn_SPC_v590NonCriticalExtension_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_v4b0NonCriticalExtensions_4[] = {
	{ ATF_POINTER, 2, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions, sysInfoType12_v4b0ext),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SysInfoType12_v4b0ext_IEs,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"sysInfoType12-v4b0ext"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType12__v4b0NonCriticalExtensions, v590NonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_v590NonCriticalExtension_6,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v590NonCriticalExtension"
		},
};
static int asn_MAP_v4b0NonCriticalExtensions_oms_4[] = { 0, 1 };
static ber_tlv_tag_t asn_DEF_v4b0NonCriticalExtensions_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_v4b0NonCriticalExtensions_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sysInfoType12-v4b0ext at 21320 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* v590NonCriticalExtension at 21322 */
};
static asn_SEQUENCE_specifics_t asn_SPC_v4b0NonCriticalExtensions_specs_4 = {
	sizeof(struct SysInfoType12__v4b0NonCriticalExtensions),
	offsetof(struct SysInfoType12__v4b0NonCriticalExtensions, _asn_ctx),
	asn_MAP_v4b0NonCriticalExtensions_tag2el_4,
	2,	/* Count of tags in the map */
	asn_MAP_v4b0NonCriticalExtensions_oms_4,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_v4b0NonCriticalExtensions_4 = {
	"v4b0NonCriticalExtensions",
	"v4b0NonCriticalExtensions",
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
	asn_DEF_v4b0NonCriticalExtensions_tags_4,
	sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_4[0]) - 1, /* 1 */
	asn_DEF_v4b0NonCriticalExtensions_tags_4,	/* Same as above */
	sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_4)
		/sizeof(asn_DEF_v4b0NonCriticalExtensions_tags_4[0]), /* 2 */
	0,	/* No PER visible constraints */
	asn_MBR_v4b0NonCriticalExtensions_4,
	2,	/* Elements count */
	&asn_SPC_v4b0NonCriticalExtensions_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_SysInfoType12_1[] = {
	{ ATF_POINTER, 1, offsetof(struct SysInfoType12, fach_MeasurementOccasionInfo),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FACH_MeasurementOccasionInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"fach-MeasurementOccasionInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct SysInfoType12, measurementControlSysInfo),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MeasurementControlSysInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"measurementControlSysInfo"
		},
	{ ATF_POINTER, 1, offsetof(struct SysInfoType12, v4b0NonCriticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_v4b0NonCriticalExtensions_4,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"v4b0NonCriticalExtensions"
		},
};
static int asn_MAP_SysInfoType12_oms_1[] = { 0, 2 };
static ber_tlv_tag_t asn_DEF_SysInfoType12_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_SysInfoType12_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* fach-MeasurementOccasionInfo at 21316 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measurementControlSysInfo at 21317 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* v4b0NonCriticalExtensions at 21320 */
};
static asn_SEQUENCE_specifics_t asn_SPC_SysInfoType12_specs_1 = {
	sizeof(struct SysInfoType12),
	offsetof(struct SysInfoType12, _asn_ctx),
	asn_MAP_SysInfoType12_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_SysInfoType12_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_SysInfoType12 = {
	"SysInfoType12",
	"SysInfoType12",
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
	asn_DEF_SysInfoType12_tags_1,
	sizeof(asn_DEF_SysInfoType12_tags_1)
		/sizeof(asn_DEF_SysInfoType12_tags_1[0]), /* 1 */
	asn_DEF_SysInfoType12_tags_1,	/* Same as above */
	sizeof(asn_DEF_SysInfoType12_tags_1)
		/sizeof(asn_DEF_SysInfoType12_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_SysInfoType12_1,
	3,	/* Elements count */
	&asn_SPC_SysInfoType12_specs_1	/* Additional specs */
};
