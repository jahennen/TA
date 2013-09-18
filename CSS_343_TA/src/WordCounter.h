/*
 * WordCounter.h
 *
 *  Created on: Sep 17, 2013
 *      Author: jay
 */

#ifndef WORDCOUNTER_H_
#define WORDCOUNTER_H_

#include <string>
#include <ostream>
#include <cstdio>
#include <cstdlib>
#include <stdint.h>


class WordCounter {
public:
	WordCounter();

	// Add word to the table, or increment its count if already
	// present.
	//
	// Returns 0 on success; -1 if word cannot be added.
	int add_word(const std::string& word);

	// Print the words in sorted order preceeded by count (should be
	// compatible with output from the "uniq -c" shell command.
	void print_words(std::ostream& out = std::cout);

	// Print out the entire structure in a format suitable for debugging.
	void dump(std::ostream& out = std::cerr);

private:
	// Block number of root of private BTree implementation.
	uint32_t root_block_;
};

#endif /* WORDCOUNTER_H_ */
