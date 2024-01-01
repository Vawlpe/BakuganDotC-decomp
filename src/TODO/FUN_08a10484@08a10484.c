#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

short FUN_08a10484(undefined4 *param_1)

{
  byte bVar1;
  int iVar2;
  short sVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  
  sVar3 = 0;
  if (param_1 != (undefined4 *)0x0) {
    sVar3 = *(short *)((int)param_1 + 0xe) + -1;
    *(short *)((int)param_1 + 0xe) = sVar3;
    if (sVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 3);
      iVar7 = param_1[1];
      iVar2 = (uint)bVar1 * 0x24;
      if (iVar7 != 0) {
        *(undefined4 *)(iVar7 + 8) = param_1[2];
      }
      iVar5 = param_1[2];
      if (iVar5 != 0) {
        *(int *)(iVar5 + 4) = iVar7;
      }
      if (param_1 == *(undefined4 **)(&DAT_08af1264 + iVar2)) {
        *(int *)(&DAT_08af1264 + iVar2) = iVar5;
      }
      if (param_1 == *(undefined4 **)(&DAT_08af126c + iVar2)) {
        *(undefined4 *)(&DAT_08af126c + iVar2) = 0;
      }
      if (param_1 == *(undefined4 **)(&DAT_08af1268 + iVar2)) {
        uVar4 = *(undefined4 *)(&DAT_08af126c + iVar2);
        *(undefined4 *)(&DAT_08af126c + iVar2) = 0;
        *(undefined4 *)(&DAT_08af1268 + iVar2) = uVar4;
      }
      uVar4 = DAT_08afce88;
      if ((&DAT_08af1262)[iVar2] != '\0') {
        uVar6 = *(undefined4 *)(&DAT_08af1270 + iVar2);
        param_1[2] = DAT_08afce8c;
        param_1[3] = uVar4;
        param_1[1] = uVar6;
        *(undefined4 **)(&DAT_08af1270 + iVar2) = param_1;
        return 0;
      }
      (*(code *)(&PTR_FUN_08af125c)[(uint)bVar1 * 9])(*param_1);
    }
  }
  return sVar3;
}

