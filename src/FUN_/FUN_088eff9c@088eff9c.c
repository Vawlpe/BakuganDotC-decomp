#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eff9c(int param_1,short param_2,byte param_3,byte param_4)

{
  ushort uVar1;
  int iVar2;
  ushort *puVar3;
  
  puVar3 = (ushort *)(*(int *)(param_1 + 0x18) + param_2 * 4);
  uVar1 = *puVar3;
  iVar2 = *(int *)(param_1 + 0x1c);
  memcpy_jak(&DAT_08b00dc0,&DAT_08a99278,8);
  *(byte *)(param_1 + 0x2d2) = param_3;
  *(byte *)(param_1 + 0x2d3) = param_4;
  FUN_088eb06c(*(undefined4 *)(param_1 + 0x3c),4);
  FUN_088efde8(param_1);
  *(undefined4 *)(*(int *)(DAT_08abf710 + (uint)param_3 * 4) + 0x328) =
       *(undefined4 *)(DAT_08abf710 + (uint)param_4 * 4);
  memcpy_jak(param_1 + 0x274,&DAT_08a99280,0x10);
  FUN_088ef600(param_1,iVar2 + (uint)uVar1 * 4,puVar3[1]);
  return;
}

