//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPNumberPadLightStyleButton.h"

#import "SBUIPasscodeNumberPadButton.h"

@class NSString, UIColor;

@interface SBLightPasscodeNumberPadButton : TPNumberPadLightStyleButton <SBUIPasscodeNumberPadButton>
{
    UIColor *_reduceTransparencyButtonColor;
}

+ (float)highlightedCircleViewAlpha;
+ (float)unhighlightedCircleViewAlpha;
+ (_Bool)_shouldUseAlternativeCirlceViewAlphas;
+ (_Bool)usesTelephonyGlyphsWhereAvailable;
+ (float)_numberPadButtonOuterCircleDiameter;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (struct CGSize)defaultSize;
@property(retain, nonatomic) UIColor *reduceTransparencyButtonColor; // @synthesize reduceTransparencyButtonColor=_reduceTransparencyButtonColor;
- (void).cxx_destruct;
- (id)stringCharacter;
- (int)characterType;
- (id)initForCharacter:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

