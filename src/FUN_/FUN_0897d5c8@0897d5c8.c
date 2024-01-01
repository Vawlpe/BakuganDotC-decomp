#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897d5c8(undefined4 *param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 local_190;
  undefined4 local_18c;
  undefined4 auStack_188 [66];
  undefined4 auStack_80 [26];
  
  memcpy_jak(auStack_188,&DAT_08ac3828,0x108);
  memcpy_jak(auStack_80,&DAT_08ac3930,0x68);
  if ((*(char *)(param_2 + 0xee5) < '\0') || ('\x01' < *(char *)(param_2 + 0xee5))) {
    bVar2 = FUN_0897a03c(param_2,*(char *)(param_2 + 0xee1));
    if (bVar2 == 0xff) {
      cVar1 = *(char *)(param_2 + 0xee1);
    }
    else {
      if (bVar2 != 0) {
        if (bVar2 < 2) {
          if (bVar2 != 0) {
            uVar3 = (uint)*(byte *)(param_2 + (int)*(char *)(param_2 + 0xee1) / 3 + 0x1284);
            local_190 = auStack_188[uVar3 * 2];
            local_18c = auStack_188[uVar3 * 2 + 1];
          }
        }
        else if (bVar2 < 3) {
          uVar3 = (uint)*(byte *)(param_2 + (int)*(char *)(param_2 + 0xee1) / 3 + 0x1280);
          local_190 = auStack_188[uVar3 * 2];
          local_18c = auStack_188[uVar3 * 2 + 1];
        }
        goto LAB_0897d774;
      }
      cVar1 = *(char *)(param_2 + 0xee1);
    }
    uVar3 = (uint)*(byte *)((int)*(char *)(param_2 + 0xee0) + ((int)cVar1 / 3) * 6 + param_2 +
                           0x1250);
    local_190 = auStack_80[uVar3 * 2];
    local_18c = auStack_80[uVar3 * 2 + 1];
  }
  else {
    uVar3 = (uint)*(byte *)((int)*(char *)(param_2 + 0xee0) + *(char *)(param_2 + 0xee1) * 6 +
                            param_2 + 0x1250);
    local_190 = auStack_188[uVar3 * 2];
    local_18c = auStack_188[uVar3 * 2 + 1];
  }
LAB_0897d774:
  *param_1 = local_190;
  param_1[1] = local_18c;
  return;
}

