#include <stdio.h>
#include <string.h>
#include "common.h"
dqword rks[2];


ALIGN16(const unsigned char FormatInputMask1_LED[]) = {
	0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00,
	0xf0, 0xf0, 0x00, 0x00, 0xf0, 0xf0, 0x00, 0x00
};

ALIGN16(const unsigned char FormatInputMask2_LED[]) = {
	0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xff, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00
};

ALIGN16(const unsigned char ANDMASKL_LED[]) = {
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f,
	0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f, 0x0f
};

ALIGN16(const unsigned char ANDMASKH_LED[]) = {
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0,
	0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0, 0xf0
};

ALIGN16(const unsigned char ANDMASK_LED[]) = {
	0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
	0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00
};

ALIGN16(const unsigned char ORMASK_LED[]) = {
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff,
	0x00, 0xff, 0x00, 0xff, 0x00, 0xff, 0x00, 0xff
};
//8a04a0
ALIGN16(const unsigned char Mbox1[]) = {
	0xA5, 0xE7, 0x5B, 0x7A, 0x42, 0x00, 0xFE, 0x21, 0xBC, 0x9D, 0x19, 0xC6, 0x63, 0xDF, 0x84, 0x38
};

//2a0Ba0
ALIGN16(const unsigned char Mbox2[]) = {
    0xBD, 0xA1, 0xCF, 0x59, 0x1C, 0x00, 0x72, 0x96, 0x6E, 0xF8, 0xD3, 0x37, 0x8A, 0xE4, 0x2B, 0x45
};

//6a41a4
ALIGN16(const unsigned char Mbox3[]) = {
    0xEC, 0xD5, 0x76, 0xFB, 0x39, 0x00, 0x9A, 0x8D, 0xA3, 0x2E, 0x4F, 0x58, 0xB4, 0x17, 0x61, 0xC2
};

//2a4ea4
ALIGN16(const unsigned char Mbox4[]) = {
    0xB4, 0xA3, 0xC2, 0x58, 0x17, 0x00, 0x76, 0x9A, 0x61, 0xFB, 0xD5, 0x39, 0x8D, 0xEC, 0x2E, 0x4F
};

//5a42a4
ALIGN16(const unsigned char Mbox5[]) = {
    0x9B, 0x2A, 0xDC, 0x15, 0xB1, 0x00, 0x47, 0xC9, 0xF6, 0x3F, 0x6D, 0xE3, 0x78, 0x8E, 0x52, 0xA4
};
//15a410a4
ALIGN16(const unsigned char Mbox6[]) = {
    0x81, 0x64, 0x49, 0x32, 0xE5, 0x00, 0xC8, 0x7B, 0x2D, 0x56, 0xAC, 0x1F, 0x9E, 0xB3, 0xFA, 0xD7
};
//6a42a4
ALIGN16(const unsigned char Mbox7[]) = {
    0xEB, 0xDA, 0x7C, 0xF5, 0x31, 0x00, 0x97, 0x89, 0xA6, 0x2F, 0x4D, 0x53, 0xB8, 0x1E, 0x62, 0xC4
};
//11a49a4
ALIGN16(const unsigned char Mbox8[]) = {
    0xD6, 0x1B, 0xF3, 0x9C, 0xCD, 0x00, 0x25, 0x6F, 0xE8, 0x87, 0x3E, 0x74, 0xA2, 0x4A, 0xB9, 0x51
};


ALIGN16(const unsigned char SHIFTROWL[]) = {
	0x00, 0x05, 0x02, 0x07, 0x04, 0x01, 0x06, 0x03,
	0x08, 0x0D, 0x0A, 0x0F, 0x0C, 0x09, 0x0E, 0x0B
};

ALIGN16(const unsigned char SHIFTROWH[]) = {
	0x02, 0x07, 0x04, 0x01, 0x06, 0x03, 0x00, 0x05,
	0x0A, 0x0F, 0x0C, 0x09, 0x0E, 0x0B, 0x08, 0x0D
};

ALIGN16(const unsigned char RC_80[]) = {
  0x45, 0x32, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x10, 0x10, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x30, 0x30, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x70, 0x70, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x71, 0x71, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x71, 0x71, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x73, 0x73, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x73, 0x73, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x67, 0x67, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x67, 0x67, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x57, 0x57, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x57, 0x57, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x37, 0x37, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x37, 0x37, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x76, 0x76, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x76, 0x76, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x75, 0x75, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x75, 0x75, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x63, 0x63, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x63, 0x63, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x47, 0x47, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x47, 0x47, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x17, 0x17, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x17, 0x17, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x36, 0x36, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x74, 0x74, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x74, 0x74, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x61, 0x61, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x61, 0x61, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x53, 0x53, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x53, 0x53, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x27, 0x27, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x27, 0x27, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x56, 0x56, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x56, 0x56, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x35, 0x35, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x35, 0x35, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x62, 0x62, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x62, 0x62, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x45, 0x45, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x45, 0x45, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x03, 0x03, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x06, 0x06, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x14, 0x14, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x20, 0x20, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x50, 0x50, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x31, 0x31, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x31, 0x31, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x72, 0x72, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x72, 0x72, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x65, 0x65, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x65, 0x65, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x43, 0x43, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x43, 0x43, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x07, 0x07, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x16, 0x16, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x16, 0x16, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x34, 0x34, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x34, 0x34, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x60, 0x60, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x51, 0x51, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x51, 0x51, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x33, 0x33, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x66, 0x66, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x55, 0x55, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x23, 0x23, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x23, 0x23, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x46, 0x46, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x46, 0x46, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x15, 0x15, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x15, 0x15, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x44, 0x44, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x12, 0x12, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x24, 0x24, 0x00, 0x00, 0x00, 0x00
, 0x45, 0x32, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00, 0x45, 0x32, 0x40, 0x40, 0x00, 0x00, 0x00, 0x00
};


 dqword BitPermuteStep64(dqword in, dqword mask, int shift){
	dqword tmp = SRLQW(in, shift);
	tmp = XORDQW(tmp, in);
	tmp = ANDDQW(tmp, mask);
	dqword out = SLLQW(tmp, shift);
	tmp = XORDQW(tmp, in);
	out = XORDQW(out, tmp);
	return out;
}

 void NibbleExchange(dqword *in){
	dqword tmp = ANDDQW(*in, LOAD(ANDMASKH_LED));
	*in = ANDDQW(*in, LOAD(ANDMASKL_LED));
	tmp = SRLQW(tmp, 4);
	*in = SLLQW(*in, 4);
	*in = XORDQW(*in, tmp);
}

/*
input:  a14a15a12a13.....a0a1...b0b1
output: a15a11a7a3 a14a10a6a2 a13a9a5a1 a12a8a4a0 b15b11b7b3 b14b10b6b2 b13b9b5b1 b12b8b4b0
*/
 void FormateInput(dqword *in){
	NibbleExchange(in);
	dqword tmp = BitPermuteStep64(*in, LOAD(FormatInputMask1_LED), 12);
	*in = BitPermuteStep64(tmp, LOAD(FormatInputMask2_LED), 24);
}

 void FormatOutput(dqword *in){
	dqword tmp = BitPermuteStep64(*in, LOAD(FormatInputMask1_LED), 12);
	*in = BitPermuteStep64(tmp, LOAD(FormatInputMask2_LED), 24);
	NibbleExchange(in);
}

 void MixColumnWithSbox(dqword *state){
	dqword sum = ORDQW(ANDDQW(*state, LOAD(ANDMASK_LED)), LOAD(ORMASK_LED)); // FF 0a3... ff 0a0 FF 0b3.... FF 0b0
	dqword tmp1 = PSHUFB(LOAD(Mbox1), sum);
	//get Mobx1: 8 4   Mbox2 2 B
	dqword tmp2 = PSHUFB(LOAD(Mbox2), sum);
	tmp2 = SLLQW(tmp2, 8);
	sum = XORDQW(tmp2, tmp1); // 2a3Ba38a34a3....2a0Ba08a04a0

	//get Mbox3: 6, 1   Mbox4 2, E
	*state = SRLQW(*state, 4); // 0a15a14a13...a8a4 0b15....b8b4
	dqword tmp3 = ORDQW(ANDDQW(*state, LOAD(ANDMASK_LED)), LOAD(ORMASK_LED));
	tmp1 = PSHUFB(LOAD(Mbox3), tmp3);
	tmp2 = PSHUFB(LOAD(Mbox4), tmp3);
	tmp2 = SLLQW(tmp2, 8);
	tmp2 = XORDQW(tmp2, tmp1);
	sum = XORDQW(sum, tmp2);

	//get Mbox5: 5, 2  Mbox6: F, A
	*state = SRLQW(*state, 4);
	tmp3 = ORDQW(ANDDQW(*state, LOAD(ANDMASK_LED)), LOAD(ORMASK_LED));
	tmp1 = PSHUFB(LOAD(Mbox5), tmp3);
	tmp2 = PSHUFB(LOAD(Mbox6), tmp3);
	tmp2 = SLLQW(tmp2, 8);
	tmp2 = XORDQW(tmp2, tmp1);
	sum = XORDQW(sum, tmp2);

	//get Mbox7: 6, 2  Mbox8: B, 9
	*state = SRLQW(*state, 4);
	tmp3 = ORDQW(ANDDQW(*state, LOAD(ANDMASK_LED)), LOAD(ORMASK_LED));
	tmp1 = PSHUFB(LOAD(Mbox7), tmp3);
	tmp2 = PSHUFB(LOAD(Mbox8), tmp3);
	tmp2 = SLLQW(tmp2, 8);
	tmp2 = XORDQW(tmp2, tmp1);
	*state = XORDQW(sum, tmp2);
}

/*
 *input: a15a11a7a3...a12a8a4a0 b15b11b7b3...b12b8b4b0
 *output:a14a9a4a3 a13a8a7a2 a12a11a6a1 a15a10a5a0 ... b15b10b5b0
 * */
 void ShiftRow(dqword *state){
	dqword tmp = MASK4L(*state);
	*state = MASK4U(*state);
	*state = XORDQW(PSHUFB(*state, LOAD(SHIFTROWH)),PSHUFB(tmp, LOAD(SHIFTROWL)));
}

 void AddConstants(dqword *state, dqword  rc){
	*state = XORDQW(*state, rc);
}

 void AddKey(dqword *state, dqword *key){
	*state = XORDQW(*state, *key);
}

void LED80_InitKEY(const unsigned char* userkey){
	unsigned char tk[32];
	memset(tk, 0, sizeof(tk));
	memcpy(tk, userkey, 8);
	memcpy(tk+8, userkey, 8);
	memcpy(tk+16, userkey+8, 2);
	memcpy(tk+24, userkey+8, 2);
	rks[0] = LOAD(tk);
	rks[1] = LOAD(tk+16);
	FormateInput(rks);
	FormateInput(rks+1);
}

void LED80_enc(dqword *state, const unsigned char* userkey){
	
	FormateInput(state);
	int RN = 48;
	AddKey(state, &rks[0]);
	for(int i=0; i<RN/4; i++){
		for(int j=0; j<4; j++){
			AddConstants(state, LOAD(RC_80+16*(i*4+j)));
			ShiftRow(state);
			MixColumnWithSbox(state);
		}
		AddKey(state, &rks[1-(i&1)]);
	}
	FormatOutput(state);
}

