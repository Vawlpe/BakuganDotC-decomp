#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_08a23880(void)

{
  int iVar1;
  undefined uVar2;
  uint uVar3;
  undefined1 *puVar4;
  uint uVar5;
  undefined4 local_30;
  undefined4 local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  uVar5 = 0;
  if (DAT_08afdee4 != 0) {
    puVar4 = &DAT_08afdef8;
    do {
      if (puVar4[1] != '\0') {
        if (puVar4[8] == puVar4[0x60]) {
          if (puVar4[9] != puVar4[0x61]) {
            uVar2 = puVar4[0x60];
            goto LAB_08a238d8;
          }
          if (puVar4[10] != puVar4[0x62]) {
            uVar2 = puVar4[0x60];
            goto LAB_08a238d8;
          }
          if (puVar4[0xb] != puVar4[99]) {
            uVar2 = puVar4[0x60];
            goto LAB_08a238d8;
          }
          iVar1 = *(int *)(puVar4 + 0xc);
        }
        else {
          uVar2 = puVar4[0x60];
LAB_08a238d8:
          FUN_08a23b14(*(undefined4 *)(puVar4 + 0x34),uVar2,puVar4[0x38],puVar4[0x61],&local_30,
                       &local_2c);
          FUN_08a23b14(*(undefined4 *)(puVar4 + 0x3c),puVar4[0x62],puVar4[0x40],puVar4[99],&local_28
                       ,&local_24);
          FUN_08a29054(uVar5,local_30,local_2c,local_28,local_24);
          FUN_08a20730(uVar5,local_30,local_2c,local_28,local_24);
          puVar4[8] = puVar4[0x60];
          puVar4[9] = puVar4[0x61];
          puVar4[10] = puVar4[0x62];
          puVar4[0xb] = puVar4[99];
          iVar1 = *(int *)(puVar4 + 0xc);
        }
        if (iVar1 != *(int *)(puVar4 + 100)) {
          if (puVar4[0x5d] == -1) {
            uVar3 = *(uint *)(puVar4 + 0x30);
          }
          else {
            iVar1 = FUN_08a212a4(puVar4[0x4d],(int)(short)(((char)puVar4[0x4e] * 0x7f) / 100),
                                 puVar4[0x5d],(int)(short)(((char)puVar4[0x4c] * 0x7f) / 100));
            uVar3 = (uint)(*(int *)(puVar4 + 0x2c) * iVar1) / 0xac44;
          }
          iVar1 = uVar3 + *(int *)(puVar4 + 100);
          if (0x4000 < iVar1) {
            iVar1 = 0x4000;
          }
          if (iVar1 < 1) {
            iVar1 = 1;
          }
          FUN_08a290b8(*puVar4,iVar1);
          *(undefined4 *)(puVar4 + 0xc) = *(undefined4 *)(puVar4 + 100);
        }
      }
      uVar5 = uVar5 + 1;
      puVar4 = puVar4 + 0x68;
    } while (uVar5 < DAT_08afdee4);
  }
  return;
}

