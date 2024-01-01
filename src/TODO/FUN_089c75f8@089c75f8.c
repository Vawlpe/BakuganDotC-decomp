#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_089c75f8(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined **ppuVar6;
  int iVar7;
  
  uVar5 = 0;
  FUN_089bb728(*(undefined4 *)(param_1 + 0x8bd4));
  if ((((-1 < param_2) && (param_2 < 0x20)) &&
      (iVar3 = param_1 + param_2 * 0x430, *(short *)(iVar3 + 0x9f0) == 0)) &&
     (*(int *)(iVar3 + 0x9e0) == -1)) {
    *(undefined4 *)(iVar3 + 0x9fc) = 0xffffffff;
    uVar4 = 0;
    iVar7 = iVar3 + 0x8d4;
    ppuVar6 = &PTR_s_seGRP_SYS_COM_pac_08ac56e8;
    do {
      iVar1 = strcmp(param_3,*ppuVar6);
      if (iVar1 == 0) {
        *(uint *)(iVar3 + 0x9fc) = uVar4;
        goto LAB_089c76bc;
      }
      uVar4 = uVar4 + 1;
      ppuVar6 = ppuVar6 + 1;
    } while (uVar4 < 0x53);
    uVar4 = *(uint *)(iVar3 + 0x9fc);
LAB_089c76bc:
    FUN_089c59fc(iVar7,uVar4);
    *(int *)(iVar3 + 0x5d0) = iVar7;
    iVar1 = strstr(param_3,&DAT_08aa1a88);
    if (iVar1 == 0) {
      *(undefined2 *)(iVar3 + 0x9f0) = 0xb;
      *(undefined *)(iVar3 + 0x9f8) = 0;
      iVar1 = strstr(param_3,&DAT_08aa1a90);
      if (iVar1 != 0) {
        iVar1 = *(int *)(iVar3 + 0x5d0);
        if (*(int *)(iVar3 + 0x5d0) != param_3) {
          strcat(iVar7,param_3);
          *(int *)(iVar3 + 0x5d0) = iVar7;
          iVar1 = iVar7;
        }
        puVar2 = (undefined *)strstr(iVar1,&DAT_08aa1a90);
        if (puVar2 != (undefined *)0x0) {
          *puVar2 = 0;
        }
      }
    }
    else {
      *(undefined2 *)(iVar3 + 0x9f0) = 1;
      *(undefined *)(iVar3 + 0x9f8) = 1;
    }
    iVar7 = 0;
    iVar1 = iVar3 + 0x5d0;
    do {
      if (*(int *)(iVar3 + 0x9d4) != 0) {
        uVar5 = FUN_089fce94();
        FUN_089fd4a0(uVar5,iVar1,*(undefined4 *)(iVar3 + 0x9d4));
        *(undefined4 *)(iVar3 + 0x9d4) = 0;
      }
      iVar7 = iVar7 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar7 < 3);
    uVar5 = 1;
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 0x8bd4));
  return uVar5;
}

