#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/** Hash table implementation
 * struct hash_node_s - Node of a hash table
 * @key: The key, string
 * @value: The value corresponding to a key
 * next: A pointer to the next node of the list
 */
typedef struct hash_node_s
{
    char *key;
    char *value;
    struct hash_node_s *next;
} hash_node_z;

/**
 * struct hash_table_s - Hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Cell of this array is a pointer to the first node of a linked list
 */

typdef struct hash_node_s
{
    unsigned long int size;
    hash_node_z **array;
} hash_table_z;

hash_table_z *hash_table_create(unsigned long int size);
unsigned long int hash_djb2(const unsigned char *str);
unsigned long int key_index(const unsigned char *key, unsigned long int size);
int hash_table_set(hash_table_z *ht, const char *key, const char *value);
char *hash_table_get(const hash_table_z *ht, const char *key);
void hash_table_print(const hash_table_z *ht);
void hash_table_delete(hash_table_z *ht);

/**
 * struct shash_node_s - Node of a sorted hash table
 * @key: The key, string
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the list
 * @tprev: A pointer to the previous node of the list
 * @tnext: A pointer to the next node of the hash table
 */

typedef struct shash_node_s
{
    char *key;
    char *value;
    struct shash_node_s *next;
    struct shash_node_s *tprev;
    struct shash_node_s *tnext;
} shash_node_z;

/**
 * struct shash_table_s - Sorted hash table data structure
 * @size: The size of the array
 * @array: An array of size @size
 * Cell of this array is a pointer to the first node of a linked list
 * @shead: A pointer to the first node of the sorted linked list
 * @stail: A pointer to the last node of the sorted linked list
 */

typedef struct shash_table_s
{
    unsigned long int size;
    shash_node_z **array;
    shash_node_z *shead;
    shash_node_z *stail;
} shash_table_z;

shash_table_z *shash_table_create(unsigned long int size);
int shash_table_set(shash_table_z *ht, const char *key, const char *value);
char *shash_table_get(const shash_table_z *ht, const char *key);
void shash_table_print(const shash_table_z *ht);
void shash_table_print_rev(const shash_table_z *ht);
void shash_table_delete(shash_table_z *ht);

#endif /* HASH_TABLES_H */
