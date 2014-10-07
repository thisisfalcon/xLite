/*
 * Generated by asn1c-0.9.24 (http://lionet.info/asn1c)
 * From ASN.1 module "PDU-definitions"
 * 	found in "../asn/PDU-definitions.asn"
 * 	`asn1c -fcompound-names -fnative-types`
 */

#include "RRCConnectionSetup-r3-IEs.h"

static asn_TYPE_member_t asn_MBR_RRCConnectionSetup_r3_IEs_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r3_IEs, initialUE_Identity),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_InitialUE_Identity,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"initialUE-Identity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r3_IEs, rrc_TransactionIdentifier),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_TransactionIdentifier,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-TransactionIdentifier"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r3_IEs, activationTime),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_ActivationTime,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"activationTime"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r3_IEs, new_U_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_U_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-U-RNTI"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r3_IEs, new_c_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_C_RNTI,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"new-c-RNTI"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r3_IEs, rrc_StateIndicator),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_RRC_StateIndicator,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"rrc-StateIndicator"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r3_IEs, utran_DRX_CycleLengthCoeff),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UTRAN_DRX_CycleLengthCoefficient,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"utran-DRX-CycleLengthCoeff"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r3_IEs, capabilityUpdateRequirement),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_CapabilityUpdateRequirement,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"capabilityUpdateRequirement"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r3_IEs, srb_InformationSetupList),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SRB_InformationSetupList2,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"srb-InformationSetupList"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r3_IEs, ul_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (9 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_CommonTransChInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-CommonTransChInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r3_IEs, ul_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (10 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_UL_AddReconfTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r3_IEs, dl_CommonTransChInfo),
		(ASN_TAG_CLASS_CONTEXT | (11 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonTransChInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonTransChInfo"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct RRCConnectionSetup_r3_IEs, dl_AddReconfTransChInfoList),
		(ASN_TAG_CLASS_CONTEXT | (12 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_AddReconfTransChInfoList,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-AddReconfTransChInfoList"
		},
	{ ATF_POINTER, 5, offsetof(struct RRCConnectionSetup_r3_IEs, frequencyInfo),
		(ASN_TAG_CLASS_CONTEXT | (13 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_FrequencyInfo,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"frequencyInfo"
		},
	{ ATF_POINTER, 4, offsetof(struct RRCConnectionSetup_r3_IEs, maxAllowedUL_TX_Power),
		(ASN_TAG_CLASS_CONTEXT | (14 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_MaxAllowedUL_TX_Power,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"maxAllowedUL-TX-Power"
		},
	{ ATF_POINTER, 3, offsetof(struct RRCConnectionSetup_r3_IEs, ul_ChannelRequirement),
		(ASN_TAG_CLASS_CONTEXT | (15 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_UL_ChannelRequirement,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"ul-ChannelRequirement"
		},
	{ ATF_POINTER, 2, offsetof(struct RRCConnectionSetup_r3_IEs, dl_CommonInformation),
		(ASN_TAG_CLASS_CONTEXT | (16 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_CommonInformation,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-CommonInformation"
		},
	{ ATF_POINTER, 1, offsetof(struct RRCConnectionSetup_r3_IEs, dl_InformationPerRL_List),
		(ASN_TAG_CLASS_CONTEXT | (17 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_DL_InformationPerRL_List,
		0,	/* Defer constraints checking to the member type */
		0,	/* No PER visible constraints */
		0,
		"dl-InformationPerRL-List"
		},
};
static int asn_MAP_RRCConnectionSetup_r3_IEs_oms_1[] = { 2, 4, 7, 9, 11, 13, 14, 15, 16, 17 };
static ber_tlv_tag_t asn_DEF_RRCConnectionSetup_r3_IEs_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_TYPE_tag2member_t asn_MAP_RRCConnectionSetup_r3_IEs_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* initialUE-Identity at 8449 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rrc-TransactionIdentifier at 8450 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* activationTime at 8451 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* new-U-RNTI at 8452 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* new-c-RNTI at 8453 */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* rrc-StateIndicator at 8454 */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* utran-DRX-CycleLengthCoeff at 8455 */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* capabilityUpdateRequirement at 8458 */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 }, /* srb-InformationSetupList at 8460 */
    { (ASN_TAG_CLASS_CONTEXT | (9 << 2)), 9, 0, 0 }, /* ul-CommonTransChInfo at 8462 */
    { (ASN_TAG_CLASS_CONTEXT | (10 << 2)), 10, 0, 0 }, /* ul-AddReconfTransChInfoList at 8465 */
    { (ASN_TAG_CLASS_CONTEXT | (11 << 2)), 11, 0, 0 }, /* dl-CommonTransChInfo at 8466 */
    { (ASN_TAG_CLASS_CONTEXT | (12 << 2)), 12, 0, 0 }, /* dl-AddReconfTransChInfoList at 8469 */
    { (ASN_TAG_CLASS_CONTEXT | (13 << 2)), 13, 0, 0 }, /* frequencyInfo at 8471 */
    { (ASN_TAG_CLASS_CONTEXT | (14 << 2)), 14, 0, 0 }, /* maxAllowedUL-TX-Power at 8472 */
    { (ASN_TAG_CLASS_CONTEXT | (15 << 2)), 15, 0, 0 }, /* ul-ChannelRequirement at 8473 */
    { (ASN_TAG_CLASS_CONTEXT | (16 << 2)), 16, 0, 0 }, /* dl-CommonInformation at 8474 */
    { (ASN_TAG_CLASS_CONTEXT | (17 << 2)), 17, 0, 0 } /* dl-InformationPerRL-List at 8475 */
};
static asn_SEQUENCE_specifics_t asn_SPC_RRCConnectionSetup_r3_IEs_specs_1 = {
	sizeof(struct RRCConnectionSetup_r3_IEs),
	offsetof(struct RRCConnectionSetup_r3_IEs, _asn_ctx),
	asn_MAP_RRCConnectionSetup_r3_IEs_tag2el_1,
	18,	/* Count of tags in the map */
	asn_MAP_RRCConnectionSetup_r3_IEs_oms_1,	/* Optional members */
	10, 0,	/* Root/Additions */
	-1,	/* Start extensions */
	-1	/* Stop extensions */
};
asn_TYPE_descriptor_t asn_DEF_RRCConnectionSetup_r3_IEs = {
	"RRCConnectionSetup-r3-IEs",
	"RRCConnectionSetup-r3-IEs",
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
	asn_DEF_RRCConnectionSetup_r3_IEs_tags_1,
	sizeof(asn_DEF_RRCConnectionSetup_r3_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetup_r3_IEs_tags_1[0]), /* 1 */
	asn_DEF_RRCConnectionSetup_r3_IEs_tags_1,	/* Same as above */
	sizeof(asn_DEF_RRCConnectionSetup_r3_IEs_tags_1)
		/sizeof(asn_DEF_RRCConnectionSetup_r3_IEs_tags_1[0]), /* 1 */
	0,	/* No PER visible constraints */
	asn_MBR_RRCConnectionSetup_r3_IEs_1,
	18,	/* Elements count */
	&asn_SPC_RRCConnectionSetup_r3_IEs_specs_1	/* Additional specs */
};
