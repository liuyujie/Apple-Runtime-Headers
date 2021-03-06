//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NTKComplicationDisplay.h"
#import "NTKZeusComplicationDisplay.h"

@class CLKDevice, NSString, NTKZeusColorPalette;

@interface NTKZeusComplicationView : UIView <NTKComplicationDisplay, NTKZeusComplicationDisplay>
{
    UIView *_highlightView;
    _Bool _highlighted;
    id <NTKComplicationDisplayObserver> displayObserver;
    unsigned long long _style;
    NTKZeusColorPalette *_palette;
    CLKDevice *_device;
}

+ (id)viewForComplicationType:(unsigned long long)arg1;
@property(readonly, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(readonly, nonatomic) NTKZeusColorPalette *palette; // @synthesize palette=_palette;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (void).cxx_destruct;
- (void)applyTransitionFraction:(double)arg1 fromPalette:(id)arg2 toPalette:(id)arg3;
- (void)applyPalette:(id)arg1;
- (struct CGRect)contentFrame;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

