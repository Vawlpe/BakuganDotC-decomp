#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_089d0ed0(char *param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  char cVar4;
  uint uVar5;
  uint uVar6;
  undefined8 uVar7;
  undefined auStack_b0 [144];
  uint local_20;
  int local_1c;
  
  FUN_089bb728(*(undefined4 *)(param_1 + 8));
  if (*param_1 == '\0') {
    if (param_1[1] == '\0') {
      cVar4 = param_1[1];
    }
    else {
      bVar1 = false;
      if (param_1[3] == '\0') {
        iVar3 = zz_sceNetAdhocctlGetPeerInfo(param_1 + 0x38,0x98,auStack_b0);
        if (iVar3 == 0) {
          uVar7 = zz_sceKernelGetSystemTimeWide();
          uVar5 = (uint)((uint)uVar7 < local_20);
          uVar6 = (int)((ulonglong)uVar7 >> 0x20) - local_1c;
          if (uVar6 == uVar5 && 10000000 < (uint)uVar7 - local_20 || uVar6 != uVar5) {
            bVar1 = true;
          }
        }
        else if (iVar3 == -0x7fbef8ea) {
          param_1[1] = '\0';
        }
        iVar3 = FUN_089beb54(param_1 + 0x100,0);
        if (10000000 < iVar3) {
          bVar1 = true;
        }
      }
      else {
        iVar3 = FUN_089beb54(param_1 + 0x100,0);
        bVar1 = 10000000 < iVar3;
        iVar3 = iVar3 / 1000000;
        if (*(int *)(param_1 + 0x118) < iVar3) {
          *(int *)(param_1 + 0x118) = iVar3;
        }
        else if (iVar3 + 1 < *(int *)(param_1 + 0x118)) {
          *(int *)(param_1 + 0x118) = iVar3;
        }
      }
      if (bVar1) {
        param_1[1] = '\0';
        iVar3 = FUN_089d2a34();
        if (iVar3 == 0) {
          cVar4 = param_1[1];
        }
        else {
          uVar2 = FUN_089d2a50();
          iVar3 = FUN_089d2bb4(uVar2,param_1 + 0x38);
          if (iVar3 != 0) {
            uVar2 = FUN_089d2a50();
            FUN_089d2b80(uVar2);
          }
          uVar2 = FUN_089d2a50();
          iVar3 = FUN_089d2c48(uVar2,param_1 + 0x38);
          if (iVar3 == 0) {
            cVar4 = param_1[1];
          }
          else {
            uVar2 = FUN_089d2a50();
            FUN_089d2cdc(uVar2);
            cVar4 = param_1[1];
          }
        }
      }
      else {
        cVar4 = param_1[1];
      }
    }
  }
  else {
    cVar4 = param_1[1];
  }
  if (cVar4 != '\0') {
    iVar3 = FUN_089d3adc();
    if ((*(int *)(iVar3 + 0x50) < 2) && (0 < *(int *)(iVar3 + 0x50))) {
      FUN_089d1954(param_1);
    }
  }
  FUN_089bb790(*(undefined4 *)(param_1 + 8));
  return;
}

