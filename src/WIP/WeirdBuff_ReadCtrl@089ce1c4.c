#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

void WIP_WeirdBuff_ReadCtrl(config_buffer *unknown_buffer,bool blockWhenReading)

{
  int buffersRead;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  int i;
  byte sVar5;
  config_buffer *loop_buff_copy;
  uint uVar7;
  uint uVar8;
  byte *puVar9;
  ushort *puVar10;
  float fVar3;
  float fVar4;
  SceCtrlData *CtrlBuff;
  uint local_9c;
  byte local_98;
  byte local_97;
  ushort sVar2;
  byte bVar1;
  char cVar1;
  
                    // Some kind of guard clause
  if (unknown_buffer->ctrlIsSet == false) {
    WIP_WeirdBuff_PrepReadCtrl(unknown_buffer,0);
    return;
  }
  puVar9 = unknown_buffer->field0_0x0 + 2;
  bVar1 = unknown_buffer->field0_0x0[3];
  unknown_buffer->field0_0x0[0] = *puVar9;
  uVar7 = 0;
  uVar8 = 0;
  unknown_buffer->field0_0x0[1] = bVar1;
  puVar10 = (ushort *)((int)&unknown_buffer->field2_0x7 + 1);
  if (blockWhenReading) {
    buffersRead = zz_sceCtrlReadBufferPositive(&CtrlBuff,8);
  }
  else {
    buffersRead = zz_sceCtrlPeekBufferPositive(&CtrlBuff,8);
  }
  if (buffersRead == 0) {
    unknown_buffer->field44_0x3b = '\0';
    uVar2 = *(ushort *)puVar9;
    cVar1 = unknown_buffer->field45_0x3c;
  }
  else {
    *(ushort *)puVar9 = (ushort)local_9c;
    cVar1 = unknown_buffer->field45_0x3c;
    if ((local_9c & 0x20000) == 0) {
      uVar3 = 0;
      if (unknown_buffer->field42_0x39 != uVar12) {
        uVar4 = (uint)(char)unknown_buffer->field0_0x0[2];
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
      *(float *)((int)&unknown_buffer->field38_0x2f + 1) = (float)uVar7 * -0.0078125;
      unknown_buffer->field40_0x34 = (float)uVar8 * 0.0078125;
    }
    unknown_buffer->field44_0x3b = '\x01';
    uVar2 = *(ushort *)puVar9;
  }
  if ((cVar1 != uVar9) && ((uVar2 & 0xf0) == 0)) {
    fVar4 = *(float *)((int)&unknown_buffer->field38_0x2f + 1);
    fVar3 = unknown_buffer->field40_0x34;
    unknown_buffer->field0_0x0[2] = unknown_buffer->field0_0x0[2] & 0x7f | (0.8 < fVar4) << 7;
    unknown_buffer->field0_0x0[2] = unknown_buffer->field0_0x0[2] & 0xdf | (fVar4 < -0.8) << 5;
    unknown_buffer->field0_0x0[2] = unknown_buffer->field0_0x0[2] & 0xef | (fVar3 < -0.8) << 4;
    unknown_buffer->field0_0x0[2] = unknown_buffer->field0_0x0[2] & 0xbf | (0.8 < fVar3) << 6;
    uVar2 = *(ushort *)puVar9;
  }
  *(ushort *)(unknown_buffer->field0_0x0 + 4) = ~*(ushort *)unknown_buffer->field0_0x0 & uVar2;
  *(ushort *)((int)&unknown_buffer->field1_0x5 + 1) =
       *(ushort *)unknown_buffer->field0_0x0 & ~*(ushort *)puVar9;
  *puVar10 = 0;
                    // For loop over copy of weird_buff
  i = 0;
  loop_buff_copy = unknown_buffer;
  do {
    uVar7 = 1 << (i & uVar10);
    sVar2 = 0;
    uVar2 = *(ushort *)((int)&unknown_buffer->field36_0x2b + 1);
    if ((*(ushort *)puVar9 & uVar7) != 0) {
      sVar2 = loop_buff_copy->field4_0xa + 1;
    }
    loop_buff_copy->field4_0xa = sVar2;
    if (uVar2 < loop_buff_copy->field4_0xa) {
      loop_buff_copy->field4_0xa = uVar2 - *(short *)((int)&unknown_buffer->field37_0x2d + 1);
      *puVar10 = *puVar10 | (ushort)uVar7;
    }
    i = i + 1;
    loop_buff_copy = (config_buffer *)(loop_buff_copy->field0_0x0 + 2);
  } while (i < 0x11);
  *puVar10 = *puVar10 | *(ushort *)(unknown_buffer->field0_0x0 + 4);
  return;
}

