//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import "NSSecureCoding.h"

@class NSArray, NSString, UIImage, UIVisualEffect, _UIVisualEffectBackdropView, _UIVisualEffectHost, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectViewCapturedState, _UIVisualEffectViewCornerMask;

@interface UIVisualEffectView : UIView <NSSecureCoding>
{
    UIView *_maskView;
    UIImage *_maskImage;
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
    _UIVisualEffectHost *_backgroundHost;
    _UIVisualEffectHost *_contentHost;
    _Bool _backgroundHostNeedsUpdate;
    _Bool _contentHostNeedsUpdate;
    _Bool _isDependent;
    _Bool _noiseEnabled;
    float _backdropViewBackgroundColorAlpha;
    _Bool _useReducedTransparencyForContentHost;
    _Bool __useKeyframeWorkaround;
    _Bool _useLiveMasking;
    UIVisualEffect *_effect;
    _UIVisualEffectViewCornerMask *__cornerMask;
    _UIVisualEffectViewCapturedState *__capturedStateDuringAnimation;
    NSArray *__captureDependents;
    NSArray *_backgroundEffects;
    NSArray *_contentEffects;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=_useLiveMasking, setter=_setUseLiveMasking:) _Bool useLiveMasking; // @synthesize useLiveMasking=_useLiveMasking;
@property(copy, nonatomic) NSArray *contentEffects; // @synthesize contentEffects=_contentEffects;
@property(copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(copy, nonatomic, setter=_setCaptureDependents:) NSArray *_captureDependents; // @synthesize _captureDependents=__captureDependents;
@property(retain, nonatomic, getter=_capturedStateDuringAnimation, setter=_setCapturedStateDuringAnimation:) _UIVisualEffectViewCapturedState *_capturedStateDuringAnimation; // @synthesize _capturedStateDuringAnimation=__capturedStateDuringAnimation;
@property(nonatomic, setter=_setUseKeyframeWorkaround:) _Bool _useKeyframeWorkaround; // @synthesize _useKeyframeWorkaround=__useKeyframeWorkaround;
@property(retain, nonatomic, setter=_setCornerMask:) _UIVisualEffectViewCornerMask *_cornerMask; // @synthesize _cornerMask=__cornerMask;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
@property(readonly, nonatomic) _UIVisualEffectViewBackdropCaptureGroup *_captureGroup; // @synthesize _captureGroup;
- (void).cxx_destruct;
- (id)_backdropSubview;
- (void)_setTintOpacity:(float)arg1;
- (id)_whatsWrongWithThisEffect;
- (id)_backgroundHost;
- (id)_contentHost;
- (id)_debug;
- (void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3;
- (void)layoutSubviews;
@property(nonatomic, getter=_useReducedTransparencyForContentEffects, setter=_setUseReducedTransparencyForContentEffects:) _Bool useReducedTransparencyForContentEffects;
@property(retain, nonatomic, setter=_setMaskImage:) UIImage *_maskImage;
- (id)_maskView;
- (void)_setMaskView:(id)arg1;
- (id)_maskImageForMaskView:(id)arg1;
@property(nonatomic, getter=_backdropViewBackgroundColorAlpha, setter=_setBackdropViewBackgroundColorAlpha:) float _backdropViewBackgroundColorAlpha;
@property(nonatomic, getter=_isNoiseEnabled, setter=_setNoiseEnabled:) _Bool _noiseEnabled; // @synthesize _noiseEnabled;
@property(readonly, nonatomic) _Bool _applyCornerMaskToSelf;
- (void)_setCornerRadius:(float)arg1 continuous:(_Bool)arg2 maskedCorners:(unsigned int)arg3;
- (void)_setContinuousCornerRadius:(float)arg1;
- (float)_continuousCornerRadius;
@property(nonatomic, setter=_setCornerRadius:) float _cornerRadius;
- (void)_applyCornerRadiusToSubviews;
@property(nonatomic, setter=_setCaptureView:) __weak _UIVisualEffectBackdropView *_captureView;
@property(copy, nonatomic, setter=_setGroupName:) NSString *_groupName;
- (void)_configureAllEffects;
- (_Bool)_hasTransformForEffectSubview:(id)arg1;
- (_Bool)_shouldManageCornerRadiusForEffectSubview:(id)arg1;
- (void)_updateSubviews;
- (void)_updateEffectForReducedTransparency;
- (void)_resetEffect;
- (void)_updateEffectBackgroundColor;
- (void)_updateEffectForAlphaTransitionDidEnd:(id)arg1;
- (void)_updateEffectForAlphaTransitionWillBegin:(id)arg1;
- (void)_updateEffectForSnapshotDidEnd:(id)arg1;
- (void)_updateEffectForSnapshotWillBegin:(id)arg1;
- (void)_configureEffects;
- (id)_effectNodeForEffects:(id)arg1 traits:(id)arg2 options:(id)arg3;
- (void)_updateEffectsFromLegacyEffect;
- (void)_setEffect:(id)arg1;
- (void)_generateAnimationsForPendingKeyframes:(id)arg1 duration:(double)arg2;
- (void)_generateWorkaroundKeyframeAnimationsForEffects:(id)arg1;
- (id)_initialValueForKey:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;
- (void)didMoveToWindow;
- (void)didMoveToSuperview;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (void)setContentView:(id)arg1;
@property(readonly, nonatomic) UIView *contentView;
- (void)_populateArchivedSubviews:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;
- (void)_ensureContentHostWithView:(id)arg1;
- (void)_ensureBackgroundHost;
- (void)_commonInit;
- (void)_unregisterNotifications;
- (void)_registerNotifications;
- (void)_updateEffectForAccessibilityChanges:(id)arg1;
- (id)_captureStateForCurrentAnimationBlockCreatingIfNecessary:(_Bool)arg1 clearingCache:(_Bool)arg2;

@end

