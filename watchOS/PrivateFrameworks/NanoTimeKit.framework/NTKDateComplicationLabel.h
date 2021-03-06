//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIControl.h"

#import "NTKControl.h"
#import "NTKDateComplicationDisplay.h"

@class CLKDevice, CLKFont, NSString, UIColor, UILabel, UIView;

@interface NTKDateComplicationLabel : UIControl <NTKDateComplicationDisplay, NTKControl>
{
    _Bool _frozen;
    NSString *_currentDateText;
    UILabel *_internalLabel;
    UIView *_highlightView;
    struct CGSize _cachedSize;
    struct _NSRange _dayTextRange;
    _Bool _cachedSizeIsValid;
    _Bool _usesLegibility;
    _Bool _legibilityHidden;
    id <NTKComplicationDisplayObserver> displayObserver;
    int _sizeStyle;
    int _accentType;
    CLKDevice *_device;
    CLKFont *_font;
    UIColor *_accentColor;
    unsigned int _overrideDateStyle;
    struct UIEdgeInsets _touchEdgeInsets;
}

@property(nonatomic) struct UIEdgeInsets touchEdgeInsets; // @synthesize touchEdgeInsets=_touchEdgeInsets;
@property(nonatomic) unsigned int overrideDateStyle; // @synthesize overrideDateStyle=_overrideDateStyle;
@property(nonatomic) _Bool legibilityHidden; // @synthesize legibilityHidden=_legibilityHidden;
@property(nonatomic) _Bool usesLegibility; // @synthesize usesLegibility=_usesLegibility;
@property(retain, nonatomic) UIColor *accentColor; // @synthesize accentColor=_accentColor;
@property(retain, nonatomic) CLKFont *font; // @synthesize font=_font;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) int accentType; // @synthesize accentType=_accentType;
@property(readonly, nonatomic) int sizeStyle; // @synthesize sizeStyle=_sizeStyle;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (void).cxx_destruct;
- (float)_legibtilityShadowRadius;
- (struct CGSize)_highlightInset;
- (float)_cornerRadius;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (_Bool)shouldCancelTouchesInScrollview;
- (void)_invalidateInternalLabelSize;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
- (void)_setFont:(id)arg1;
- (void)_applyAccentColorAttributes;
- (void)_setText:(id)arg1;
@property(nonatomic, setter=_setLastLineBaselineFrameOriginY:) float _lastLineBaselineFrameOriginY;
@property(readonly, nonatomic) float _lastLineBaseline;
@property(nonatomic, setter=_setFirstLineBaselineFrameOriginY:) float _firstLineBaselineFrameOriginY;
- (float)_firstLineBaselineOffsetFromBoundsTop;
@property(retain, nonatomic) UIColor *textColor;
- (id)_attributedStringAccentingNumbersInString:(id)arg1;
- (void)setDateComplicationText:(id)arg1 withDayRange:(struct _NSRange)arg2 forDateStyle:(unsigned int)arg3;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithSizeStyle:(int)arg1 accentType:(int)arg2 forDevice:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

