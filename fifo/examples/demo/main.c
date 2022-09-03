#include "string.h"
#include "stdio.h"
#include "fifo.h"

static unsigned char table[1024] = {0};
struct fifo_descriptor fifo_instance;

const unsigned char fill_data[] = {1, 2, 3, 4, 5, 6, 7, 8, 9,10};

int main(int argc, char* argv[]) {
  fifo_t fifo = &fifo_instance;
  fifo_create_static(fifo, table, 1024, sizeof(unsigned char));
  fifo_adds(fifo, (void*)fill_data, sizeof(fill_data));
  char peek_data;
  fifo_peek_offset(fifo, &peek_data, 0);
  printf("peek frist data = %d\n", peek_data);
  fifo_peek_offset(fifo, &peek_data, sizeof(fill_data)-1);
  printf("peek last data = %d\n", peek_data);

  unsigned char out_data[10] = {0};
  memset(out_data, 0, sizeof(out_data));
  fifo_gets(fifo, out_data, sizeof(out_data));
  for (int i = 0; i < sizeof(out_data);i++){
    printf("fifo data[%d] = %d\n", i, out_data[i]);
  }
}