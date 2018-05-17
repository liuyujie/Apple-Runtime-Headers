//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "NSSecureCoding.h"

@class NSArray, NSString, UIImage, UIVisualEffect, _UIVisualEffectBackdropView, _UIVisualEffectHost, _UIVisualEffectViewBackdropCaptureGroup, _UIVisualEffectViewCapturedState;

@interface UIVisualEffectView : UIView <NSSecureCoding>
{
    struct {
        unsigned int suppressReportingEmptyContentView:1;
        unsigned int cornerRadiusIsContinuous:1;
    } _effectViewFlags;
    UIView *_maskView;
    UIImage *_maskImage;
    _UIVisualEffectViewBackdropCaptureGroup *_captureGroup;
    _UIVisualEffectHost *_backgroundHost;
    _UIVisualEffectHost *_contentHost;
    _Bool _backgroundHostNeedsUpdate;
    _Bool _contentHostNeedsUpdate;
    _Bool _noiseEnabled;
    float _backdropViewBackgroundColorAlpha;
    _Bool _useReducedTransparencyForContentHost;
    _Bool __useKeyframeWorkaround;
    _Bool _useLiveMasking;
    float _cornerRadius;
    UIVisualEffect *_effect;
    _UIVisualEffectViewCapturedState *__capturedStateDuringAnimation;
    NSArray *_backgroundEffects;
    NSArray *_contentEffects;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic, getter=_useLiveMasking, setter=_setUseLiveMasking:) _Bool useLiveMasking; // @synthesize useLiveMasking=_useLiveMasking;
@property(copy, nonatomic) NSArray *contentEffects; // @synthesize contentEffects=_contentEffects;
@property(copy, nonatomic) NSArray *backgroundEffects; // @synthesize backgroundEffects=_backgroundEffects;
@property(retain, nonatomic, getter=_capturedStateDuringAnimation, setter=_setCapturedStateDuringAnimation:) _UIVisualEffectViewCapturedState *_capturedStateDuringAnimation; // @synthesize _capturedStateDuringAnimation=__capturedStateDuringAnimation;
@property(nonatomic, setter=_setUseKeyframeWorkaround:) _Bool _useKeyframeWorkaround; // @synthesize _useKeyframeWorkaround=__useKeyframeWorkaround;
@property(copy, nonatomic) UIVisualEffect *effect; // @synthesize effect=_effect;
@property(nonatomic, setter=_setCornerRadius:) float _cornerRadius; // @synthesize _cornerRadius;
- (void).cxx_destruct;
- (id)_backdropSubview;
- (void)_setTintOpacity:(float)arg1;
- (id)_whatsWrongWithThisEffect;
- (id)_backgroundHost;
- (id)_contentHost;
- (id)_debug;
- (void)_addSubview:(id)arg1 positioned:(int)arg2 relativeTo:(id)arg3;
- (void)viewDidMoveToSuperview;
- (void)layoutSubviews;
@property(nonatomic, getter=_useReducedTransparencyForContentEffects, setter=_setUseReducedTransparencyForContentEffects:) _Bool useReducedTransparencyForContentEffects;
@property(retain, nonatomic, setter=_setMaskImage:) UIImage *_maskImage;
- (id)_maskView;
- (void)_setMaskView:(id)arg1;
- (id)_maskImageForMaskView:(id)arg1;
@property(nonatomic, getter=_backdropViewBackgroundColorAlpha, setter=_setBackdropViewBackgroundColorAlpha:) float _backdropViewBackgroundColorAlpha;
- (_Bool)_isNoiseEnabled;
- (void)_setNoiseEnabled:(_Bool)arg1;
- (void)_setContinuousCornerRadius:(float)arg1;
- (float)_continuousCornerRadius;
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
