#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0897dba8(int param_1,uint param_2,undefined4 param_3)

{
  char cVar1;
  char cVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined auStack_a0 [64];
  undefined auStack_60 [64];
  
  uVar5 = 0;
  cVar2 = FUN_0897a03c(param_1,*(undefined *)(param_1 + 0xee1),param_3,0);
  if ((cVar2 != '\x02') && (iVar6 = param_1 + (param_2 & 0xff) * 4, *(int *)(iVar6 + 0x12a4) != 0))
  {
    cVar1 = *(char *)(param_1 + 0xee5);
    if (cVar1 < '\x02') {
      uVar5 = uVar5 & 0xff;
      if (-1 < cVar1) {
        uVar5 = (uint)*(byte *)((int)*(char *)(param_1 + 0xee0) + *(char *)(param_1 + 0xee1) * 6 +
                                param_1 + 0x1250);
      }
    }
    else {
      uVar5 = uVar5 & 0xff;
      if (cVar1 < '\x03') {
        if (cVar2 == '\0') {
          uVar5 = (uint)*(byte *)((int)*(char *)(param_1 + 0xee0) +
                                  ((int)*(char *)(param_1 + 0xee1) / 3) * 6 + param_1 + 0x1250);
        }
        else {
          uVar5 = (uint)*(byte *)((int)*(char *)(param_1 + 0xee0) +
                                  (int)*(char *)(param_1 + 0xee1) / 3 + param_1 + 0x1284);
        }
      }
    }
    FUN_0897d9a0(param_1,cVar1,uVar5,auStack_60);
    FUN_089b4c84(auStack_a0,"%s.gmo",auStack_60);
    uVar3 = FUN_089d9674();
    FUN_089d9914(uVar3,auStack_a0);
    FUN_089e0860(*(undefined4 *)(iVar6 + 0x12a4));
    FUN_0897daa4(param_1,*(undefined *)(param_1 + 0xee5),uVar5,param_1 + 0x132c);
    FUN_089df3b0(0x3e4ccccd,*(undefined4 *)(iVar6 + 0x12a4),param_1 + 0x132c,0);
    iVar4 = *(int *)(*(int *)(iVar6 + 0x12a4) + 0x14);
    (**(code **)(iVar4 + 0x34))(0x3f000000,*(int *)(iVar6 + 0x12a4) + (int)*(short *)(iVar4 + 0x30))
    ;
    iVar4 = *(int *)(*(int *)(iVar6 + 0x12a4) + 0x14);
    (**(code **)(iVar4 + 0x3c))(*(int *)(iVar6 + 0x12a4) + (int)*(short *)(iVar4 + 0x38));
  }
  return;
}

