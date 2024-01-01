#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void FUN_088eed20(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  byte bVar4;
  char cVar5;
  undefined *puVar6;
  
  bVar4 = *(byte *)(param_1 + 0x265);
  if (bVar4 < 2) {
    if (bVar4 == 0) {
      uVar3 = FUN_089edb80();
      iVar2 = FUN_089edf70(uVar3);
      if (iVar2 != 0) {
        *(undefined2 *)(param_1 + 0x260) = 0;
        *(short *)(param_1 + 0x250) = *(short *)(param_1 + 0x250) + 1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
        FUN_088eb0f8(*(undefined4 *)(param_1 + 0x3c));
        *(undefined *)(param_1 + 0x271) = 0xff;
        if (*(char *)(param_1 + 0x272) == '\x01') {
          bVar4 = *(byte *)(param_1 + 0x273) | 4;
        }
        else {
          bVar4 = *(byte *)(param_1 + 0x273) & 0xfb;
        }
        *(byte *)(param_1 + 0x273) = bVar4;
        *(char *)(param_1 + 0x265) = *(char *)(param_1 + 0x265) + '\x01';
      }
    }
    else {
      bVar1 = *(ushort *)(param_1 + 0x250) < *(ushort *)(param_1 + 0x252);
      while (bVar1) {
        puVar6 = *(undefined **)(param_1 + 0x20);
        FUN_088ee0e8(param_1,*puVar6,puVar6[1],(int)*(short *)(puVar6 + 2));
        if (*(char *)(param_1 + 0x272) == '\0') {
          cVar5 = *(char *)(param_1 + 0x271);
          goto LAB_088eee60;
        }
        *(short *)(param_1 + 0x250) = *(short *)(param_1 + 0x250) + 1;
        *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 4;
        bVar1 = *(ushort *)(param_1 + 0x250) < *(ushort *)(param_1 + 0x252);
      }
      cVar5 = *(char *)(param_1 + 0x271);
LAB_088eee60:
      if (cVar5 != -1) {
        FUN_089c87e4(0);
        FUN_089c879c(0x3ecccccd,0);
        if (*(char *)(param_1 + 0x271) != '\0') {
          FUN_089c8734(0,*(char *)(param_1 + 0x271),1,0);
        }
      }
      iVar2 = FUN_089bf93c(0x1a4,1);
      if (iVar2 != 0) {
        uVar3 = FUN_089bfa40(0x1a4);
        FUN_089bf7a8(uVar3,1);
      }
      if (*(int *)(DAT_08ac5c90 + 0x2ac) != 0) {
        FUN_088b9f54(DAT_08ac5c90,1,0);
      }
      if ((*(byte *)(param_1 + 0x273) & 4) == 0) {
        cVar5 = *(char *)(param_1 + 0x265);
      }
      else {
        iVar2 = FUN_089edb80();
        *(undefined4 *)(iVar2 + 0x30) = 0;
        *(undefined4 *)(iVar2 + 0x34) = 0;
        *(undefined4 *)(iVar2 + 0x38) = 0;
        *(undefined4 *)(iVar2 + 0x3c) = 0x3f800000;
        iVar2 = FUN_089edb80();
        *(undefined4 *)(iVar2 + 0x40) = 0;
        *(undefined4 *)(iVar2 + 0x44) = 0;
        *(undefined4 *)(iVar2 + 0x48) = 0;
        *(undefined4 *)(iVar2 + 0x4c) = 0;
        uVar3 = FUN_089edb80();
        FUN_089edf24(uVar3,5);
        cVar5 = *(char *)(param_1 + 0x265);
      }
      *(char *)(param_1 + 0x265) = cVar5 + '\x01';
    }
  }
  else if (bVar4 < 3) {
    uVar3 = FUN_089edb80();
    iVar2 = FUN_089edf70(uVar3);
    if (iVar2 != 0) {
      *(char *)(param_1 + 0x265) = *(char *)(param_1 + 0x265) + '\x01';
    }
  }
  else if (bVar4 < 4) {
    *(undefined2 *)(param_1 + 0x256) = *(undefined2 *)(param_1 + 600);
    *(undefined *)(param_1 + 0x26a) = 0;
    *(undefined *)(param_1 + 0x264) = 2;
    *(byte *)(param_1 + 0x273) = *(byte *)(param_1 + 0x273) & 0xfe;
    *(undefined *)(param_1 + 0x265) = 0;
  }
  return;
}

