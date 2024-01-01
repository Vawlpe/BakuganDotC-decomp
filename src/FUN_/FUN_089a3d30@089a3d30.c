#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089a3d30(void)

{
  if (DAT_08b01098 != 0) {
    (**(code **)(*(int *)(DAT_08b01098 + 0x74) + 0xc))
              (DAT_08b01098 + *(short *)(*(int *)(DAT_08b01098 + 0x74) + 8),3);
    DAT_08b01098 = 0;
  }
  return;
}

