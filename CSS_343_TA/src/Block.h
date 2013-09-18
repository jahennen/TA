/*
 * Block.h
 *
 *  Created on: Sep 17, 2013
 *      Author: jay
 */

#ifndef BLOCK_H_
#define BLOCK_H_

#define BLOCK_SIZE 128

#include <stdint.h>
#include <vector>

class Block {
public:
	Block();
	int add_word(std::string word, uint32_t* root);
	void print_words();
	// additional non-virtual and static methods.
private:
	// Additional non-virtual and static methods.
	char data[BLOCK_SIZE];
	int* block_id;
	short* item_count;
	short* string_table;
	int* left_child;
	int* right_child;
	static std::vector<Block*> bList;
};

#endif /* BLOCK_H_ */
