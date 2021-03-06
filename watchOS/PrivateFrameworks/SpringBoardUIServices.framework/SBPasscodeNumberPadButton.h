//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TPNumberPadDarkStyleButton.h"

#import "SBUIPasscodeNumberPadButton.h"

@class NSString, UIColor;

@interface SBPasscodeNumberPadButton : TPNumberPadDarkStyleButton <SBUIPasscodeNumberPadButton>
{
    UIColor *_reduceTransparencyButtonColor;
}

+ (float)highlightedCircleViewAlpha;
+ (float)unhighlightedCircleViewAlpha;
+ (_Bool)_shouldUseAlternativeCirlceViewAlphas;
+ (float)_numberPadButtonOuterCircleDiameter;
+ (struct UIEdgeInsets)paddingOutsideRing;
+ (struct CGSize)defaultSize;
+ (id)_stringCharacterForCharacter:(unsigned int)arg1;
+ (int)_characterTypeForCharacter:(unsigned int)arg1;
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

