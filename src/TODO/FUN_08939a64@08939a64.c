#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08939a64(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined auStack_50 [64];
  
  switch(*(undefined *)(param_1 + 0x5ee)) {
  case 0:
  case 1:
    FUN_089b4c84(auStack_50,"ga_card_L_%03d",*(int *)(param_1 + 0x7ec) + 1);
    break;
  case 2:
    FUN_089b4c84(auStack_50,"repair_card_%03d",*(undefined4 *)(param_1 + 0x7ec));
    break;
  case 3:
    FUN_089b4c84(auStack_50,"tuukou_card%02d",1);
    break;
  case 4:
  case 8:
  case 9:
    FUN_089b4c84(auStack_50,&DAT_08a9c884);
    break;
  case 5:
  case 6:
    return;
  case 7:
    FUN_089b4c84(auStack_50,"tuukou_card%02d",1);
    break;
  default:
    FUN_089b4c84(auStack_50,&DAT_08a9c884);
  }
  uVar1 = FUN_089f7720(auStack_50);
  *(undefined4 *)(param_2 + 0xd4) = uVar1;
  return;
}

