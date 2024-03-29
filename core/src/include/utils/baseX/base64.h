/**********************************************************************
 *
 * File name    : base64.h
 * Function     : base64 encoding and decoding of data or file.
 * Created time : 2020-08-04
 *
 *********************************************************************/

#ifndef BASE64_H
#define BASE64_H


int base64_encode(const char *indata, int inlen, char *outdata, int *outlen);
int base64_decode(const char *indata, int inlen, char *outdata, int *outlen);

int base64url_encode(const char *indata, int inlen, char *outdata, int *outlen);
int base64url_decode(const char *indata, int inlen, char *outdata, int *outlen);

char * base64url_malloc(unsigned int *len);

char *base64_encode_automatic( unsigned char *buf, size_t buf_len );

#endif // BASE64_H
