CC := clang
CFLAGS := -g -Wall -Werror

all: ngram

clean:
	rm -rf ngram ngram.dSYM

ngram: ngram.c
	$(CC) $(CFLAGS) -o ngram ngram.c