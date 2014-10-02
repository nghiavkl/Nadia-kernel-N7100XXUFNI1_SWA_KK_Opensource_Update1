#ifndef __S6E8AA0_GAMMA_H__
#define __S6E8AA0_GAMMA_H__

#include "s6e8aa0_param.h"

#define ACL_PARAM_SIZE	ARRAY_SIZE(acl_cutoff_50)
#define AID_PARAM_SIZE	ARRAY_SIZE(SEQ_PANEL_CONDITION_SET_500MBPS)

static const unsigned char SEQ_PANEL_CONDITION_SET_500MBPS[] = {
	0xF8,
	0x19, 0x35, 0x00, 0x00, 0x00, 0x94, 0x00, 0x3C, 0x7D, 0x10,
	0x27, 0x08, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x6E,
	0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x23, 0x37, 0xC0, 0xC1,
	0x01, 0x81, 0xC1, 0x00, 0xC3, 0xF6, 0xF6, 0xC1
};

static const unsigned char SEQ_PANEL_CONDITION_SET_B_483MBPS[] = {
	0xF8,
	0x19, 0x35, 0x00, 0x00, 0x00, 0x94, 0x00, 0x3C, 0x7D, 0x10,
	0x27, 0x08, 0x6E, 0x00, 0x00, 0x00, 0x00, 0x04, 0x08, 0x6E,
	0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x23, 0x35, 0xC0, 0xC1,
	0x01, 0x81, 0xC1, 0x00, 0xC3, 0xF6, 0xF6, 0xC1
};

static const unsigned char SEQ_PANEL_CONDITION_SET_500MBPS_46[] = {
	0xF8,
	0x3D, 0x35, 0x00, 0x00, 0x00, 0x93, 0x00, 0x3C, 0x7D, 0x08,
	0x27, 0x7D, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x04, 0x08, 0x6E,
	0x00, 0x00, 0x00, 0x02, 0x08, 0x08, 0x23, 0x23, 0xC0, 0xC8,
	0x08, 0x48, 0xC1, 0x00, 0xC1, 0xFF, 0xFF, 0xC8
};

static const unsigned char SEQ_PANEL_CONDITION_SET_480MBPS_46[] = {
	0xF8,
	0x3D, 0x32, 0x00, 0x00, 0x00, 0x8D, 0x00, 0x39, 0x78, 0x08,
	0x26, 0x78, 0x3C, 0x00, 0x00, 0x00, 0x20, 0x04, 0x08, 0x69,
	0x00, 0x00, 0x00, 0x02, 0x07, 0x07, 0x21, 0x21, 0xC0, 0xC8,
	0x08, 0x48, 0xC1, 0x00, 0xC1, 0xFF, 0xFF, 0xC8
};

static const unsigned char SEQ_PANEL_CONDITION_SET_480MBPS_465[] = {
	0xF8,
	0x3D, 0x35, 0x00, 0x00, 0x00, 0x93, 0x00, 0x3C, 0x7D, 0x08,
	0x27, 0x7D, 0x3F, 0x00, 0x00, 0x00, 0x20, 0x04, 0x08, 0x6E,
	0x00, 0x00, 0x00, 0x02, 0x08, 0x08, 0x23, 0x23, 0xC0, 0xC8,
	0x08, 0x48, 0xC1, 0x00, 0xC1, 0xFF, 0xFF, 0xC8
};

static const unsigned char SEQ_GAMMA_CONDITION_SET[] = {
	0xFA,
	0x01, 0x58, 0x1F, 0x63, 0xAC, 0xB4, 0x99, 0xAD, 0xBA, 0xA3,
	0xC0, 0xCB, 0xBB, 0x93, 0x9F, 0x8B, 0xAD, 0xB4, 0xA7, 0x00,
	0xBE, 0x00, 0xAB, 0x00, 0xE7
};

static const unsigned char SEQ_GAMMA_CONDITION_SET_A1_SM2[] = {
	0xFA,
	0x01, 0x71, 0x31, 0x7B, 0xA4, 0xB6,
	0x95, 0xA9, 0xBC, 0xA2, 0xBB, 0xC9,
	0xB6, 0x91, 0xA3, 0x8B, 0xAD, 0xB6,
	0xA9, 0x00, 0xD6, 0x00, 0xBE, 0x00,
	0xFC,
};

static const unsigned char SEQ_GAMMA_CONDITION_SET_A2_SM2[] = {
	0xFA,
	0x01, 0x5F, 0x2E, 0x67, 0xAA, 0xC6,
	0xAC, 0xB0, 0xC8, 0xBB, 0xBE, 0xCB,
	0xBD, 0x97, 0xA5, 0x91, 0xAF, 0xB8,
	0xAB, 0x00, 0xC2, 0x00, 0xBA, 0x00, 0xE2,
};

static const unsigned char SEQ_ETC_SOURCE_CONTROL[] = {
	0xF6,
	0x00, 0x02, 0x00
};

static const unsigned char SEQ_ETC_PENTILE_CONTROL[] = {
	0xB6,
	0x0C, 0x02, 0x03, 0x32, 0xC0,
	0x44, 0x44, 0xC0, 0x00
};

static const unsigned char SEQ_ETC_PENTILE_CONTROL_46[] = {
	0xB6,
	0x0C, 0x02, 0x03, 0x32, 0xFF,
	0x44, 0x44, 0xC0, 0x00
};

static const unsigned char SEQ_ETC_PENTILE_CONTROL_465[] = {
	0xB6,
	0x0C, 0x02, 0x03, 0x32, 0xC0,
	0x44, 0x44, 0xC0, 0x00
};

static const unsigned char SEQ_ETC_NVM_SETTING[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x07, 0xC0, 0x41,
	0xC1, 0x00, 0x60, 0x19
};

static const unsigned char SEQ_ETC_NVM_SETTING_46[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x07, 0xC0, 0x41,
	0xD0, 0x00, 0x60, 0x19
};

static const unsigned char SEQ_ETC_NVM_SETTING_465[] = {
	0xD9,
	0x14, 0x40, 0x0C, 0xCB, 0xCE,
	0x6E, 0xC4, 0x07, 0xC0, 0x41,
	0xC5, 0x00, 0x60, 0x19
};

static const unsigned char SEQ_ETC_POWER_CONTROL[] = {
	0xF4,
	0xCF, 0x0A, 0x15, 0x10, 0x19, 0x33, 0x02
};

static const unsigned char SEQ_ETC_POWER_CONTROL_46[] = {
	0xF4,
	0xCF, 0x0A, 0x12, 0x10, 0x1E, 0x33, 0x02
};

enum {
	ACL_STATUS_0P = 0,
	ACL_STATUS_20P,
	ACL_STATUS_33P,
	ACL_STATUS_40P,
	ACL_STATUS_43P,
	ACL_STATUS_45P,
	ACL_STATUS_48P,
	ACL_STATUS_50P,
	ACL_STATUS_52P,
	ACL_STATUS_53P,
	ACL_STATUS_55P,
	ACL_STATUS_MAX
} ACL_STATUS;

const unsigned char acl_cutoff_20[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x04, 0x07, 0x0A, 0x0D, 0x10,
	0x12, 0x15, 0x18, 0x1B, 0x1E
};

const unsigned char acl_cutoff_33[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x06, 0x0A, 0x0F, 0x14, 0x19,
	0x1D, 0x22, 0x27, 0x2B, 0x30
};

const unsigned char acl_cutoff_40[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x07, 0x0C, 0x12, 0x17, 0x1D,
	0x23, 0x28, 0x2E, 0x33, 0x39
};

const unsigned char acl_cutoff_43[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x07, 0x0D, 0x14, 0x1A, 0x20,
	0x26, 0x2C, 0x33, 0x39, 0x3F
};

const unsigned char acl_cutoff_45[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x07, 0x0E, 0x14, 0x1B, 0x21,
	0x27, 0x2E, 0x34, 0x3B, 0x41
};

const unsigned char acl_cutoff_48[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x08, 0x0F, 0x17, 0x1E, 0x25,
	0x2C, 0x33, 0x3B, 0x42, 0x49
};

const unsigned char acl_cutoff_50[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x09, 0x10, 0x18, 0x1F, 0x27,
	0x2E, 0x36, 0x3D, 0x45, 0x4C
};

const unsigned char acl_cutoff_52[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x09, 0x11, 0x19, 0x21, 0x29,
	0x31, 0x39, 0x41, 0x49, 0x51
};

const unsigned char acl_cutoff_53[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x09, 0x11, 0x1A, 0x22, 0x2A,
	0x32, 0x3A, 0x43, 0x4B, 0x53
};

const unsigned char acl_cutoff_55[] = {
	0xC1,
	0x47, 0x53, 0x13, 0x53, 0x00, 0x00,
	0x02, 0xCF, 0x00, 0x00, 0x04, 0xFF,
	0x00, 0x00, 0x00, 0x00, 0x00,

	0x01, 0x0A, 0x12, 0x1B, 0x23, 0x2C,
	0x35, 0x3D, 0x46, 0x4E, 0x57
};

const unsigned char *ACL_CUTOFF_TABLE[ACL_STATUS_MAX] = {
	SEQ_ACL_OFF,
	acl_cutoff_20,
	acl_cutoff_33,
	acl_cutoff_40,
	acl_cutoff_43,
	acl_cutoff_45,
	acl_cutoff_48,
	acl_cutoff_50,
	acl_cutoff_52,
	acl_cutoff_53,
	acl_cutoff_55,
};

#endif /* __S6E8AA0_GAMMA_H__ */
