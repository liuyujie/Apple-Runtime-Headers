//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "PKMicaResizableView.h"

@class CALayer, NSArray, NSMutableArray, NSString, UIColor;

@interface PKFingerprintGlyphView : UIView <PKMicaResizableView>
{
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_backgroundShapeLayers;
    NSArray *_foregroundShapeLayers;
    NSArray *_foregroundRingShapeLayers;
    CALayer *_maskLayer;
    CALayer *_maskForegroundLayer;
    unsigned int _transitionIndex;
    _Bool _transitioning;
    int _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    _Bool _rotatingRing;
    NSString *_rotationAnimationKey;
    _Bool _fadeOnRecognized;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    int _state;
    CALayer *_contentLayer;
    id <PKFingerprintGlyphViewDelegate> _delegate;
}

@property(nonatomic) __weak id <PKFingerprintGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
@property(nonatomic) _Bool fadeOnRecognized; // @synthesize fadeOnRecognized=_fadeOnRecognized;
@property(copy, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property(copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
- (void).cxx_destruct;
- (id)pathStateForLayer:(id)arg1;
- (void)setPathState:(id)arg1 forLayer:(id)arg2;
- (void)setSecondaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)setPrimaryColor:(struct UIColor *)arg1 animated:(_Bool)arg2;
- (void)_setProgress:(float)arg1 withDuration:(double)arg2 forShapeLayerAtIndex:(unsigned int)arg3;
- (void)setProgress:(float)arg1 withDuration:(double)arg2;
- (void)setContentLayerOpacity:(float)arg1 withDuration:(double)arg2;
- (void)_endRotationAnimation;
- (void)_startRotationAnimation;
- (void)_restartRotationIfNecessary;
- (void)_updateRotationAnimationsIfNecessary;
- (void)_setRingState:(unsigned int)arg1 withTransitionIndex:(unsigned int)arg2 animated:(_Bool)arg3;
- (void)_continueHoldingStateForPathAtIndex:(unsigned int)arg1 withTransitionIndex:(unsigned int)arg2;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned int)arg1;
- (void)_showFingerprintWithTransitionIndex:(unsigned int)arg1 animated:(_Bool)arg2;
- (void)_performTransitionWithTransitionIndex:(unsigned int)arg1 animated:(_Bool)arg2;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_finishTransitionForIndex:(unsigned int)arg1;
- (void)_executeTransitionCompletionHandlers:(_Bool)arg1;
- (void)setState:(int)arg1 animated:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)setRecognizedIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGSize)boundsSizeToMatchPointScale:(float)arg1;
- (float)pointScaleToMatchBoundsSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)didMoveToWindow;
- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
