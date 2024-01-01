#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a0eae8)

void __muldf3(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  longlong lVar1;
  longlong lVar2;
  ulonglong uVar3;
  ulonglong uVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_90;
  uint local_8c;
  uint local_80;
  uint local_7c;
  int local_78;
  uint local_70;
  uint local_6c;
  uint local_60;
  uint local_5c;
  int local_58;
  ulonglong local_50;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_30;
  undefined4 local_2c;
  
  local_40 = param_1;
  local_3c = param_2;
  local_30 = param_3;
  local_2c = param_4;
  FUN_08a0f3cc(&local_40,&local_a0);
  FUN_08a0f3cc(&local_30,&local_80);
  puVar5 = &local_60;
  if (local_a0 < 2) {
LAB_08a0e82c:
    local_9c = (uint)(local_9c != local_7c);
    puVar5 = &local_a0;
  }
  else {
    if (1 < local_80) {
      if (local_a0 == 4) {
        puVar5 = (uint *)&DAT_08aa5000;
        if (local_80 == 2) goto LAB_08a0e840;
        goto LAB_08a0e82c;
      }
      if (local_80 == 4) {
        puVar5 = (uint *)&DAT_08aa5000;
        if (local_a0 == 2) goto LAB_08a0e840;
      }
      else {
        if (local_a0 == 2) goto LAB_08a0e82c;
        if (local_80 != 2) {
          uVar8 = 0;
          lVar1 = (ulonglong)local_6c * (ulonglong)local_90;
          uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
          lVar2 = (ulonglong)local_70 * (ulonglong)local_8c + lVar1;
          uVar6 = (uint)lVar2;
          uVar7 = (uint)((ulonglong)lVar2 >> 0x20);
          uVar11 = (uint)((ulonglong)local_70 * (ulonglong)local_90);
          uVar10 = (uint)((ulonglong)local_70 * (ulonglong)local_90 >> 0x20);
          if ((uVar7 < uVar9) || ((uVar9 == uVar7 && (uVar6 < (uint)lVar1)))) {
            uVar8 = 1;
          }
          uVar6 = uVar10 + uVar6;
          local_50 = (ulonglong)local_6c * (ulonglong)local_8c + CONCAT44(uVar8,uVar7) +
                     (ulonglong)(uVar6 < uVar10);
          local_58 = local_98 + local_78 + 4;
          local_5c = (uint)(local_9c != local_7c);
          uVar3 = local_50;
          if (0x1fffffffffffffff < local_50) {
            do {
              uVar3 = local_50 & 1;
              uVar4 = local_50 >> 0x21;
              local_58 = local_58 + 1;
              local_50 = local_50 >> 1;
              if (uVar3 != 0) {
                uVar11 = uVar11 >> 1 | uVar6 << 0x1f;
                uVar6 = uVar6 >> 1 | 0x80000000;
              }
              uVar3 = local_50;
            } while (0x1fffffff < (uint)uVar4);
          }
          while (uVar3 < 0x1000000000000000) {
            local_58 = local_58 + -1;
            uVar3 = local_50 << 1;
            uVar7 = (uint)uVar3;
            if ((int)uVar6 < 0) {
              uVar7 = uVar7 | 1;
            }
            local_50 = CONCAT44((int)(uVar3 >> 0x20),uVar7);
            uVar6 = uVar6 << 1 | uVar11 >> 0x1f;
            uVar11 = uVar11 << 1;
          }
          if ((((uint)local_50 & 0xff) == 0x80) &&
             (((local_50 & 0x100) != 0 || ((uVar11 | uVar6) != 0)))) {
            local_50 = local_50 + 0x80;
          }
          local_60 = 3;
          goto LAB_08a0e840;
        }
      }
    }
    local_7c = (uint)(local_9c != local_7c);
    puVar5 = &local_80;
  }
LAB_08a0e840:
  FUN_08a0f12c(puVar5);
  return;
}

