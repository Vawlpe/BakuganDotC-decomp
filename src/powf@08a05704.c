#include "ULUS10536_MYTHREAD-MAIN.BIN.h"

// WARNING: Removing unreachable block (ram,0x08a059d8)
// WARNING: Removing unreachable block (ram,0x08a05a0c)
// WARNING: Removing unreachable block (ram,0x08a05c34)
// WARNING: Removing unreachable block (ram,0x08a05c50)
// WARNING: Removing unreachable block (ram,0x08a05c8c)
// WARNING: Removing unreachable block (ram,0x08a05c48)
// WARNING: Removing unreachable block (ram,0x08a05b64)
// WARNING: Removing unreachable block (ram,0x08a05b38)
// WARNING: Removing unreachable block (ram,0x08a058fc)
// WARNING: Removing unreachable block (ram,0x08a05904)
// WARNING: Removing unreachable block (ram,0x08a0590c)
// WARNING: Removing unreachable block (ram,0x08a057e0)
// WARNING: Removing unreachable block (ram,0x08a05e28)
// WARNING: Removing unreachable block (ram,0x08a05d14)

float powf(float param_1,float param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  float fVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined4 local_60;
  undefined *local_5c;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  int local_40;
  int local_38;
  
  fVar4 = (float)FUN_08a0968c();
  iVar1 = isnanf(param_2);
  if (iVar1 == 0) {
    iVar1 = isnanf(param_1);
    if (iVar1 == 0) {
      if (param_1 == 0.0) {
        if (param_2 == 0.0) {
          local_60 = 1;
          local_5c = &DAT_08aa44f8;
          local_40 = 0;
          local_58 = __extendsfdf2(param_1);
          local_50 = __extendsfdf2(param_2);
          local_48._4_4_ = 0x3ff00000;
          local_48._0_4_ = 0;
          if (local_40 != 0) {
            local_38 = local_40;
            piVar3 = (int *)FUN_08a0f7b0();
            *piVar3 = local_38;
          }
          fVar4 = (float)FUN_08a0efb8((undefined4)local_48,local_48._4_4_);
          return fVar4;
        }
        iVar1 = finitef(param_2);
        if ((iVar1 != 0) && (param_2 < 0.0)) {
          local_60 = 1;
          local_5c = &DAT_08aa44f8;
          local_40 = 0;
          local_58 = __extendsfdf2(param_1);
          local_50 = __extendsfdf2(param_2);
          local_48 = __negdf2(0,0x7ff00000);
          iVar1 = FUN_08a05f20(&local_60);
          if (iVar1 == 0) {
            puVar2 = (undefined4 *)FUN_08a0f7b0();
            *puVar2 = 0x21;
          }
          uVar6 = local_48;
          if (local_40 != 0) {
            local_38 = local_40;
            piVar3 = (int *)FUN_08a0f7b0();
            *piVar3 = local_38;
            uVar6 = local_48;
          }
          local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_48._0_4_ = (undefined4)uVar6;
          fVar4 = (float)FUN_08a0efb8((undefined4)local_48,local_48._4_4_);
          local_48 = uVar6;
          return fVar4;
        }
      }
      else {
        iVar1 = finitef(fVar4);
        if (((iVar1 == 0) && (iVar1 = finitef(param_1), iVar1 != 0)) &&
           (iVar1 = finitef(param_2), iVar1 != 0)) {
          iVar1 = isnanf(fVar4);
          uVar6 = __extendsfdf2(param_1);
          local_50 = __extendsfdf2(param_2);
          local_58 = uVar6;
          if (iVar1 != 0) {
            local_60 = 1;
            local_5c = &DAT_08aa44f8;
            local_40 = 0;
            local_48 = FUN_08a0eb10(0,0);
            iVar1 = FUN_08a05f20(&local_60);
            if (iVar1 == 0) {
              puVar2 = (undefined4 *)FUN_08a0f7b0();
              *puVar2 = 0x21;
            }
            uVar6 = local_48;
            if (local_40 != 0) {
              local_38 = local_40;
              piVar3 = (int *)FUN_08a0f7b0();
              *piVar3 = local_38;
              uVar6 = local_48;
            }
            local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
            local_48._0_4_ = (undefined4)uVar6;
            fVar4 = (float)FUN_08a0efb8((undefined4)local_48,local_48._4_4_);
            local_48 = uVar6;
            return fVar4;
          }
          local_60 = 3;
          local_5c = &DAT_08aa44f8;
          local_40 = 0;
          uVar6 = __muldf3((int)local_50,(int)((ulonglong)local_50 >> 0x20),0,0x3fe00000);
          uVar5 = FUN_08a0efb8((int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
          local_48._4_4_ = 0x7ff00000;
          local_48._0_4_ = 0;
          local_48 = 0x7ff0000000000000;
          if (param_1 < 0.0) {
            uVar6 = __extendsfdf2(uVar5);
            uVar5 = (undefined4)((ulonglong)uVar6 >> 0x20);
            uVar7 = rint((int)uVar6,uVar5);
            iVar1 = FUN_08a0ed34((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,uVar5);
            if (iVar1 != 0) {
              local_48 = __negdf2(0,0x7ff00000);
            }
          }
          iVar1 = FUN_08a05f20(&local_60);
          if (iVar1 == 0) {
            puVar2 = (undefined4 *)FUN_08a0f7b0();
            *puVar2 = 0x22;
          }
          uVar6 = local_48;
          if (local_40 != 0) {
            local_38 = local_40;
            piVar3 = (int *)FUN_08a0f7b0();
            *piVar3 = local_38;
            uVar6 = local_48;
          }
          local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
          local_48._0_4_ = (undefined4)uVar6;
          fVar4 = (float)FUN_08a0efb8((undefined4)local_48,local_48._4_4_);
          local_48 = uVar6;
          return fVar4;
        }
        if (((fVar4 == 0.0) && (iVar1 = finitef(param_1), iVar1 != 0)) &&
           (iVar1 = finitef(param_2), iVar1 != 0)) {
          local_60 = 4;
          local_5c = &DAT_08aa44f8;
          local_40 = 0;
          local_58 = __extendsfdf2(param_1);
          local_50 = __extendsfdf2(param_2);
          local_48._4_4_ = 0;
          local_48._0_4_ = 0;
          iVar1 = FUN_08a05f20(&local_60);
          if (iVar1 == 0) {
            puVar2 = (undefined4 *)FUN_08a0f7b0();
            *puVar2 = 0x22;
          }
          if (local_40 != 0) {
            local_38 = local_40;
            piVar3 = (int *)FUN_08a0f7b0();
            *piVar3 = local_38;
          }
          fVar4 = (float)FUN_08a0efb8((undefined4)local_48,local_48._4_4_);
          return fVar4;
        }
      }
    }
    else if (param_2 == 0.0) {
      local_60 = 1;
      local_5c = &DAT_08aa44f8;
      local_40 = 0;
      uVar6 = __extendsfdf2(param_1);
      local_58 = uVar6;
      local_50 = __extendsfdf2(param_2);
      local_48 = uVar6;
      iVar1 = FUN_08a05f20(&local_60);
      if (iVar1 == 0) {
        puVar2 = (undefined4 *)FUN_08a0f7b0();
        *puVar2 = 0x21;
      }
      uVar6 = local_48;
      if (local_40 != 0) {
        local_38 = local_40;
        piVar3 = (int *)FUN_08a0f7b0();
        *piVar3 = local_38;
        uVar6 = local_48;
      }
      local_48._4_4_ = (undefined4)((ulonglong)uVar6 >> 0x20);
      local_48._0_4_ = (undefined4)uVar6;
      fVar4 = (float)FUN_08a0efb8((undefined4)local_48,local_48._4_4_);
      local_48 = uVar6;
      return fVar4;
    }
  }
  return fVar4;
}

