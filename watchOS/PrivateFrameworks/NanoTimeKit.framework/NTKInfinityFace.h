//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKFace.h>

@interface NTKInfinityFace : NTKFace
{
}

+ (id)_localizedNameOverrideForCustomEditMode:(int)arg1;
+ (id)_defaultSelectedComplicationSlot;
- (id)_localizedNameForComplicationSlot:(id)arg1;
- (Class)_optionClassForCustomEditMode:(int)arg1;
- (unsigned int)_indexOfOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (unsigned int)_numberOfOptionsForCustomEditMode:(int)arg1 slot:(id)arg2;
- (_Bool)_hasOptionsForCustomEditMode:(int)arg1;
- (int)complicationPickerStyle;
- (id)_defaultOptionForCustomEditMode:(int)arg1 slot:(id)arg2;
- (int)_customEditModeForUniqueConfiguration;
- (id)_customEditModes;
- (id)_orderedComplicationSlots;
- (id)_complicationSlotDescriptors;

@end
