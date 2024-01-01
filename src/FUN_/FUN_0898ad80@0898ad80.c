#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0898ad80(int param_1)

{
  char cVar1;
  int *piVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  memset_jak(param_1 + 0x11c0,0,0x18);
  memset_jak(param_1 + 0x11d8,0,0x18);
  cVar1 = *(char *)(param_1 + 0xe7d);
  if (cVar1 < '\x01') {
    if (-1 < cVar1) {
      uVar4 = 0;
      uVar5 = 0;
      do {
        uVar5 = FUN_0898acb4(param_1,1,uVar5);
        uVar6 = uVar5 & 0xff;
        piVar2 = (int *)FUN_0880cc48();
        if ((int)uVar6 < 0) {
          uVar3 = -(-uVar6 & 7) & 0x1f;
        }
        else {
          uVar3 = uVar5 & 7;
        }
        if (((uint)*(byte *)(*piVar2 + ((int)uVar6 >> 3) + 0x540) & 1 << uVar3) != 0) {
          *(char *)(param_1 + uVar4 + 0x11c0) = (char)uVar5;
          piVar2 = (int *)FUN_0880cc48();
          if ((int)uVar6 < 0) {
            uVar5 = -(-uVar6 & 7) & 0x1f;
          }
          else {
            uVar5 = uVar5 & 7;
          }
          if (((uint)*(byte *)(*piVar2 + ((int)uVar6 >> 3) + 0x543) & 1 << uVar5) == 0) {
            *(undefined *)(param_1 + uVar4 + 0x11d8) = 1;
          }
        }
        uVar4 = uVar4 + 1;
        uVar5 = uVar4 & 0xff;
      } while ((int)uVar4 < 0x12);
    }
  }
  else {
    uVar5 = 0;
    if (cVar1 < '\x02') {
      uVar4 = 0;
      do {
        uVar4 = FUN_0898ad1c(param_1,1,uVar4);
        uVar6 = uVar4 & 0xff;
        piVar2 = (int *)FUN_0880cc48();
        if ((int)uVar6 < 0) {
          uVar3 = -(-uVar6 & 7) & 0x1f;
        }
        else {
          uVar3 = uVar4 & 7;
        }
        if (((uint)*(byte *)(*piVar2 + ((int)uVar6 >> 3) + 0x540) & 1 << uVar3) != 0) {
          *(char *)(param_1 + uVar5 + 0x11c0) = (char)uVar4;
          piVar2 = (int *)FUN_0880cc48();
          if ((int)uVar6 < 0) {
            uVar4 = -(-uVar6 & 7) & 0x1f;
          }
          else {
            uVar4 = uVar4 & 7;
          }
          if (((uint)*(byte *)(*piVar2 + ((int)uVar6 >> 3) + 0x543) & 1 << uVar4) == 0) {
            *(undefined *)(param_1 + uVar5 + 0x11d8) = 1;
          }
        }
        uVar5 = uVar5 + 1;
        uVar4 = uVar5 & 0xff;
      } while ((int)uVar5 < 2);
    }
  }
  return;
}

