//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoTimeKit/NTKBasePhotosFace.h>

@interface NTKPhotosFace : NTKBasePhotosFace
{
    _Bool _editing;
}

+ (id)_localizedNameOverrideForCustomEditMode:(int)arg1 forDevice:(id)arg2;
+ (_Bool)_customEditMode:(int)arg1 hasActionForOption:(id)arg2 forDevice:(id)arg3;
+ (_Bool)_customEditModeIsRows:(int)arg1 forDevice:(id)arg2;
- (Class)_optionClassForCustomEditMode:(int)arg1;
- (unsigned int)_indexOfOption:(id)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (id)_optionAtIndex:(unsigned int)arg1 forCustomEditMode:(int)arg2 slot:(id)arg3;
- (unsigned int)_numberOfOptionsForCustomEditMode:(int)arg1 slot:(id)arg2;
- (_Bool)_hasOptionsForCustomEditMode:(int)arg1;
- (void)_cleanupEditOptions;
- (void)_prepareEditOptions;
- (int)_customEditModeForUniqueConfiguration;
- (id)_defaultOptionForCustomEditMode:(int)arg1 slot:(id)arg2;
- (id)_customEditModes;

@end

