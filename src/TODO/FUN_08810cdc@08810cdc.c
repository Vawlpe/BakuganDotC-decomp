#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

undefined4 FUN_08810cdc(void)

{
  byte bVar1;
  int *piVar2;
  
  FUN_088f54e4();
  FUN_088c29b8();
  piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
  *(undefined *)(*piVar2 + 0x461) = 2;
  piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
  memset_jak((undefined *)(*piVar2 + 0x250),0,0x80);
  memset_jak((undefined *)(*piVar2 + 0x411),0,0x50);
  piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
  *(char *)(*piVar2 + 0x462) = *(char *)(*piVar2 + 0x462) + '\x01';
  if (3 < *(byte *)(*piVar2 + 0x462)) {
    *(undefined *)(*piVar2 + 0x462) = 3;
  }
  FUN_089b29c0();
  piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
  bVar1 = *(byte *)(*piVar2 + 0x462);
  if (bVar1 < 2) {
    if (bVar1 != 0) {
      piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
      *(ushort *)(*piVar2 + 0x6a6) = *(ushort *)(*piVar2 + 0x6a6) | 1;
    }
  }
  else if (bVar1 < 3) {
    piVar2 = (int *)_DONE_Get_DAT_08AAC9E0();
    *(ushort *)(*piVar2 + 0x6a6) = *(ushort *)(*piVar2 + 0x6a6) | 2;
  }
  FUN_089c9b9c(6,DAT_08ac58c8);
  FUN_089c9b9c(7,DAT_08ac58c8);
  FUN_089c9b9c(8,DAT_08ac58c8);
  FUN_089c9b9c(9,DAT_08ac58c8);
  FUN_089c9b9c(10,DAT_08ac58c8);
  FUN_089c9b9c(0xb,DAT_08ac58c8);
  FUN_089c9b9c(0xc,DAT_08ac58c8);
  FUN_089c9b9c(0xd,DAT_08ac58c8);
  FUN_089c9b9c(0xe,DAT_08ac58c8);
  FUN_089c9b9c(0xf,DAT_08ac58c8);
  FUN_089c9b9c(0x10,DAT_08ac58c8);
  FUN_089c9b9c(0x11,DAT_08ac58c8);
  FUN_089c9b9c(0x12,DAT_08ac58c8);
  FUN_089c9b9c(0x13,DAT_08ac58c8);
  FUN_089c9b9c(0x14,DAT_08ac58c8);
  FUN_089c9b9c(0x15,DAT_08ac58c8);
  FUN_089c9b9c(0x16,DAT_08ac58c8);
  FUN_089c9b9c(0x17,DAT_08ac58c8);
  FUN_089c9b9c(0x18,DAT_08ac58c8);
  FUN_089c9b9c(0x19,DAT_08ac58c8);
  FUN_089c9b9c(0x1a,DAT_08ac58c8);
  FUN_089c9b9c(0x1b,DAT_08ac58c8);
  FUN_089c9b9c(0x1c,DAT_08ac58c8);
  FUN_089c9b9c(0x1d,DAT_08ac58c8);
  FUN_089c9b9c(0x1e,DAT_08ac58c8);
  return 0;
}

