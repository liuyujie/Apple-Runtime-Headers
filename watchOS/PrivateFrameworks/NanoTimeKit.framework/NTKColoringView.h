//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NTKColoringView.h"

@class NSString, UIColor, _NTKColorManager;

@interface NTKColoringView : UIView <NTKColoringView>
{
    _NTKColorManager *_colorManager;
    UIColor *_overrideColor;
}

@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
- (void).cxx_destruct;
@property(nonatomic) _Bool usesLegibility; // @dynamic usesLegibility;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(retain, nonatomic) UIColor *color; // @dynamic color;
@property(readonly, nonatomic) UIColor *contentColor; // @dynamic contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

