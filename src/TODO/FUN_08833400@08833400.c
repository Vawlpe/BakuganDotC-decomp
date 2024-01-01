#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08833400(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint local_40 [3];
  
  puVar6 = local_40;
  iVar4 = 0;
  iVar5 = 0;
  do {
    if (*(int *)(DAT_08ac58c4 + 0x20) == 2) {
      iVar1 = FUN_0883326c(param_1,iVar4);
    }
    else {
      iVar1 = FUN_088304d8(param_1,iVar4);
    }
    if (iVar1 == 0) {
      iVar1 = *(int *)(param_1 + 0x14);
LAB_08833508:
      *puVar6 = 0xffffffff;
      iVar1 = *(int *)(iVar1 + iVar5 + 0x2f0);
      *(uint *)(iVar1 + 0xd0) = *(uint *)(iVar1 + 0xd0) & 0xfffffffe;
    }
    else {
      iVar2 = FUN_0883339c(param_1,iVar1);
      if (iVar2 != 0) {
        iVar1 = *(int *)(param_1 + 0x14);
        goto LAB_08833508;
      }
      iVar2 = *(int *)(param_1 + 0x14);
      uVar3 = *(int *)(iVar1 + 8) - 1;
      *puVar6 = uVar3;
      if ((int)uVar3 < 0) {
        uVar3 = -(-uVar3 & 0x1f);
      }
      else {
        uVar3 = uVar3 & 0x1f;
      }
      FUN_089f4a90(0,(float)uVar3,*(undefined4 *)(iVar2 + iVar5 + 0x2f0));
      *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x14) + iVar5 + 0x2f0) + 0xbc) =
           *(undefined4 *)(iVar1 + 0x6c);
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 4;
    puVar6 = puVar6 + 1;
    if (2 < iVar4) {
      return;
    }
  } while( true );
}

