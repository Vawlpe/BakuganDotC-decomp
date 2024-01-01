#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08a229d8(uint param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  undefined uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  
  if (DAT_08af13b0 == -1) {
    return 0x80450001;
  }
  if (DAT_08afdee4 <= param_1) {
    return 0x80450011;
  }
  cVar1 = (&DAT_08afdef9)[param_1 * 0x68];
  if (cVar1 == '\0') {
    return 0x80450012;
  }
  if (param_2 != 0) {
    return 0x80450013;
  }
  if (cVar1 == '\x05') {
    puVar4 = (undefined *)
             FUN_08a235e0(&DAT_08afdef0,&DAT_08afed1c,&DAT_08afdeec,&DAT_08afec9c,param_1);
    puVar4[1] = 3;
    puVar6 = param_3;
    puVar3 = (undefined4 *)(puVar4 + 0x10);
    do {
      puVar8 = puVar3;
      puVar7 = puVar6;
      uVar5 = puVar7[1];
      uVar10 = puVar7[2];
      uVar9 = puVar7[3];
      *puVar8 = *puVar7;
      puVar6 = puVar7 + 4;
      puVar8[1] = uVar5;
      puVar8[2] = uVar10;
      puVar8[3] = uVar9;
      puVar3 = puVar8 + 4;
    } while (puVar6 != param_3 + 0x14);
    uVar5 = puVar7[5];
    puVar8[4] = *puVar6;
    puVar8[5] = uVar5;
  }
  else {
    if (cVar1 < '\x06') {
      if (cVar1 != '\x03') goto LAB_08a22a7c;
      puVar4 = (undefined *)
               FUN_08a235e0(&DAT_08afdeec,&DAT_08afec9c,&DAT_08afdeec,&DAT_08afec9c,param_1);
      puVar6 = param_3;
      puVar3 = (undefined4 *)(puVar4 + 0x10);
      do {
        puVar8 = puVar3;
        puVar7 = puVar6;
        uVar5 = puVar7[1];
        uVar9 = puVar7[2];
        uVar10 = puVar7[3];
        *puVar8 = *puVar7;
        puVar6 = puVar7 + 4;
        puVar8[1] = uVar5;
        puVar8[2] = uVar9;
        puVar8[3] = uVar10;
        puVar3 = puVar8 + 4;
      } while (puVar6 != param_3 + 0x14);
      uVar2 = *puVar4;
      uVar5 = puVar7[5];
      puVar8[4] = *puVar6;
      puVar8[5] = uVar5;
    }
    else {
      if (cVar1 != '\a') goto LAB_08a22a7c;
      puVar4 = (undefined *)
               FUN_08a235e0(&DAT_08afdef4,&DAT_08afed9c,&DAT_08afdeec,&DAT_08afec9c,param_1);
      puVar4[1] = 3;
      puVar6 = param_3;
      puVar3 = (undefined4 *)(puVar4 + 0x10);
      do {
        puVar8 = puVar3;
        puVar7 = puVar6;
        uVar5 = puVar7[1];
        uVar9 = puVar7[2];
        uVar10 = puVar7[3];
        *puVar8 = *puVar7;
        puVar6 = puVar7 + 4;
        puVar8[1] = uVar5;
        puVar8[2] = uVar9;
        puVar8[3] = uVar10;
        puVar3 = puVar8 + 4;
      } while (puVar6 != param_3 + 0x14);
      uVar2 = *puVar4;
      uVar5 = puVar7[5];
      puVar8[4] = *puVar6;
      puVar8[5] = uVar5;
    }
    FUN_08a28fdc(uVar2);
  }
  FUN_08a23678(puVar4);
LAB_08a22a7c:
  zz_sceKernelLockLwMutex(&DAT_08afebfc,1,0);
  DAT_08afebf8 = DAT_08afebf8 | 1 << (param_1 & 0x1f);
  zz_sceKernelUnlockLwMutex(&DAT_08afebfc,1);
  return 0;
}

