#include "common.h"

#define BLOCK 0
#define INODE 1

struct ext2_super_block *get_super_block();
struct ext2_group_desc *get_group_desc();
struct ext2_inode *get_inode_table();
unsigned char *get_block_bitmap();
unsigned char *get_inode_map();

void init_disk(char *img_name);
int is_valid(unsigned char *inode_bitmap, int bit_idx);

int get_rec_len(char *dir_ent_name);
void init_dir_entry(int dir_block_num, int type, int inode_idx, char name[], int size);


int allocate_next_free(int type);
void init_inode(int type, int inode_idx, int block_num);
