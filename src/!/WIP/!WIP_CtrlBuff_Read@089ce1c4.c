#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void _WIP_CtrlBuff_Read(unkown_buffer *unknown_buffer,bool blockWhenReading)

{
  char cVar1;
  int buffersRead;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  unkown_buffer *puVar6;
  uint uVar7;
  uint uVar8;
  undefined *puVar9;
  ushort *puVar10;
  SceCtrlData *CtrlBuff;
  uint local_9c;
  byte local_98;
  byte local_97;
  
                    // Some kind of guard clause
  if (unknown_buffer->field46_0x3a == '\0') {
    FUN_089cdfe8(unknown_buffer,0);
    return;
  }
  puVar9 = &unknown_buffer->field_0x2;
  *(undefined *)unknown_buffer = *puVar9;
  uVar7 = 0;
  uVar8 = 0;
  unknown_buffer->field_0x1 = unknown_buffer->field_0x3;
  puVar10 = &unknown_buffer->field6_0x8;
  if (blockWhenReading) {
    buffersRead = zz_sceCtrlReadBufferPositive(&CtrlBuff,8);
  }
  else {
    buffersRead = zz_sceCtrlPeekBufferPositive(&CtrlBuff,8);
  }
  if (buffersRead == 0) {
    unknown_buffer->field_0x3b = 0;
    uVar2 = *(ushort *)puVar9;
    cVar1 = unknown_buffer->field48_0x3c;
  }
  else {
    *(undefined2 *)puVar9 = (undefined2)local_9c;
    cVar1 = unknown_buffer->field48_0x3c;
    if ((local_9c & 0x20000) == 0) {
      uVar3 = 0;
      if (unknown_buffer->field45_0x39 != '\0') {
        uVar4 = (uint)(char)unknown_buffer->field_0x2;
        if ((uVar4 & 0x80) != 0) {
          uVar7 = 0xffffff81;
        }
        if ((uVar4 & 0x20) != 0) {
          uVar7 = uVar7 + 0x7f;
        }
        if ((uVar4 & 0x10) != 0) {
          uVar8 = 0xffffff81;
        }
        uVar3 = uVar7 | uVar8;
        if ((uVar4 & 0x40) != 0) {
          uVar8 = uVar8 + 0x7f;
          uVar3 = uVar7 | uVar8;
        }
      }
      if (uVar3 == 0) {
        uVar7 = local_98 - 0x80;
        uVar8 = local_97 - 0x80;
      }
      else if ((uVar7 != 0) && (uVar8 != 0)) {
        uVar7 = (int)(uVar7 * 0x59 + ((uint)((int)(uVar7 * 0x59) >> 7) >> 0x19)) >> 7;
        uVar8 = (int)(uVar8 * 0x59 + ((uint)((int)(uVar8 * 0x59) >> 7) >> 0x19)) >> 7;
      }
      unknown_buffer->field42_0x30 = (float)uVar7 * -0.0078125;
      unknown_buffer->field43_0x34 = (float)uVar8 * 0.0078125;
    }
    unknown_buffer->field_0x3b = 1;
    uVar2 = *(ushort *)puVar9;
  }
  if ((cVar1 != '\0') && ((uVar2 & 0xf0) == 0)) {
    unknown_buffer->field_0x2 =
         unknown_buffer->field_0x2 & 0x7f | (0.8 < unknown_buffer->field42_0x30) << 7;
    unknown_buffer->field_0x2 =
         unknown_buffer->field_0x2 & 0xdf | (unknown_buffer->field42_0x30 < -0.8) << 5;
    unknown_buffer->field_0x2 =
         unknown_buffer->field_0x2 & 0xef | (unknown_buffer->field43_0x34 < -0.8) << 4;
    unknown_buffer->field_0x2 =
         unknown_buffer->field_0x2 & 0xbf | (0.8 < unknown_buffer->field43_0x34) << 6;
    uVar2 = *(ushort *)puVar9;
  }
  unknown_buffer->field4_0x4 = ~*(ushort *)unknown_buffer & uVar2;
  unknown_buffer->field5_0x6 = *(ushort *)unknown_buffer & ~*(ushort *)puVar9;
  *puVar10 = 0;
  uVar7 = 0;
  puVar6 = unknown_buffer;
  do {
    uVar8 = 1 << (uVar7 & 0x1f);
    uVar5 = 0;
    uVar2 = unknown_buffer->field40_0x2c;
    if ((*(ushort *)puVar9 & uVar8) != 0) {
      uVar5 = puVar6->field7_0xa + 1;
    }
    puVar6->field7_0xa = uVar5;
    if (uVar2 < puVar6->field7_0xa) {
      puVar6->field7_0xa = uVar2 - unknown_buffer->field41_0x2e;
      *puVar10 = *puVar10 | (ushort)uVar8;
    }
    uVar7 = uVar7 + 1;
    puVar6 = (unkown_buffer *)&puVar6->field_0x2;
  } while ((int)uVar7 < 0x11);
  *puVar10 = *puVar10 | unknown_buffer->field4_0x4;
  return;
}

