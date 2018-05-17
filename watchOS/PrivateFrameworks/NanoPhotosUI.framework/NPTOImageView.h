//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "NPTOIrisViewDelegate.h"
#import "UIScrollViewDelegate.h"

@class NPTOIrisView, NPTOPhoto, NSString, NSURL, PHAsset, UIImage, UIScrollView;

@interface NPTOImageView : UIView <UIScrollViewDelegate, NPTOIrisViewDelegate>
{
    _Bool _loaded;
    struct CGPoint _offcenterAdjustment;
    NSURL *_irisURL;
    double _irisSDT;
    double _irisVDT;
    id <NPTOImageViewDelegate> _delegate;
    NSString *_assetPath;
    PHAsset *_asset;
    NPTOPhoto *_photo;
    UIImage *_fullImage;
    UIScrollView *_scroller;
    NPTOIrisView *_imageView;
    float _zoomScale;
    struct CGPoint _contentOffset;
}

+ (void)savePhoto:(id)arg1 imageData:(id)arg2 irisURL:(id)arg3 contentOffset:(struct CGPoint)arg4 zoomScale:(float)arg5 supplement:(id)arg6 inDirectory:(id)arg7 completion:(CDUnknownBlockType)arg8;
+ (void)savePhoto:(id)arg1 contentOffset:(struct CGPoint)arg2 zoomScale:(float)arg3 supplement:(id)arg4 inDirectory:(id)arg5 completion:(CDUnknownBlockType)arg6;
+ (void)savePhoto:(id)arg1 contentOffset:(struct CGPoint)arg2 zoomScale:(float)arg3 inDirectory:(id)arg4 completion:(CDUnknownBlockType)arg5;
@property(nonatomic) struct CGPoint contentOffset; // @synthesize contentOffset=_contentOffset;
@property(nonatomic) float zoomScale; // @synthesize zoomScale=_zoomScale;
@property(retain, nonatomic) NPTOIrisView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIScrollView *scroller; // @synthesize scroller=_scroller;
@property(retain, nonatomic) UIImage *fullImage; // @synthesize fullImage=_fullImage;
@property(retain, nonatomic) NPTOPhoto *photo; // @synthesize photo=_photo;
@property(retain, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property(copy, nonatomic) NSString *assetPath; // @synthesize assetPath=_assetPath;
- (void).cxx_destruct;
- (void)setPhoto:(id)arg1 withImage:(id)arg2 allowIris:(_Bool)arg3;
@property(nonatomic) float interactiveProgress;
- (void)resumeInterruptedPlayback;
- (void)interruptPlayback;
- (_Bool)isPlaying;
- (void)pauseWithMode:(int)arg1;
- (void)playWithMode:(int)arg1;
- (void)prepareToPlayWithMode:(int)arg1;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)reload:(_Bool)arg1;
- (void)irisViewDidEndPlaying:(id)arg1;
- (void)irisViewDidBeginPlaying:(id)arg1;
- (void)layoutSubviews;
- (void)_updateView;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setDelegate:(id)arg1;
- (id)delegate;
- (void)setOffcenterAdjustment:(struct CGPoint)arg1;
- (struct CGPoint)offcenterAdjustment;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
