//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FitnessUI/FIUIHealthSettingsPickerController.h>

@interface FIUIHealthSettingsWheelchairUsePickerController : FIUIHealthSettingsPickerController
{
    CDUnknownBlockType _wheelchairUseUpdateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType wheelchairUseUpdateHandler; // @synthesize wheelchairUseUpdateHandler=_wheelchairUseUpdateHandler;
- (void).cxx_destruct;
- (void)setWheelchairUse:(int)arg1;
- (int)_wheelchairUseForRow:(int)arg1;
- (id)pickerView:(id)arg1 attributedTitleForRow:(int)arg2 forComponent:(int)arg3;
- (void)pickerView:(id)arg1 didSelectRow:(int)arg2 inComponent:(int)arg3;
- (int)pickerView:(id)arg1 numberOfRowsInComponent:(int)arg2;
- (int)numberOfComponentsInPickerView:(id)arg1;

@end

