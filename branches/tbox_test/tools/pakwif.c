#include <stdio.h>
#include <stddef.h>
#include <stdint.h>
#include <string.h>
#include <stdlib.h>

typedef struct {
  char type[32];
  char description[32];
  char name[32];
  uint32_t length;
  uint32_t checksumm;
} __attribute__((packed)) header_t;

typedef unsigned short uint16;

unsigned char crypt1[512] = {
 0x06, 0x5f, 0xd3, 0x1c, 0xb6, 0x2f, 0x10, 0x77,
 0xce, 0x3f, 0x5d, 0x7b, 0xa1, 0x92, 0x2f, 0x8a,
 0xae, 0xff, 0x56, 0x10, 0x40, 0xc4, 0xd6, 0x5d,
 0x7b, 0x64, 0xc0, 0xaa, 0x41, 0xa6, 0x69, 0x96,
 0x1f, 0xad, 0xac, 0x42, 0x5d, 0x24, 0x4a, 0xad,
 0xdf, 0x3d, 0x05, 0x81, 0x67, 0x18, 0xed, 0x7a,
 0x9c, 0x43, 0xe6, 0x4b, 0xe3, 0x1e, 0xc9, 0x50,
 0xa0, 0x32, 0xd3, 0x2d, 0x90, 0xc8, 0xc3, 0xa9,
 0xb2, 0x54, 0x70, 0x17, 0xee, 0x17, 0x1b, 0xbd,
 0x66, 0x56, 0x74, 0x34, 0xef, 0x88, 0x3b, 0x95,
 0xd6, 0xb0, 0xc3, 0x87, 0xe9, 0x4f, 0x0d, 0xe8,
 0x43, 0xca, 0x26, 0x14, 0xbe, 0xe3, 0xaf, 0x68,
 0xd4, 0x2f, 0xf2, 0x1e, 0x1b, 0x45, 0xda, 0x3a,
 0x1b, 0xd2, 0x9d, 0x9c, 0x02, 0xb0, 0x43, 0x9f,
 0xd3, 0x44, 0x0e, 0xa4, 0x27, 0x4b, 0xf0, 0x11,
 0x4e, 0x14, 0xc7, 0x8f, 0xac, 0x71, 0xd4, 0x1a,
 0xbe, 0xc4, 0x72, 0x60, 0x13, 0xef, 0x95, 0x17,
 0x34, 0x8d, 0xf3, 0xbb, 0x14, 0x7c, 0xc9, 0xbe,
 0xfb, 0x9f, 0x1d, 0xaa, 0x86, 0x48, 0x4d, 0x4f,
 0x79, 0x47, 0x21, 0xb7, 0xe4, 0x65, 0xe1, 0xa2,
 0xa0, 0x8e, 0x5e, 0xd8, 0x8b, 0xbb, 0x4e, 0xb2,
 0x51, 0xfd, 0x08, 0x67, 0x93, 0xb9, 0xef, 0x72,
 0x0e, 0xd9, 0x22, 0xdf, 0x9d, 0x41, 0x45, 0x14,
 0xa8, 0x7a, 0xb9, 0xc7, 0x2c, 0xc7, 0x91, 0xb2,
 0x8a, 0xb6, 0x16, 0x67, 0x52, 0x90, 0x09, 0x6e,
 0x10, 0xe7, 0x44, 0xdf, 0x38, 0x4e, 0x15, 0x5c,
 0xad, 0xf5, 0xea, 0xbc, 0x4d, 0x5c, 0x17, 0xdd,
 0xf9, 0xd8, 0x0a, 0x30, 0x6d, 0xcb, 0x5c, 0xe1,
 0x85, 0x43, 0x42, 0x0b, 0xe9, 0xb3, 0x67, 0x91,
 0x8a, 0x0a, 0xe4, 0x84, 0xf1, 0x15, 0x12, 0x85,
 0xfe, 0xa0, 0x47, 0xea, 0x18, 0xcd, 0x50, 0x90,
 0x75, 0x38, 0x9a, 0x26, 0xca, 0x3a, 0xa9, 0x6e,
 0x03, 0x1c, 0xc2, 0x83, 0xa1, 0xdd, 0xfc, 0x68,
 0x84, 0xab, 0x00, 0x9f, 0xda, 0xaf, 0x23, 0x4a,
 0xfd, 0x0f, 0xf4, 0x07, 0x41, 0x08, 0x99, 0x49,
 0xc6, 0xe8, 0x64, 0x1c, 0x8a, 0x90, 0x04, 0x83,
 0xa6, 0x4e, 0x0f, 0xb6, 0x48, 0xd6, 0x7b, 0xa7,
 0x8b, 0xeb, 0xa4, 0x19, 0xda, 0x82, 0xe2, 0xa8,
 0xd9, 0x11, 0x56, 0x18, 0xf1, 0xb1, 0xaa, 0x72,
 0x52, 0xeb, 0x5a, 0x83, 0x95, 0x44, 0xee, 0x3b,
 0xe6, 0x7a, 0xfa, 0xa1, 0xa0, 0x48, 0xcc, 0x66,
 0xed, 0xc1, 0x4f, 0xa3, 0x3f, 0xa4, 0xf7, 0xda,
 0x34, 0x92, 0x27, 0xc0, 0xe1, 0x73, 0x6e, 0x92,
 0x7b, 0x0c, 0x57, 0xec, 0x65, 0xb0, 0xc0, 0x75,
 0x22, 0x55, 0x03, 0x10, 0x56, 0xf0, 0xb9, 0x21,
 0x49, 0xf1, 0xeb, 0x50, 0xa0, 0x96, 0xbd, 0x17,
 0x25, 0x22, 0xea, 0x30, 0x42, 0x34, 0xc8, 0x7f,
 0x19, 0x90, 0xc7, 0x70, 0x48, 0x8a, 0x17, 0x8b,
 0x4c, 0x24, 0x12, 0x53, 0x6a, 0xf4, 0xf6, 0x7d,
 0xb4, 0x21, 0xc1, 0xfa, 0xef, 0x87, 0xca, 0x0a,
 0x07, 0x7f, 0xbd, 0x52, 0x18, 0x21, 0x0f, 0x40,
 0x7b, 0xb1, 0x1a, 0xc2, 0xc2, 0xfb, 0xef, 0x18,
 0x7c, 0x64, 0x74, 0x6c, 0x94, 0xbe, 0xc5, 0x78,
 0x63, 0x97, 0x4b, 0xa5, 0xe5, 0x4a, 0x70, 0x4a,
 0x8c, 0x2a, 0x86, 0xfd, 0x17, 0xd8, 0x20, 0xac,
 0xfc, 0x50, 0xd9, 0x81, 0x84, 0x78, 0x3f, 0x7e,
 0xeb, 0xed, 0xa6, 0x34, 0xc1, 0x9d, 0x75, 0x87,
 0xf6, 0x8e, 0x49, 0x42, 0xef, 0x62, 0x68, 0xfd,
 0x13, 0xf2, 0xb6, 0xbe, 0x90, 0x60, 0x79, 0x60,
 0xc8, 0xbb, 0x83, 0xcd, 0xa6, 0x5e, 0x44, 0x02,
 0xb7, 0x3e, 0xcf, 0x82, 0xd2, 0x0e, 0x51, 0x44,
 0x9b, 0x5c, 0xc3, 0x33, 0x76, 0xe1, 0xc0, 0x5e,
 0x25, 0xc0, 0x16, 0xbe, 0x7f, 0xeb, 0x1a, 0x31,
 0x69, 0x15, 0x76, 0x61, 0xaa, 0xe9, 0x30, 0xdc,
};

unsigned char crypt2[513] = {
 0x11, 0xf5, 0x6e, 0x60, 0xde, 0x9c, 0x6a, 0xfc,
 0x77, 0xc1, 0xd1, 0xf7, 0xf9, 0x5e, 0x28, 0x9b,
 0xf5, 0xc6, 0x6b, 0x1d, 0x6a, 0x4d, 0x74, 0x7c,
 0x29, 0x55, 0x05, 0x86, 0xa7, 0xcf, 0x80, 0x6e,
 0x52, 0x20, 0x8a, 0xe5, 0x37, 0xd8, 0x75, 0xa2,
 0x52, 0x54, 0xde, 0x72, 0x80, 0xf4, 0x37, 0x89,
 0xcf, 0x02, 0x18, 0x27, 0xd5, 0x6b, 0x1b, 0xfc,
 0x86, 0x44, 0x02, 0x7a, 0x93, 0x67, 0x8b, 0xaf,
 0x8e, 0xb8, 0x06, 0xf3, 0x89, 0x71, 0x59, 0xcf,
 0x24, 0x6c, 0x35, 0x9b, 0xfe, 0x61, 0x38, 0xe8,
 0x6d, 0x55, 0xa8, 0xe9, 0xf9, 0xec, 0x97, 0x6a,
 0x14, 0xd6, 0xf4, 0x34, 0x19, 0x7b, 0xa4, 0x59,
 0x94, 0xbd, 0x67, 0xb2, 0xc2, 0x72, 0x79, 0x10,
 0x85, 0x8c, 0xc5, 0xeb, 0x2b, 0x7f, 0x82, 0x86,
 0xc0, 0x0a, 0xd0, 0x18, 0x29, 0x6c, 0xfa, 0x9a,
 0x33, 0x16, 0xa0, 0x09, 0x20, 0xbc, 0x8e, 0xef,
 0x3d, 0x0a, 0x8b, 0x24, 0x25, 0xaf, 0x82, 0x26,
 0x3a, 0xed, 0x05, 0xb7, 0x7a, 0xd3, 0xae, 0x7a,
 0x74, 0xb0, 0xef, 0xea, 0x36, 0x7a, 0xb8, 0x0c,
 0x97, 0x5a, 0x5c, 0x23, 0x60, 0x06, 0x9f, 0x8b,
 0x18, 0x1d, 0x15, 0xa5, 0x52, 0x2e, 0x7e, 0x7a,
 0x13, 0x39, 0xdc, 0x31, 0x9d, 0x62, 0xbe, 0xfd,
 0xb3, 0x29, 0x34, 0xff, 0xcb, 0x07, 0xe4, 0xcb,
 0xa1, 0x77, 0xb2, 0x54, 0xd3, 0xa5, 0xc8, 0x4a,
 0xe5, 0x38, 0xee, 0x33, 0x61, 0x4b, 0x38, 0x5a,
 0xfc, 0x6b, 0xc6, 0x25, 0x99, 0x3c, 0xcd, 0x4b,
 0x10, 0xbd, 0x26, 0x1c, 0xb1, 0x0a, 0x4e, 0x0d,
 0xc9, 0x97, 0x55, 0x70, 0x51, 0x48, 0x25, 0xb0,
 0x42, 0x24, 0x58, 0x05, 0x59, 0x9e, 0x59, 0xd4,
 0x4d, 0xde, 0x35, 0x1d, 0xcb, 0x78, 0xb3, 0x9c,
 0xa9, 0x15, 0xee, 0xbd, 0x72, 0xca, 0x6c, 0x5b,
 0xa5, 0x11, 0x3c, 0xb4, 0xf1, 0x8a, 0x0d, 0x52,
 0xd7, 0x49, 0x77, 0x91, 0xf2, 0x38, 0x93, 0xc3,
 0x76, 0xd7, 0xb6, 0xdc, 0x93, 0x2e, 0x15, 0xb5,
 0xfd, 0x9f, 0xdb, 0xcd, 0x61, 0x05, 0x0f, 0x72,
 0x65, 0xb4, 0x6f, 0xee, 0x44, 0xb5, 0xbb, 0x01,
 0x10, 0x7c, 0xde, 0xcd, 0xb3, 0xce, 0xfb, 0x33,
 0x08, 0x93, 0x2c, 0x84, 0x11, 0x61, 0xa4, 0x53,
 0x00, 0xb8, 0x36, 0xdb, 0x52, 0x29, 0x6f, 0x67,
 0xaf, 0xf1, 0x42, 0x9f, 0xac, 0x46, 0xec, 0x36,
 0xff, 0xbc, 0x17, 0xd9, 0xc6, 0xf4, 0x67, 0xde,
 0x93, 0xcc, 0x0a, 0xa5, 0xb6, 0x4c, 0x26, 0x28,
 0x4f, 0x68, 0x82, 0xa1, 0x2b, 0x29, 0x2c, 0x97,
 0xf9, 0xd4, 0xc1, 0x07, 0xc3, 0xfe, 0x1c, 0x22,
 0xf5, 0xf5, 0x2a, 0xd8, 0xbd, 0x4b, 0xea, 0x5b,
 0x97, 0xbc, 0x3e, 0x24, 0xc1, 0xa0, 0x25, 0xa9,
 0x44, 0x3b, 0x6f, 0x68, 0xef, 0x1d, 0x05, 0x56,
 0xda, 0x53, 0xb0, 0xb7, 0xff, 0x4c, 0xca, 0x55,
 0x81, 0xf7, 0xa7, 0x25, 0x4e, 0x8c, 0x12, 0x89,
 0x10, 0x44, 0x91, 0xc7, 0xbb, 0x3c, 0xcf, 0x24,
 0x40, 0xc1, 0x66, 0x8e, 0xbb, 0xf4, 0x11, 0x0b,
 0xf7, 0x10, 0x3f, 0x9d, 0x81, 0x48, 0xe8, 0x1b,
 0xc8, 0xf3, 0x08, 0xbc, 0xbb, 0x56, 0x01, 0x86,
 0x05, 0x75, 0x76, 0x25, 0xba, 0xd2, 0x41, 0x5f,
 0xed, 0x6a, 0xbb, 0xf7, 0xb5, 0x32, 0x90, 0x36,
 0x0f, 0x88, 0x8d, 0x86, 0x1a, 0x8e, 0xdb, 0xee,
 0x2b, 0xbc, 0xd5, 0x58, 0x6b, 0xaa, 0x70, 0xa0,
 0x05, 0xe4, 0x41, 0xca, 0x0c, 0x1d, 0x08, 0x57,
 0x19, 0x73, 0x5f, 0x4b, 0xec, 0xd6, 0xfd, 0xc0,
 0xc2, 0x62, 0x17, 0xab, 0x84, 0x4d, 0x98, 0x7f,
 0x19, 0xec, 0x49, 0x9e, 0xd4, 0x71, 0xf2, 0xc5,
 0x3e, 0x65, 0x9e, 0x67, 0x7e, 0xc8, 0xa1, 0xc2,
 0xed, 0xb6, 0xdd, 0x6a, 0x64, 0x00, 0x14, 0xbb,
 0xfe, 0x6d, 0x11, 0xd5, 0x60, 0xd8, 0x71, 0xff,
 0x36};

#define CRYPT1_SIZE 512
#define CRYPT2_SIZE 513

#define HEADER_SIZE (sizeof(header_t)/sizeof(char))

int crypt_fwrite(void *buf, int len, FILE *f)
{
    unsigned char cbuf[1024];
    int r, rtot, start, towr, i, c1, c2;

    start = ftell(f);
    rtot = 0;

    c1 = start % CRYPT1_SIZE;
    c2 = start % CRYPT2_SIZE;

    while (len>0){
	if (len>1024)
	    towr = 1024;
	else
	    towr = len;

	for (i=0;i<towr;i++){
	    cbuf[i] = ((unsigned char*)buf)[i+rtot] ^ crypt1[c1++] ^ crypt2[c2++];

	    if (c1 >= CRYPT1_SIZE)
		c1 = 0;
	    if (c2 >= CRYPT2_SIZE)
		c2 = 0;
	}

	r = fwrite(cbuf,1,towr,f);
	if (r<0)
	    return r;
	rtot += r;
	len -= r;
    }

    return rtot;
}

int crypt_fread(void *buf, int len, FILE *f)
{
    unsigned char cbuf[1024];
    int r, rtot, start, towr, i, c1, c2;

    start = ftell(f);
    rtot = 0;

    c1 = start % CRYPT1_SIZE;
    c2 = start % CRYPT2_SIZE;

    if (len>1024)
	towr = 1024;
    else
	towr = len;
    r = fread(cbuf,1,towr,f);

    while (len>0 && r>0){
	for (i=0;i<r;i++){
	    ((unsigned char*)buf)[i+rtot] = ((unsigned char*)cbuf)[i] ^ crypt1[c1++] ^ crypt2[c2++];

	    if (c1 >= CRYPT1_SIZE)
		c1 = 0;
	    if (c2 >= CRYPT2_SIZE)
		c2 = 0;
	}

	rtot += r;
	len -= r;

	if (len>1024)
	    towr = 1024;
	else
	    towr = len;
	r = fread(cbuf,1,towr,f);
	if (r<0)
	    return r;
    }

    return rtot;
}



typedef struct {
	FILE *f;
} pak_t;

pak_t *pak_create(char *filename)
{
	char fnbuff[100];
	char *fnp;
	FILE *f;
	pak_t *p;
	header_t h;

	f = fopen(filename, "w+b");
	if(f == NULL){
		return NULL;
	}

	p = malloc(sizeof(pak_t));
	p->f = f;

	fnp = strrchr(filename, '/');
	if (fnp != NULL){
		strncpy(fnbuff, fnp+1, 31);
	} else
		strncpy(fnbuff, filename, 31);
	fnbuff[31] = 0;
	

	memset(&h, 0, HEADER_SIZE);

	strcpy(h.type, "HEADER");
	strcpy(h.description, "UpgradeFirmSignature");
	strcpy(h.name, fnbuff);

	h.length = -1;
	h.checksumm = -1;

	crypt_fwrite(&h,HEADER_SIZE,f);

	return p;
}

uint32_t checksumm_init()
{
	return 0;
}

// XXX len must be 2*N unless it's a last block!
uint32_t checksumm_update(uint32_t cs, char *buf, int len)
{
	int i;

	for (i=0;i<len/2;i++)
		cs+=((unsigned short*)buf)[i];	
	if (len&1)
		cs+=buf[len-1];	

	return cs;
}

#define BLKSIZE 0x1000
int pak_add_file(pak_t *p,
	char *type, char *desc, char *infirname, char *filename, uint32_t baseaddr)
{
	char fnbuff[100];
	char buff[BLKSIZE];
	header_t h;
	FILE *inf;
	char *fnp;
	long filelen;
	int bcnt;

	inf = fopen(filename, "r+b");
	if (inf == NULL){
		return -1;
	}

	memset(&h, 0, HEADER_SIZE);

	fseek(inf, 0, SEEK_END);
	filelen = ftell(inf);
	fseek(inf, 0, SEEK_SET);

	fnp = strrchr(infirname, '/');
	if (fnp != NULL){
		strncpy(fnbuff, fnp+1, 31);
	} else
		strncpy(fnbuff, infirname, 31);
	fnbuff[31] = 0;

	fseek(p->f, HEADER_SIZE, SEEK_CUR);
	h.checksumm = checksumm_init();

	/* write data */
	bcnt = fread(buff, 1, BLKSIZE, inf);
	while (bcnt>0){
		h.checksumm = checksumm_update(h.checksumm, buff, bcnt);
		crypt_fwrite(buff, bcnt, p->f);
		bcnt = fread(buff, 1, BLKSIZE, inf);
	}

	/* write header */
	fseek(p->f, -filelen-HEADER_SIZE, SEEK_CUR);

	strcpy(h.type, type);
	strcpy(h.description, desc);
	strcpy(h.name, fnbuff);

	h.length = filelen;
	h.checksumm = (baseaddr==0xffffffff)?h.checksumm:baseaddr;
	crypt_fwrite(&h,HEADER_SIZE,p->f);
	fseek(p->f, filelen, SEEK_CUR);


	fclose(inf);
	return 0;
}

int pak_add_4byteid(pak_t *p,
	char *desc, char *name, uint32_t id)
{
	header_t h;

	memset(&h, 0, HEADER_SIZE);
	strcpy(h.type, "4BYTEID");
	strcpy(h.description, desc);
	strcpy(h.name, name);
	h.length = 4;
	h.checksumm = 0;

	crypt_fwrite(&h,HEADER_SIZE,p->f);
	crypt_fwrite(&id,4,p->f);

	return 0;
}

void pak_close(pak_t *p)
{
	char buff[BLKSIZE];
	uint32_t len;
	uint32_t cs;
	int bcnt;

	len = ftell(p->f);
	cs = checksumm_init();
	fseek(p->f, HEADER_SIZE, SEEK_SET);

	bcnt = crypt_fread(buff, BLKSIZE, p->f);
	while (bcnt>0){
		cs = checksumm_update(cs, buff, bcnt);
		bcnt = crypt_fread(buff, BLKSIZE, p->f);
	}

	fseek(p->f, 32*3, SEEK_SET);
	crypt_fwrite(&len, 4, p->f);
	crypt_fwrite(&cs, 4, p->f);

	fclose(p->f);
	free(p);
}

int usage()
{
	printf("pakfir <out_fir_file> <in_wif_file> <camera_id> [version]\n");
	exit(1);
}

int main(int argc, char **argv)
{
	char cbuf[100];
	pak_t *p;
	char *fir_fn;
	char *wif_fn;
	int camid, ver;


	if (argc < 4){
	    usage();
	}

	fir_fn = argv[1];
	wif_fn = argv[2];
	camid = strtoul(argv[3], NULL, 0);

	if (argc == 5){
	    ver = strtoul(argv[4], NULL, 0);
	} else {
	    ver = 0x01000100;
	}

	printf("Building FIR for camera %04X ver %08X\n", camid, ver);

	p = pak_create(fir_fn);

	sprintf(cbuf, "0x%08X", ver);
	pak_add_4byteid(p,"VersionID", cbuf, ver);
	pak_add_4byteid(p,"VersionCheck", "0(no)", 0);
	pak_add_4byteid(p,"CipherToLog", "1(yes)", 1);

	pak_add_file(p,"PROGRAM",  "Program", "WriterInFIR.bin", wif_fn, 0xffffffff);
//	pak_add_file(p,"UPGRADEPROGRAM",  "New", "PRIMARY.BIN", 0);
//	pak_add_file(p,"UPGRADEPROPERTY", "Faexe.bin", "Faexe.bin", 0xffbc0000);
//	pak_add_file(p,"UPGRADEPROPERTY", "ImgTbl.bin", "ImgTbl.bin", 0xffbe0000);
//	pak_add_file(p,"UPGRADEPROPERTY", "UIRes.bin", "UIRes.bin", 0xffd80000);
//	pak_add_file(p,"UPGRADEPROPERTY", "UsrSet.BIN", "UsrSet.BIN", 0xff800000);

	pak_add_4byteid(p,"ModelID", "0x01660000", 0x01660000);

	sprintf(cbuf, "0x%04X", camid);
	pak_add_4byteid(p,"ProductID", cbuf, camid);

	pak_close(p);
	return 0;
}
