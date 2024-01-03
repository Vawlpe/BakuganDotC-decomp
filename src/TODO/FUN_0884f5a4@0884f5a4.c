#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_0884f5a4(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  float fVar6;
  
  bVar1 = false;
  iVar2 = FUN_0880d354();
  if (iVar2 == 0) {
    *(undefined *)(param_1 + 0x558) = 1;
    bVar1 = true;
  }
  else {
    iVar2 = FUN_0881b22c();
    if (iVar2 == 0) {
      bVar1 = true;
    }
    else {
      iVar2 = FUN_0882c220(0xc);
      if (iVar2 == 0) {
        bVar1 = true;
      }
      else if (*(char *)(param_1 + 0x558) == '\0') {
        *(undefined *)(param_1 + 0x558) = 1;
        FUN_089becd8();
        FUN_089bec88();
        FUN_0884f010(param_1,1);
        FUN_089d013c();
        *(undefined4 *)(param_1 + 0x554) = 0;
        DAT_08aba784 = 0;
        DAT_08abd598 = 1;
        DAT_08ab9f70 = 1;
        piVar3 = (int *)FUN_088660c8();
        if ((piVar3 != (int *)0x0) && (iVar2 = *piVar3, iVar2 != 0)) {
          iVar5 = *(int *)(iVar2 + 0x14);
          while( true ) {
            iVar5 = (**(code **)(iVar5 + 0x54))(iVar2 + *(short *)(iVar5 + 0x50));
            if (iVar5 != 0) {
              FUN_089df450(0,iVar2);
              FUN_088608d8(0,iVar2,0,1,1);
              FUN_088608d8(0,iVar2,0,1,1);
              FUN_088608d8(0,iVar2,0,1,1);
              FUN_0889d57c(iVar2 + 0x20,iVar2 + 0x20);
              FUN_0886069c(iVar2);
              FUN_08860438(iVar2);
              *(undefined4 *)(*(int *)(iVar2 + 0x168) + 0x10) = 0x40;
            }
            iVar2 = *(int *)(iVar2 + 4);
            if (iVar2 == 0) break;
            iVar5 = *(int *)(iVar2 + 0x14);
          }
        }
      }
      else {
        uVar4 = DONE_GetPtr_DAT_08AB0300();
        iVar2 = FUN_0881b654(uVar4);
        if (iVar2 != 0) {
          bVar1 = true;
        }
      }
    }
    iVar2 = 0;
    if (!bVar1) {
      iVar2 = *(int *)(param_1 + 0x54c) + 1;
    }
    *(int *)(param_1 + 0x54c) = iVar2;
    if (iVar2 < 0x3d) {
      FUN_08943ad4(0,0);
    }
    else {
      FUN_08943ad4(1,0);
    }
  }
  iVar2 = FUN_089bfa40(0x1e1);
  if (bVar1) {
    if (iVar2 != 0) {
      FUN_089bf300(iVar2,1);
    }
  }
  else if (iVar2 != 0) {
    FUN_089bf2f0(iVar2,1);
  }
  if (bVar1) {
    iVar2 = FUN_0881b22c();
    if (iVar2 != 0) {
      uVar4 = DONE_GetPtr_DAT_08AB0300();
      FUN_0881c028(uVar4);
    }
    FUN_0884bcc0(param_1);
    if (DAT_08aba77c == '\0') {
      uVar4 = DONE_Get_DAT_08AAC9E0();
      iVar2 = FUN_0880d0ac(uVar4,2);
      if (iVar2 != -1) {
        if (*(int *)(DAT_08ac5934 + 0x1c) != 0) {
          uVar4 = DONE_Get_DAT_08AAC9E0();
          FUN_0880d758(uVar4,2,1);
        }
        uVar4 = DONE_Get_DAT_08AAC9E0();
        FUN_0880d758(uVar4,2,1);
      }
    }
    if ((DAT_08aba778 == 0) && (*(int *)(DAT_08ac58c4 + 0x20) == 2)) {
      uVar4 = DONE_Get_DAT_08AAC9E0();
      iVar2 = FUN_0880d0ac(uVar4,2);
      if ((-1 < iVar2) && (iVar2 < 0x709)) {
        uVar4 = DONE_Get_DAT_08AAC9E0();
        iVar2 = FUN_0880d0ac(uVar4,7);
        if ((iVar2 < 1) || (2 < iVar2)) {
          iVar2 = FUN_0882c13c();
          if (iVar2 != 0) {
            uVar4 = FUN_0882c15c();
            FUN_0882cf18(uVar4);
          }
        }
        else {
          iVar2 = FUN_0882c13c();
          if (iVar2 != 0) {
            uVar4 = FUN_0882c15c();
            FUN_0882ce94(uVar4);
          }
        }
      }
    }
    if (DAT_08abd4c8 == 0) {
      FUN_0884d004(param_1,0);
      iVar2 = *(int *)(param_1 + 0x554);
    }
    else {
      FUN_0884d004(param_1,1);
      iVar2 = *(int *)(param_1 + 0x554);
    }
    *(int *)(param_1 + 0x554) = iVar2 + 1;
  }
  if (0.005 < *(float *)(param_1 + 0x4fc)) {
    fVar6 = *(float *)(param_1 + 0x4fc) * 0.9;
  }
  else {
    fVar6 = 0.0;
  }
  *(float *)(param_1 + 0x4fc) = fVar6;
  if (fVar6 < 0.1) {
    *(undefined *)(param_1 + 0x532) = 1;
  }
  DAT_08aba778 = FUN_0884da54(param_1,1);
  iVar2 = FUN_0884c63c(param_1);
  if (iVar2 == 0) {
    iVar2 = FUN_0884c4a4(param_1);
    if (iVar2 == 0) {
      iVar2 = FUN_0884c570(param_1);
      if (iVar2 != 0) {
        DAT_08aba778 = 2;
      }
    }
    else {
      DAT_08aba778 = 1;
    }
  }
  else {
    DAT_08aba778 = 4;
  }
  if (DAT_08aba778 == 0) {
    iVar2 = FUN_0884f098(param_1);
    if (iVar2 != 0) {
      FUN_0884e994(param_1);
      *(undefined4 *)(param_1 + 0x440) = 3;
      *(undefined4 *)(param_1 + 0x444) = 3;
      iVar2 = FUN_089bf93c(0x6e,1);
      if (iVar2 != 0) {
        uVar4 = FUN_089bfa40(0x6e);
        FUN_089bf2f0(uVar4,3);
      }
      iVar2 = FUN_089bf93c(0x1e0,1);
      if (iVar2 != 0) {
        uVar4 = FUN_089bfa40(0x1e0);
        FUN_089bf2f0(uVar4,3);
      }
      iVar2 = FUN_089bf93c(0x1e1,1);
      if (iVar2 != 0) {
        uVar4 = FUN_089bfa40(0x1e1);
        FUN_089bf2f0(uVar4,3);
      }
    }
  }
  else {
    DAT_08aba77d = 1;
    FUN_0884df5c(param_1);
    bVar1 = DAT_08aba778 != 3;
    iVar2 = FUN_0880d354();
    if ((iVar2 != 0) && (iVar2 = DONE_NotZero_DAT_08AAC9E0(), iVar2 != 0)) {
      uVar4 = DONE_Get_DAT_08AAC9E0();
      iVar2 = FUN_0880d7e0(uVar4,0x4880);
      if (iVar2 != 0) {
        bVar1 = false;
      }
    }
    if (bVar1) {
      iVar2 = FUN_0884c9c8(param_1,DAT_08aba778);
      *(int *)(param_1 + 0x540) = iVar2;
      if ((iVar2 == -1) && (iVar2 = FUN_089bf93c(0x14a,1), iVar2 != 0)) {
        iVar2 = *(int *)(param_1 + 0x4d4);
        if (iVar2 != 0) {
          FUN_08823d74();
          iVar2 = *(int *)(param_1 + 0x4d4);
        }
        FUN_08823e98(iVar2);
      }
    }
    *(undefined4 *)(param_1 + 0x448) = 0xffffffff;
    *(undefined4 *)(param_1 + 0x440) = 2;
    *(undefined4 *)(param_1 + 0x444) = 2;
  }
  return;
}

