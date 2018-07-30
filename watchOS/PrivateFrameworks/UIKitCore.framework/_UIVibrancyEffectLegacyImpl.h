//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/_UIVibrancyEffectImpl.h>

@class UIVibrancyEffect;

__attribute__((visibility("hidden")))
@interface _UIVibrancyEffectLegacyImpl : _UIVibrancyEffectImpl
{
    int _style;
    _Bool _invertAutomaticStyle;
    UIVibrancyEffect *_effect;
}

@property(nonatomic) UIVibrancyEffect *effect; // @synthesize effect=_effect;
- (void)appendDescriptionTo:(id)arg1;
- (_Bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
- (id)implementationForUserInterfaceStyle:(int)arg1;
- (_Bool)invertAutomaticStyle;
- (int)style;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithStyle:(int)arg1 invertAutomaticStyle:(_Bool)arg2;

@end
