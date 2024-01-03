#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088c2bdc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089bf93c(0x19a,1);
  if (iVar1 == 0) {
    switch(*(undefined4 *)(DAT_08ac58c4 + 0xc)) {
    case 4:
      *(undefined4 *)(param_1 + 0x620) = 7;
      *(undefined4 *)(param_1 + 0x618) = 3;
      *(undefined4 *)(param_1 + 0x61c) = 0;
      break;
    default:
      FUN_088bedac(param_1,0);
      *(undefined4 *)(param_1 + 0x618) = 1;
      break;
    case 6:
      *(undefined4 *)(DAT_08ac58c4 + 4) = 0x20;
      *(undefined4 *)(param_1 + 0x618) = 3;
      *(undefined4 *)(param_1 + 0x61c) = 0;
      break;
    case 0xe:
      FUN_089bf6e8(0x12d,100);
      *(undefined4 *)(param_1 + 0x618) = 5;
      break;
    case 0xf:
      if (*(int *)(param_1 + 0x6c8) != 0) {
        FUN_089bf2f0(*(int *)(param_1 + 0x6c8),1);
      }
      FUN_088c29b8();
      uVar2 = DONE_Get_DAT_08AAC9E0();
      FUN_0880d0e8(uVar2,0x40000000);
      FUN_089bf6e8(0x2724,100);
      *(undefined4 *)(param_1 + 0x618) = 7;
      *(undefined4 *)(param_1 + 0x61c) = 0;
    }
  }
  return;
}

