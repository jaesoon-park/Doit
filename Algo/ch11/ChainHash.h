#define _PJS
#ifdef _PJS
#include "Member.h"

typedef struct __node {
	Member data;
	struct __node *next;
}Node;

typedef struct {
	int size;
	Node **table;
}ChainHash;

int Initialize(ChainHash *h, int size);

Node *Search(const ChainHash *h, const Member *x);

int Add(ChainHash *h, const Member *x);

int Remove(ChainHash *h, const Member *x);

void Demp(const ChainHash *h);

void Clear(ChainHash *h);

#endif