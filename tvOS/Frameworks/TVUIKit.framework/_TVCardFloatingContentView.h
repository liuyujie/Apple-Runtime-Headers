//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "_UIFloatingContentView.h"

#import "TVLockupViewComponent.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface _TVCardFloatingContentView : _UIFloatingContentView <TVLockupViewComponent>
{
}

- (void)updateAppearanceForLockupViewState:(unsigned long long)arg1;
- (void)updateBackgroundColor:(id)arg1;
- (void)setControlState:(unsigned long long)arg1 withAnimationCoordinator:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

