#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08830e44(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  char local_50 [16];
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  puVar4 = &local_60;
  iVar1 = FUN_0882c548();
  local_58 = 0;
  local_5c = 0;
  local_60 = 0;
  local_54 = 0;
  local_50[0] = '\0';
  local_50[1] = 0;
  local_50[2] = 0;
  local_50[3] = 0;
  if (iVar1 != 0) {
    iVar7 = 0;
    do {
      iVar2 = FUN_088304d8(param_1,iVar7);
      if (((iVar2 != 0) && (*(int *)(iVar1 + 0xc) != *(int *)(iVar2 + 0xc))) &&
         (*(char *)(iVar2 + 0x4c1) == '\0')) {
        iVar3 = FUN_08860344(iVar2);
        uVar5 = 2;
        if (iVar1 == iVar3) {
          puVar6 = (undefined4 *)(iVar2 + 0x20);
          local_60 = *puVar6;
          local_5c = *(undefined4 *)(iVar2 + 0x24);
          local_58 = *(undefined4 *)(iVar2 + 0x28);
          local_54 = *(undefined4 *)(iVar2 + 0x2c);
          iVar2 = FUN_08830614(param_1,iVar2,2);
          if (iVar2 != 0) {
            uVar5 = 1;
            local_60 = *puVar6;
            local_5c = puVar6[1];
            local_58 = puVar6[2];
            local_54 = puVar6[3];
          }
          local_40 = local_60;
          uStack_3c = local_5c;
          uStack_38 = local_58;
          uStack_34 = local_54;
          iVar2 = FUN_08830924(param_1,uVar5,&local_40);
          if (iVar2 != -1) {
            local_50[iVar2] = '\x01';
          }
        }
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 3);
    iVar1 = 0;
    do {
      if (*(char *)((int)puVar4 + 0x10) == '\0') {
        FUN_088307f0(param_1,iVar1,0);
      }
      iVar7 = iVar1 + 1;
      puVar4 = (undefined4 *)((int)&local_60 + iVar1 + 1);
      iVar1 = iVar7;
    } while (iVar7 < 4);
    iVar1 = 0;
    do {
      FUN_08830a78(param_1,iVar1);
      iVar1 = iVar1 + 1;
    } while (iVar1 < 4);
  }
  return;
}

