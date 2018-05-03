#define EOT 257
#define SLASH 258
#define BLCL 259
#define ELCL 260
#define ADD 261
#define GET 262
#define DELETE 263
#define DELETEALL 264
#define FLUSH 265
#define DUMP 266
#define EXIT 267
#define PR_ESP 268
#define PR_AH 269
#define PR_IPCOMP 270
#define PR_ESPUDP 271
#define PR_TCP 272
#define F_PROTOCOL 273
#define F_AUTH 274
#define F_ENC 275
#define F_REPLAY 276
#define F_COMP 277
#define F_RAWCPI 278
#define F_MODE 279
#define MODE 280
#define F_REQID 281
#define F_EXT 282
#define EXTENSION 283
#define NOCYCLICSEQ 284
#define ALG_AUTH 285
#define ALG_AUTH_NOKEY 286
#define ALG_ENC 287
#define ALG_ENC_NOKEY 288
#define ALG_ENC_DESDERIV 289
#define ALG_ENC_DES32IV 290
#define ALG_ENC_OLD 291
#define ALG_COMP 292
#define F_LIFETIME_HARD 293
#define F_LIFETIME_SOFT 294
#define F_LIFEBYTE_HARD 295
#define F_LIFEBYTE_SOFT 296
#define DECSTRING 297
#define QUOTEDSTRING 298
#define HEXSTRING 299
#define STRING 300
#define ANY 301
#define SPDADD 302
#define SPDUPDATE 303
#define SPDDELETE 304
#define SPDDUMP 305
#define SPDFLUSH 306
#define F_POLICY 307
#define PL_REQUESTS 308
#define F_AIFLAGS 309
#define TAGGED 310
#define SECURITY_CTX 311
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	int num;
	unsigned long ulnum;
	vchar_t val;
	struct addrinfo *res;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
extern YYSTYPE setkeyyylval;
