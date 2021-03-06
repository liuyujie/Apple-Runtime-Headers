//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIVisualEffect.h>

@class UIColor, _UIBlurEffectImpl;

@interface UIBlurEffect : UIVisualEffect
{
    _UIBlurEffectImpl *_impl;
}

+ (void)_addBlurToEffectNode:(id)arg1 blurRadius:(float)arg2 scale:(float)arg3 options:(id)arg4;
+ (_Bool)supportsSecureCoding;
+ (id)effectWithBlurRadius:(float)arg1;
+ (id)_effectWithStyle:(int)arg1 tintColor:(id)arg2 invertAutomaticStyle:(_Bool)arg3;
+ (id)_effectWithStyle:(int)arg1 invertAutomaticStyle:(_Bool)arg2;
+ (id)_effectWithTintColor:(id)arg1;
+ (id)effectWithStyle:(int)arg1;
- (void).cxx_destruct;
- (id)effectSettings;
- (id)description;
- (_Bool)_isAutomaticStyle;
- (_Bool)_isATVStyle;
- (id)effectForUserInterfaceStyle:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (int)_expectedUsage;
- (_Bool)_needsUpdateForOption:(id)arg1;
- (_Bool)_needsUpdateForTransitionFromTraitCollection:(id)arg1 toTraitCollection:(id)arg2;
- (void)_updateEffectNode:(id)arg1 forTraitCollection:(id)arg2;
@property(readonly, nonatomic) _Bool _canProvideVibrancyEffect;
@property(readonly, nonatomic) _Bool _invertAutomaticStyle;
@property(readonly, nonatomic) UIColor *_tintColor;
@property(readonly, nonatomic) int _style;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithImplementation:(id)arg1;
- (id)init;

@end

