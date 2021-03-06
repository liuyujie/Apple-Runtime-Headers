//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIStatusBarSignalView.h>

@class _UIStatusBarCycleAnimation;

@interface _UIStatusBarCellularSignalView : _UIStatusBarSignalView
{
    _Bool _needsCycleAnimationUpdate;
    _UIStatusBarCycleAnimation *_cycleAnimation;
}

+ (struct CGSize)_intrinsicContentSizeForNumberOfBars:(int)arg1 iconSize:(int)arg2;
+ (float)_interspaceForIconSize:(int)arg1;
+ (float)_barCornerRadiusForIconSize:(int)arg1;
+ (float)_heightForNormalBarAtIndex:(int)arg1 iconSize:(int)arg2;
+ (float)_barWidthForIconSize:(int)arg1;
@property(retain, nonatomic) _UIStatusBarCycleAnimation *cycleAnimation; // @synthesize cycleAnimation=_cycleAnimation;
@property(nonatomic) _Bool needsCycleAnimationUpdate; // @synthesize needsCycleAnimationUpdate=_needsCycleAnimationUpdate;
- (void).cxx_destruct;
- (id)accessibilityHUDRepresentation;
- (struct CGSize)intrinsicContentSize;
- (void)didMoveToWindow;
- (void)_updateFromMode:(int)arg1;
- (void)_updateActiveBars;
- (void)_iconSizeDidChange;
- (void)_colorsDidChange;
- (void)layoutSubviews;
- (void)_updateCycleAnimationNow;
- (void)_updateCycleAnimationIfNeeded;
- (void)_setNeedsUpdateCycleAnimation;
- (void)_updateBars;
- (float)_heightForBarAtIndex:(int)arg1 mode:(int)arg2;
- (float)_heightForBarAtIndex:(int)arg1;

@end

