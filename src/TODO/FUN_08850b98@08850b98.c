#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_08850b98(int param_1,int *param_2,int param_3)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 local_50;
  float local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  float fStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  iVar4 = *param_2;
  bVar1 = false;
  if (param_3 < 1) {
    *param_2 = *param_2 + 1;
    return 0;
  }
  if (iVar4 < 4) {
    FUN_0884d0b0(param_1,&local_50,iVar4,0);
    local_4c = local_4c + 1000.0;
    FUN_0889d57c(&local_50,&local_50);
    iVar2 = FUN_0880d354();
    if (iVar2 == 0) {
      if (iVar4 == 0) {
        bVar1 = true;
      }
    }
    else {
      uVar3 = _DONE_Get_DAT_08AAC9E0();
      iVar2 = FUN_0880d0ac(uVar3,0x12);
      if ((iVar4 < iVar2) && (iVar2 = FUN_08850b90(param_1,0), iVar4 == iVar2)) {
        bVar1 = true;
      }
    }
    iVar2 = FUN_0886f934(param_3);
    if (iVar2 != 0) {
      FUN_0886003c(local_44,iVar2);
      *(undefined4 *)(iVar2 + 0x20) = local_50;
      *(float *)(iVar2 + 0x24) = local_4c;
      *(undefined4 *)(iVar2 + 0x28) = uStack_48;
      *(undefined4 *)(iVar2 + 0x2c) = local_44;
      local_4c = local_4c + 150.0;
      local_40 = local_50;
      uStack_38 = uStack_48;
      uStack_34 = local_44;
      *(undefined4 *)(iVar2 + 0x560) = local_50;
      *(float *)(iVar2 + 0x564) = local_4c;
      *(undefined4 *)(iVar2 + 0x568) = uStack_48;
      *(undefined4 *)(iVar2 + 0x56c) = local_44;
      *(int *)(iVar2 + 0x150) = iVar4;
      fStack_3c = local_4c;
      uVar3 = FUN_088663e4(iVar2);
      FUN_08863128(iVar2,uVar3);
      FUN_08886c94(iVar2 + 0x434);
      if (*(int *)(DAT_08ac58c4 + 0x20) != 1) {
        FUN_088625e8(iVar2,iVar4 + 1);
      }
      FUN_08862ba4(iVar2);
      if (bVar1) {
        iVar5 = param_1 + 0x20;
        *(undefined *)(iVar2 + 0x158) = 1;
        FUN_08847470(iVar5,iVar2);
        if (*(int *)(iVar2 + 8) == 10) {
          *(undefined4 *)(param_1 + 0x364) = 0x3eb2b8c2;
          *(undefined4 *)(param_1 + 0x368) = 0x3eb2b8c2;
        }
        FUN_088474a0(iVar5,1);
        DAT_08ac5c90 = iVar5;
        FUN_088625e8(iVar2,iVar4 + 1);
      }
      *param_2 = *param_2 + 1;
    }
    return iVar2;
  }
  return 0;
}

