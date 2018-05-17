//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class AVCaptureVideoPreviewLayer, CMKEffectsFullsizeView, CMKEffectsGridLabelsView, CMKEffectsGridView, NSString;

@interface CMKVideoPreviewView : UIView
{
    NSString *_videoGravity;
    _Bool _disableLayoutForPreviewView;
    _Bool _disableLayoutForEffectsFullsizeView;
    _Bool _disableLayoutForEffectsGridViews;
    _Bool _square;
    AVCaptureVideoPreviewLayer *_previewLayer;
    int _orientation;
    UIView *_previewLayerView;
    CMKEffectsFullsizeView *_effectsFullsizeView;
    CMKEffectsGridView *_effectsGridView;
    CMKEffectsGridLabelsView *_effectsGridLabelsView;
    UIView *_fadeOutView;
}

@property(nonatomic, getter=isSquare) _Bool square; // @synthesize square=_square;
@property(nonatomic, getter=isDisabledLayoutForEffectsGridViews) _Bool disableLayoutForEffectsGridViews; // @synthesize disableLayoutForEffectsGridViews=_disableLayoutForEffectsGridViews;
@property(nonatomic, getter=isDisabledLayoutForEffectsFullsizeView) _Bool disableLayoutForEffectsFullsizeView; // @synthesize disableLayoutForEffectsFullsizeView=_disableLayoutForEffectsFullsizeView;
@property(nonatomic, getter=isDisabledLayoutForPreviewView) _Bool disableLayoutForPreviewView; // @synthesize disableLayoutForPreviewView=_disableLayoutForPreviewView;
@property(readonly, retain, nonatomic) UIView *fadeOutView; // @synthesize fadeOutView=_fadeOutView;
@property(readonly, retain, nonatomic) CMKEffectsGridLabelsView *effectsGridLabelsView; // @synthesize effectsGridLabelsView=_effectsGridLabelsView;
@property(readonly, retain, nonatomic) CMKEffectsGridView *effectsGridView; // @synthesize effectsGridView=_effectsGridView;
@property(readonly, retain, nonatomic) CMKEffectsFullsizeView *effectsFullsizeView; // @synthesize effectsFullsizeView=_effectsFullsizeView;
@property(readonly, retain, nonatomic) UIView *previewLayerView; // @synthesize previewLayerView=_previewLayerView;
@property(nonatomic) int orientation; // @synthesize orientation=_orientation;
@property(retain, nonatomic) AVCaptureVideoPreviewLayer *previewLayer; // @synthesize previewLayer=_previewLayer;
- (void).cxx_destruct;
- (void)updateToContentSize:(id)arg1;
- (void)layoutSubviews;
- (struct CGRect)convertRect:(struct CGRect)arg1 toSublayer:(id)arg2;
- (struct CGRect)frameForView:(id)arg1;
- (struct CGRect)_frameForSubviewsAccountForSquare:(_Bool)arg1;
- (struct CGRect)rectForCaptureDeviceFace:(id)arg1;
- (void)destroyEffectsGridViewsRemoveFromSuperview:(_Bool)arg1;
- (void)createEffectsGridViews;
- (void)destroyEffectsFullsizeViewRemoveFromSuperview:(_Bool)arg1;
- (void)createEffectsFullsizeView;
- (void)_updateGravityForLayers;
- (void)setOrientation:(int)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *videoGravity;
- (void)setSquare:(_Bool)arg1 animated:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
