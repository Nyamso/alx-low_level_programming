#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>


shash_table_t *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_t *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_t *ht, const char *key);
void shash_table_print(const shash_table_t *ht);
void shash_table_print_rev(const shash_table_t *ht);
void shash_table_delete(shash_table_t *ht);

int replace_value_s(shash_node_t **ht, const char *key, const char *value);
int check_key_s(shash_node_t *ht, const char *key);
shash_node_t *add_node_s(shash_node_t **head,
		const char *key, const char *value);
void insert_sort(shash_node_t *node, shash_table_t *ht);
void free_list_s(shash_node_t *head);

#endif
