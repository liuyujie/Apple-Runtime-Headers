//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <NanoPreferences/NPRFControlCell.h>

@class PUICSwitch;

@interface NPRFSwitchCell : NPRFControlCell
{
    PUICSwitch *_uiSwitch;
}

@property(retain, nonatomic) PUICSwitch *uiSwitch; // @synthesize uiSwitch=_uiSwitch;
- (void).cxx_destruct;
- (void)setCellEnabled:(_Bool)arg1;
- (void)specifierValueChanged;
- (id)cellAccesoryForSpecifier:(id)arg1 controller:(id)arg2;

@end

