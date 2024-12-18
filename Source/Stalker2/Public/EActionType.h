#pragma once
#include "CoreMinimal.h"
#include "EActionType.generated.h"

UENUM(BlueprintType)
enum class EActionType : uint8 {
    HideMainItem,
    EquipMainItem,
    HideSupportItem,
    EquipSupportItem,
    Interact,
    UseMainItem,
    ReloadWeapon,
    ChangeFireType,
    HandleAimInput,
    MeleeAttack,
    ThrowItem,
    ChangeAmmoType,
    UnjamWeapon,
    Fall,
    Lean,
    Crouch,
    Walk,
    Sprint,
    Run,
    Climb,
    PickUpItem,
    UseConsumableItem,
    UseBackpack,
    UsePDA,
    DragDeadBody,
    AutoCover,
    RemoveLeftHandFromMainItem,
    ReturnLeftHandOnMainItem,
    KnockDown,
    InstallAttach,
    ThrowWithoutEquip,
    EquipBothHands,
    HandleAimInputUnfocusable,
    UseMainItemUnfocusable,
    MeleeAttackUnfocusable,
    Vault,
    EnableShootingAttach,
    DisableShootingAttach,
    ToggleFlashlight,
    Limp,
    SwapWeapon,
    ItemSelector,
    AttachSelector,
    InteractWithAnim,
    InteractInstant,
    PickUpItemWithAnim,
    EquipTwoHandItem,
    HideTwoHandItem,
    InspectArtifact,
    UnloadWeapon,
    ToggleFlashlightWithAnim,
    PlayGuitar,
    Dodge,
    GetCount,
};

