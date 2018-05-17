//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "CLKTimeFormatterObserver.h"
#import "NTKTimeView.h"

@class CLKTimeFormatter, NSString, NTKVictoryDigitsView;

@interface NTKVictoryDigitalTimeView : UIView <CLKTimeFormatterObserver, NTKTimeView>
{
    NTKVictoryDigitsView *_upperDigitsView;
    NTKVictoryDigitsView *_lowerDigitsView;
    NTKVictoryDigitsView *_flipDigitsView;
    _Bool _flipViewIsLower;
    CLKTimeFormatter *_timeFormatter;
    _Bool _frozen;
    unsigned int _style;
    unsigned int _color;
}

+ (id)transitionTimingFunction;
@property(nonatomic) unsigned int color; // @synthesize color=_color;
@property(nonatomic) unsigned int style; // @synthesize style=_style;
@property(nonatomic, getter=isFrozen) _Bool frozen; // @synthesize frozen=_frozen;
- (void).cxx_destruct;
- (void)timeFormatterTextDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)setTimeOffset:(double)arg1;
- (void)setOverrideDate:(id)arg1 duration:(double)arg2;
- (void)applyTransitionFraction:(float)arg1 fromColor:(unsigned int)arg2 toColor:(unsigned int)arg3;
- (int)_lowerDigitAppearanceForStyle:(unsigned int)arg1;
- (int)_upperDigitAppearanceForStyle:(unsigned int)arg1;
- (void)_setFlipViewIsLower:(_Bool)arg1;
- (void)applyTransitionFraction:(float)arg1 fromStyle:(unsigned int)arg2 toStyle:(unsigned int)arg3;
- (void)_resetDigitAppearanceForStyle:(unsigned int)arg1;
- (void)clearEditingTransitions;
- (void)willBeginEditing;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
