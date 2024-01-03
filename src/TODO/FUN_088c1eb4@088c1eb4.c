#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c1eb4(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  uint uVar3;
  
  uVar3 = *(uint *)(DAT_08ac58c4 + 4);
  DAT_08b00dd7 = 2;
  *(undefined *)(param_1 + 0x79a) = 0xe;
  *(undefined4 *)(param_1 + 0x620) = 2;
  FUN_089b1bd8();
  FUN_089b1c54(2,uVar3 & 0xff);
  uVar1 = DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0x33,uVar3);
  uVar1 = DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0x2e,0);
  uVar1 = DONE_Get_DAT_08AAC9E0();
  FUN_0880cd9c(uVar1,0x31,uVar3);
  if (*(int *)(DAT_08ac58c4 + 4) == 0x14) {
    piVar2 = (int *)DONE_Get_DAT_08AAC9E0();
    if (*(char *)(*piVar2 + 0x456) == '\0') {
      *(undefined4 *)(DAT_08ac58c4 + 4) = 0x25;
      uVar1 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar1,0x33,0x25);
      DAT_08b00dc2 = DAT_08b00bd8._2_2_;
      DAT_08b00dc8 = 0xfffff365;
      DAT_08b00dcc = 0;
      DAT_08b00dd0 = 0xfffbd5fa;
      DAT_08b00dd4 = 0x704f;
    }
    else {
      *(undefined4 *)(DAT_08ac58c4 + 4) = 0x18;
      uVar1 = DONE_Get_DAT_08AAC9E0();
      FUN_0880cd9c(uVar1,0x33,0x18);
      *(undefined4 *)(DAT_08ac58c4 + 0x3c) = 0x11;
    }
  }
  return;
}

