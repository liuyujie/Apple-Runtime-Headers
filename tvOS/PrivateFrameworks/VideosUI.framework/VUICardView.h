//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray, NSString, TVImageElement, UIView<VUIOverlayViewProtocol>, VUICardViewLayoutFactory, _TVImageView;

__attribute__((visibility("hidden")))
@interface VUICardView : UIView
{
    _Bool _hasAppImage;
    VUICardViewLayoutFactory *_layoutFactory;
    _TVImageView *_imageView;
    _TVImageView *_appImageView;
    NSArray *_labelViews;
    UIView<VUIOverlayViewProtocol> *_overlayView;
    NSString *_debugString;
    TVImageElement *_imageElement;
    TVImageElement *_appImageElement;
}

@property(nonatomic) _Bool hasAppImage; // @synthesize hasAppImage=_hasAppImage;
@property(retain, nonatomic) TVImageElement *appImageElement; // @synthesize appImageElement=_appImageElement;
@property(retain, nonatomic) TVImageElement *imageElement; // @synthesize imageElement=_imageElement;
@property(copy, nonatomic) NSString *debugString; // @synthesize debugString=_debugString;
@property(retain, nonatomic) UIView<VUIOverlayViewProtocol> *overlayView; // @synthesize overlayView=_overlayView;
@property(copy, nonatomic) NSArray *labelViews; // @synthesize labelViews=_labelViews;
@property(retain, nonatomic) _TVImageView *appImageView; // @synthesize appImageView=_appImageView;
@property(retain, nonatomic) _TVImageView *imageView; // @synthesize imageView=_imageView;
@property(readonly, nonatomic) VUICardViewLayoutFactory *layoutFactory; // @synthesize layoutFactory=_layoutFactory;
- (void).cxx_destruct;
- (void)_mainImageLoaded;
- (double)_textOffset;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)prepareForCellReuse;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 layoutFactory:(id)arg2;

@end
