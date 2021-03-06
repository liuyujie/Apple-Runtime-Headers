//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "NTKContainerViewLayoutDelegate.h"
#import "NTKControl.h"

@class CLKDevice, NSString, NTKContainerView, NTKFaceColorScheme, UIColor, UIView;

@interface NTKModuleView : UIControl <NTKContainerViewLayoutDelegate, NTKControl>
{
    NTKContainerView *_contentView;
    UIView *_highlightView;
    CLKDevice *_device;
    UIColor *_foregroundColor;
    UIColor *_secondaryForegroundColor;
    UIColor *_highlightBackgroundColor;
    float _contentHeight;
    float _contentHeightOffset;
    float _highlightAlpha;
    NTKFaceColorScheme *_colorScheme;
    float _highlightCornerRadius;
    UIColor *_overrideColor;
}

+ (float)cornerRadiusForComplicationFamily:(int)arg1 forDevice:(id)arg2;
+ (float)_defaultCornerRadiusForDevice:(id)arg1;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
@property(nonatomic) float highlightCornerRadius; // @synthesize highlightCornerRadius=_highlightCornerRadius;
@property(retain, nonatomic) NTKFaceColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property(nonatomic) float highlightAlpha; // @synthesize highlightAlpha=_highlightAlpha;
@property(nonatomic) float contentHeightOffset; // @synthesize contentHeightOffset=_contentHeightOffset;
@property(nonatomic) float contentHeight; // @synthesize contentHeight=_contentHeight;
@property(retain, nonatomic) UIColor *highlightBackgroundColor; // @synthesize highlightBackgroundColor=_highlightBackgroundColor;
@property(retain, nonatomic) UIColor *secondaryForegroundColor; // @synthesize secondaryForegroundColor=_secondaryForegroundColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
- (void)layoutContainerView:(id)arg1;
- (_Bool)shouldCancelTouchesInScrollview;
- (void)setHighlighted:(_Bool)arg1;
- (void)_enumerateSecondaryForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateForegroundColoringViewsWithBlock:(CDUnknownBlockType)arg1;
- (void)_layoutContentView;
- (void)naturalHorizontalLayoutForViewsAndSpacing:(id)arg1 columnAlignmentSpacing:(_Bool)arg2;
- (id)viewsAndSpacingArrayForSpace:(float)arg1 view:(id)arg2 space:(float)arg3 view:(id)arg4;
- (id)viewsAndSpacingArrayForSpace:(float)arg1 view:(id)arg2;
- (void)applyColorScheme:(id)arg1;
- (void)applyTransitionFraction:(float)arg1 fromFaceColor:(unsigned int)arg2 toFaceColor:(unsigned int)arg3 units:(unsigned int)arg4 brightenedUnits:(unsigned int)arg5;
- (void)applyFaceColor:(unsigned int)arg1 units:(unsigned int)arg2;
- (void)_updateColors;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

