/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "InformationElements"
 * 	found in "../asn/InformationElements.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "PositionEstimate.h"

static asn_per_constraints_t asn_PER_type_PositionEstimate_constr_1 = {
	{ APC_CONSTRAINED,	 3,  3,  0,  4 }	/* (0..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_PositionEstimate_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct PositionEstimate, choice.ellipsoidPoint),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipsoidPoint,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidPoint"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PositionEstimate, choice.ellipsoidPointUncertCircle),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipsoidPointUncertCircle,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidPointUncertCircle"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PositionEstimate, choice.ellipsoidPointUncertEllipse),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipsoidPointUncertEllipse,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidPointUncertEllipse"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PositionEstimate, choice.ellipsoidPointAltitude),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipsoidPointAltitude,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidPointAltitude"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct PositionEstimate, choice.ellipsoidPointAltitudeEllipse),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_EllipsoidPointAltitudeEllipsoide,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ellipsoidPointAltitudeEllipse"
		},
};
static asn_TYPE_tag2member_t asn_MAP_PositionEstimate_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* ellipsoidPoint at 17808 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ellipsoidPointUncertCircle at 17809 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ellipsoidPointUncertEllipse at 17810 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ellipsoidPointAltitude at 17811 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* ellipsoidPointAltitudeEllipse at 17813 */
};
static asn_CHOICE_specifics_t asn_SPC_PositionEstimate_specs_1 = {
	sizeof(struct PositionEstimate),
	offsetof(struct PositionEstimate, _asn_ctx),
	offsetof(struct PositionEstimate, present),
	sizeof(((struct PositionEstimate *)0)->present),
	asn_MAP_PositionEstimate_tag2el_1,
	5,	/* Count of tags in the map */
	0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_PositionEstimate = {
	"PositionEstimate",
	"PositionEstimate",
	CHOICE_free,
	CHOICE_print,
	CHOICE_constraint,
	CHOICE_decode_ber,
	CHOICE_encode_der,
	CHOICE_decode_xer,
	CHOICE_encode_xer,
	CHOICE_decode_uper,
	CHOICE_encode_uper,
	CHOICE_outmost_tag,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	&asn_PER_type_PositionEstimate_constr_1,
	asn_MBR_PositionEstimate_1,
	5,	/* Elements count */
	&asn_SPC_PositionEstimate_specs_1	/* Additional specs */
};

