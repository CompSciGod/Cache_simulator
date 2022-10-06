#include "bits.h"
#include "cache.h"

int get_set(Cache *cache, address_type address) {
  // TODO:
  //  Extract the set bits from a 32-bit address.
  //
  int set_b = cache->set_bits;
  int block_b = cache->block_bits;
  address_type ret = address << (32 - (set_b + block_b));
  ret = ret >> (32 - set_b);

  return ret;
}

int get_line(Cache *cache, address_type address) {
  // TODO:
  // Extract the tag bits from a 32-bit address.
  //
  int set_b = cache->set_bits;
  int block_b = cache->block_bits;
  address_type ret = address >> (set_b + block_b);

  return ret;
}

int get_byte(Cache *cache, address_type address) {
  // TODO
  // Extract the block offset (byte index) bits from a 32-bit address.
  //
  int set_b = cache->set_bits;
  int block_b = cache->block_bits;
  address_type ret = address << (32 - block_b);
  ret = ret >> (32 - block_b);  

  return ret;
}
