//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTextField.h"

#import "TBestFitStringSelectorDelegate.h"

@class NSColor, NSString;

__attribute__((visibility("hidden")))
@interface FI_TTextField : NSTextField <TBestFitStringSelectorDelegate>
{
    struct CGSize _maxSize;
    struct CGSize _minSize;
    struct CGSize _idealSize;
    _Bool _idealSizeIsDirty;
    struct TNSRef<NSColor, void> _enabledTextColor;
    struct TNSRef<NSColor, void> _disabledTextColor;
    _Bool _autoSizeToFit;
    _Bool _autoAdjustHeightToFit;
    _Bool _sizingInProgress;
    _Bool _drawGrayTextWhenDisabled;
    _Bool _delayWindowOrderingOnClickThrough;
    struct TriStateBool _isEnabledCacheWhenNotKey;
    _Bool _isInsideWindowChangedKeyState;
    _Bool _stringSelectorUpdateTextWithAttributedString;
    struct shared_ptr<FI_TBestFitStringSelector> _bestFitStringSelector;
    shared_ptr_2ccd00e6 _bestFitFormatterSelector;
}

+ (Class)cellClass;
@property(nonatomic) _Bool delayWindowOrderingOnClickThrough; // @synthesize delayWindowOrderingOnClickThrough=_delayWindowOrderingOnClickThrough;
@property(nonatomic) _Bool drawGrayTextWhenDisabled; // @synthesize drawGrayTextWhenDisabled=_drawGrayTextWhenDisabled;
@property(nonatomic) _Bool autoAdjustHeightToFit; // @synthesize autoAdjustHeightToFit=_autoAdjustHeightToFit;
@property(nonatomic) _Bool autoSizeToFit; // @synthesize autoSizeToFit=_autoSizeToFit;
@property(nonatomic) _Bool idealSizeIsDirty; // @synthesize idealSizeIsDirty=_idealSizeIsDirty;
@property(nonatomic) struct CGSize minSize; // @synthesize minSize=_minSize;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setAccessibilityElement:(BOOL)arg1;
- (void)setFormatter:(id)arg1 withAttributes:(id)arg2;
- (void)setFormattersAndAttributes:(const unordered_map_6f91522d *)arg1 extraContentInsets:(const struct NSEdgeInsets *)arg2;
- (void)setSharedBestFitFormatterSelector:(const shared_ptr_2ccd00e6 *)arg1;
- (void)_updateBestFitFormatterInWidth:(double)arg1;
- (_Bool)hasBestFitFormatterSelector;
- (struct CGSize)intrinsicContentSize;
- (void)stringSelector:(struct FI_TBestFitStringSelector *)arg1 didChangeMinStringWidth:(double)arg2 maxStringWidth:(double)arg3;
- (void)_setBestFitAttributedString:(id)arg1;
- (void)setAttributedStringSet:(id)arg1 extraContentInsets:(const struct NSEdgeInsets *)arg2 updateTextWithAttributedString:(_Bool)arg3;
- (void)setStringSet:(const unordered_set_66d0470b *)arg1 extraContentInsets:(const struct NSEdgeInsets *)arg2;
- (void)_updateBestFitStringInWidth:(double)arg1;
- (_Bool)hasBestFitStringSelector;
- (BOOL)shouldDelayWindowOrderingForEvent:(id)arg1;
- (double)calcHeightToFit:(struct CGSize)arg1;
- (struct CGSize)calcSizeToFit;
- (struct CGSize)calcIdealSizeImpl;
- (void)calcIdealSize;
- (void)adjustHeightToFit;
- (void)sizeToFit;
- (void)setFont:(id)arg1;
- (void)_setAttributedStringValue:(id)arg1;
- (void)setAttributedStringValue:(id)arg1;
- (void)setObjectValue:(id)arg1;
- (void)_setStringValue:(id)arg1;
- (void)setStringValue:(id)arg1;
- (void)_setFormatter:(id)arg1;
- (void)setFormatter:(id)arg1;
- (void)setFrameSize:(struct CGSize)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)setSubpixelAntialiasing:(_Bool)arg1;
@property(nonatomic) _Bool centerVertically; // @dynamic centerVertically;
@property(nonatomic) struct _NSRange truncateInRange; // @dynamic truncateInRange;
@property(retain, nonatomic) NSColor *disabledTextColor; // @dynamic disabledTextColor;
@property(retain, nonatomic) NSColor *enabledTextColor; // @dynamic enabledTextColor;
@property(readonly, nonatomic) struct CGSize idealSize; // @synthesize idealSize=_idealSize;
- (unsigned long long)controlSize;
- (void)setControlSize:(unsigned long long)arg1;
- (id)textAttributes;
- (void)applySettingsFrom:(id)arg1;
- (id)copyTextField;
- (void)dealloc;
- (void)awakeCommon;
- (void)initCommon;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

