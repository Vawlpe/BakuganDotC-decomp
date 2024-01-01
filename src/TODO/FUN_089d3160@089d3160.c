#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

int FUN_089d3160(int param_1)

{
  int iVar1;
  undefined *puVar2;
  undefined4 uVar3;
  ushort uVar4;
  int iVar5;
  undefined auStack_20 [8];
  
  iVar5 = 1;
  iVar1 = zz_sceWlanGetEtherAddr(auStack_20);
  if (iVar1 == 0) {
    if (*(int *)(param_1 + 4) == -1) {
      iVar1 = zz_sceNetAdhocPdpCreate(auStack_20,100,0x2000,0);
      if (iVar1 < 1) {
        iVar5 = 0;
      }
      else {
        *(int *)(param_1 + 4) = iVar1;
      }
    }
    if (*(int *)(param_1 + 8) == -1) {
      iVar1 = zz_sceNetAdhocPdpCreate(auStack_20,200,0x2000,0);
      if (iVar1 < 1) {
        iVar5 = 0;
      }
      else {
        *(int *)(param_1 + 8) = iVar1;
      }
    }
  }
  if (iVar5 != 0) {
    zz_sceRtcGetCurrentClockLocalTime(DAT_08ac5978 + 0x14);
    *(undefined4 *)(DAT_08ac5978 + 0x24) = 0;
    *(undefined *)(param_1 + 0x11) = 1;
    puVar2 = (undefined *)
             FUN_089cfa8c(auStack_20,"c:/bullets/bkn2pspsys/src/pspsys/sys/Net/CONetPDP.cpp",0x99);
    if (puVar2 == (undefined *)0x0) {
      *(undefined *)(param_1 + 0x10) = 0;
      goto LAB_089d32bc;
    }
    FUN_089bb728(*(undefined4 *)(puVar2 + 8));
    *puVar2 = 1;
    iVar1 = _DONE_NotZero_DAT_08AAC9E0();
    if (iVar1 != 0) {
      uVar3 = _DONE_Get_DAT_08AAC9E0();
      FUN_0880d840(uVar3,puVar2 + 0x14);
    }
    iVar1 = FUN_089d3ab4();
    if (iVar1 != 0) {
      uVar3 = FUN_089d3adc();
      iVar1 = FUN_089d41cc(uVar3);
      if (iVar1 == 0) {
        uVar4 = *(ushort *)(puVar2 + 0x3e) & 0xefff;
      }
      else {
        uVar4 = *(ushort *)(puVar2 + 0x3e) | 0x1000;
      }
      *(ushort *)(puVar2 + 0x3e) = uVar4;
    }
    FUN_089bb790(*(undefined4 *)(puVar2 + 8));
  }
  *(undefined *)(param_1 + 0x10) = 0;
LAB_089d32bc:
  *(undefined *)(param_1 + 0x12) = 0;
  return iVar5;
}

