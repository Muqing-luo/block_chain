#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
#include "sha256.h"
#include "mining.h"

extern void struct2str(BLOCK *p,BYTE *s);
extern void long2str(long long n,BYTE *s); 
extern void Block_init(BLOCK *p);
extern int Mining(SHA256_CTX *ctx,BLOCK *p,BYTE *hash,int n0);
extern int verify(SHA256_CTX *ctx,BYTE *str,BYTE *hash,int n);
extern void sha256_transform(SHA256_CTX *ctx, const BYTE data[]);
extern void sha256_final(SHA256_CTX *ctx, BYTE hash[]);

int main(void) {
	int i;
	unsigned char Hash[32]={0}; //256 bits hash 
	SHA256_CTX ctx;
	BLOCK block;
	Block_init(&block);//创建创世区块 
	sha256_init(&ctx);
	Mining(&ctx,&block,Hash,N0); 
	for(i=0;i<32;i++)
		printf("%x ",Hash[i]);	
	return 0;
	system("pause");
}
